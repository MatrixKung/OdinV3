// TODO:
// Text Center
// Text Shadow -> FontRenderInfo
// Text Outline -> FontRenderInfo Glow perhaps ?
// Line Thickness -> Loop ?

wchar_t* s2wc(const char* c)
{
	const size_t cSize = strlen(c) + 1;
	wchar_t* wc = new wchar_t[cSize];
	mbstowcs(wc, c, cSize);

	return wc;
}

namespace ZeroGUI
{
	namespace Utils {
		void DrawText(UCanvas* canvas, const char* text, FVector2D pos, FVector2D scale, FColor color, FFontRenderInfo* renderInfo = NULL) {
			FVector2D oldPos = FVector2D(canvas->CurX, canvas->CurY);
			FColor oldColor = canvas->DrawColor;

			canvas->STATIC_SetPos(pos.X, pos.Y, 0.f);
			canvas->STATIC_SetDrawColor(color.R, color.G, color.B, color.A);

			canvas->DrawText(FString(s2wc(text)), false, scale.X, scale.Y, EDisplayPlane::DISPLAYPLANE_HUD, renderInfo);

			canvas->STATIC_SetPos(oldPos.X, oldPos.Y, 0.f);
			canvas->STATIC_SetDrawColor(oldColor.R, oldColor.G, oldColor.B, oldColor.A);
		}

		void DrawLine(UCanvas* canvas, FVector2D from, FVector2D to, FColor color) {
			canvas->Draw2DLine(from.X, from.Y, to.X, to.Y, color);
		}
	}

	namespace Colors
	{
		FColor Text = FColor{ 255, 255, 255, 255 };
		FColor Text_Shadow = FColor{ 0, 0, 0, 0 };
		FColor Text_Outline = FColor{ 0, 0, 0, 76 };

		FColor Window_Background = FColor{ 29, 29, 29, 255 };
		FColor Window_Header = FColor{ 199, 62, 135, 255 };
		FColor Tabs_Background = FColor{ 9, 9, 9, 255 };

		FColor Button_Idle = FColor{ 199, 62, 135, 255 };
		FColor Button_Hovered = FColor{ 210, 112, 166, 255 };
		FColor Button_Active = FColor{ 210, 112, 166, 255 };

		FColor Checkbox_Idle = FColor{ 54, 54, 54, 255 };
		FColor Checkbox_Hovered = FColor{ 104, 32, 71, 255 };
		FColor Checkbox_Enabled = FColor{ 210, 112, 166, 255 };

		FColor Combobox_Idle = FColor{ 54, 54, 54, 255 };
		FColor Combobox_Hovered = FColor{ 210, 112, 166, 255 };
		FColor Combobox_Elements = FColor{ 210, 112, 166, 255 };

		FColor Slider_Idle = FColor{ 54, 54, 54, 255 };
		FColor Slider_Hovered = FColor{ 224, 162, 197, 255 };
		FColor Slider_Progress = FColor{ 210, 112, 166, 255 };
		FColor Slider_Button = FColor{ 199, 62, 135, 255 };

		FColor ColorPicker_Background = FColor{ 1, 1, 1, 255 };
		FColor Pixel_Outline = FColor{ 0, 0, 0, 255 };

		// ESP
		FColor Visible = FColor{ 255, 0, 0, 255 };
		FColor Not_Visible = FColor{ 255, 255, 255, 255 };

		FColor ESP_Text = FColor{ 255, 255, 255, 255 };
		FColor ESP_Box = FColor{ 255, 0, 0, 255 };
		FColor ESP_Fov = FColor{ 255, 255, 255, 255 };

		FColor Cursor = FColor{ 199, 62, 135, 255 };
	}

	namespace PostRenderer
	{
		struct DrawList
		{
			int type = -1; //1 = FilledRect, 2 = TextLeft, 3 = TextLeft, 4 = Draw_Line
			FVector2D pos;
			FVector2D size;
			FColor color;
			char* name;
			bool outline;

			FVector2D from;
			FVector2D to;
		};
		DrawList drawlist[128];

		void drawFilledRect(FVector2D pos, float w, float h, FColor color)
		{
			for (int i = 0; i < 128; i++)
			{
				if (drawlist[i].type == -1)
				{
					drawlist[i].type = 1;
					drawlist[i].pos = pos;
					drawlist[i].size = FVector2D{ w, h };
					drawlist[i].color = color;
					return;
				}
			}
		}
		void TextLeft(char* name, FVector2D pos, FColor color)
		{
			for (int i = 0; i < 128; i++)
			{
				if (drawlist[i].type == -1)
				{
					drawlist[i].type = 2;
					drawlist[i].name = name;
					drawlist[i].pos = pos;
					drawlist[i].color = color;
					return;
				}
			}
		}
		void TextLeft(char* name, FVector2D pos, FColor color, bool outline)
		{
			for (int i = 0; i < 128; i++)
			{
				if (drawlist[i].type == -1)
				{
					drawlist[i].type = 3;
					drawlist[i].name = name;
					drawlist[i].pos = pos;
					drawlist[i].outline = outline;
					drawlist[i].color = color;
					return;
				}
			}
		}
		void Draw_Line(FVector2D from, FVector2D to, FColor color)
		{
			for (int i = 0; i < 128; i++)
			{
				if (drawlist[i].type == -1)
				{
					drawlist[i].type = 4;
					drawlist[i].from = from;
					drawlist[i].to = to;
					drawlist[i].color = color;
					return;
				}
			}
		}
	}

	UCanvas* canvas;


	bool hover_element = false;
	FVector2D menu_pos = FVector2D{ 0, 0 };
	float offset_x = 0.0f;
	float offset_y = 0.0f;

	FVector2D first_element_pos = FVector2D{ 0, 0 };

	FVector2D last_element_pos = FVector2D{ 0, 0 };
	FVector2D last_element_size = FVector2D{ 0, 0 };

	int current_element = -1;
	FVector2D current_element_pos = FVector2D{ 0, 0 };
	FVector2D current_element_size = FVector2D{ 0, 0 };
	int elements_count = 0;

	bool sameLine = false;

	bool pushY = false;
	float pushYvalue = 0.0f;

	void SetupCanvas(UCanvas* _canvas)
	{
		canvas = _canvas;
	}

	FVector2D CursorPos()
	{
		//POINT cursorPos;
		//GetCursorPos(&cursorPos);
		//return FVector2D{ (float)cursorPos.x, (float)cursorPos.y };
		return Globals::LocalPlayer->ViewportClient->GetMousePosition();
	}
	bool MouseInZone(FVector2D pos, FVector2D size)
	{
		FVector2D cursor_pos = CursorPos();

		if (cursor_pos.X > pos.X && cursor_pos.Y > pos.Y)
			if (cursor_pos.X < pos.X + size.X && cursor_pos.Y < pos.Y + size.Y)
				return true;

		return false;
	}

	void Draw_Cursor(bool toogle)
	{
		if (toogle)
		{
			FVector2D cursorPos = CursorPos();
			Utils::DrawLine(canvas, FVector2D{ cursorPos.X, cursorPos.Y }, FVector2D{ cursorPos.X + 35, cursorPos.Y + 10 }, Colors::Cursor);


			float x = 35.0f;
			float y = 10.0f;
			while (y != 30.0f) //40 steps
			{
				x -= 0.5f; if (x < 15.0f) x = 15.0f;
				y += 0.5f; if (y > 30.0f) y = 30.0f;

				Utils::DrawLine(canvas, FVector2D{ cursorPos.X, cursorPos.Y }, FVector2D{ cursorPos.X + x, cursorPos.Y + y }, Colors::Cursor);
			}

			Utils::DrawLine(canvas, FVector2D{ cursorPos.X, cursorPos.Y }, FVector2D{ cursorPos.X + 15, cursorPos.Y + 30 }, Colors::Cursor);
			Utils::DrawLine(canvas, FVector2D{ cursorPos.X + 35, cursorPos.Y + 10 }, FVector2D{ cursorPos.X + 15, cursorPos.Y + 30 }, Colors::Cursor);
		}
	}

	void SameLine()
	{
		sameLine = true;
	}

	void PushNextElementY(float y, bool from_last_element = true)
	{
		pushY = true;
		if (from_last_element)
			pushYvalue = last_element_pos.Y + last_element_size.Y + y;
		else
			pushYvalue = y;
	}

	void NextColumn(float x)
	{
		offset_x = x;
		PushNextElementY(first_element_pos.Y, false);
	}

	void ClearFirstPos()
	{
		first_element_pos = FVector2D{ 0, 0 };
	}

	void TextLeft(const char* name, FVector2D pos, FColor color)
	{
		int length = strlen(name) + 1;
		Utils::DrawText(canvas, name, pos, FVector2D{ 0.97f, 0.97f }, color);
	}

	void GetColor(FColor* color, int* r, int* g, int* b, int* a)
	{
		*r = color->R;
		*g = color->G;
		*b = color->B;
		*a = color->A;
	}
	UINT32 GetColorUINT(int r, int g, int b, int a)
	{
		UINT32 result = (BYTE(a) << 24) + (BYTE(r) << 16) + (BYTE(g) << 8) + BYTE(b);
		return result;
	}

	void Draw_Line(FVector2D from, FVector2D to, FColor color)
	{
		Utils::DrawLine(canvas, FVector2D{ from.X, from.Y }, FVector2D{ to.X, to.Y }, color);
	}

	void drawFilledRect(FVector2D initial_pos, float w, float h, FColor color)
	{
		for (float i = 0.0f; i < h; i += 1.0f)
			Utils::DrawLine(canvas, FVector2D{ initial_pos.X, initial_pos.Y + i }, FVector2D{ initial_pos.X + w, initial_pos.Y + i }, color);
	}

	void DrawFilledCircle(FVector2D pos, float r, FColor color)
	{
		float smooth = 0.07f;

		double PI = 3.14159265359;
		int size = (int)(2.0f * PI / smooth) + 1;

		float angle = 0.0f;
		int i = 0;

		for (; angle < 2 * PI; angle += smooth, i++)
		{
			Draw_Line(FVector2D{ pos.X, pos.Y }, FVector2D{ pos.X + cosf(angle) * r, pos.Y + sinf(angle) * r }, color);
		}
	}

	void DrawCircle(FVector2D pos, int radius, int numSides, FColor Color)
	{
		float PI = 3.1415927f;

		float Step = PI * 2.0 / numSides;
		int Count = 0;
		FVector2D V[128];
		for (float a = 0; a < PI * 2.0; a += Step) {
			float X1 = radius * cos(a) + pos.X;
			float Y1 = radius * sin(a) + pos.Y;
			float X2 = radius * cos(a + Step) + pos.X;
			float Y2 = radius * sin(a + Step) + pos.Y;
			V[Count].X = X1;
			V[Count].Y = Y1;
			V[Count + 1].X = X2;
			V[Count + 1].Y = Y2;
			//Draw_Line(FVector2D{ pos.X, pos.Y }, FVector2D{ X2, Y2 }, 1.0f, Color); // Points from Centre to ends of circle
			Draw_Line(FVector2D{ V[Count].X, V[Count].Y }, FVector2D{ X2, Y2 }, Color);// Circle Around
		}
	}

	FVector2D dragPos;
	bool Window(const char* name, FVector2D* pos, FVector2D size, bool isOpen)
	{
		elements_count = 0;

		if (!isOpen)
			return false;

		bool isHovered = MouseInZone(FVector2D{ pos->X, pos->Y }, size);

		//Drop last element
		if (current_element != -1 && !o_getasynckeystate((DWORD)0x1))
		{
			current_element = -1;
		}

		//Drag
		if (hover_element && o_getasynckeystate((DWORD)0x1))
		{

		}
		else if ((isHovered || dragPos.X != 0) && !hover_element)
		{
			if (Input::IsMouseClicked(0, elements_count, true))
			{
				FVector2D cursorPos = CursorPos();

				cursorPos.X -= size.X;
				cursorPos.Y -= size.Y;

				if (dragPos.X == 0)
				{
					dragPos.X = (cursorPos.X - pos->X);
					dragPos.Y = (cursorPos.Y - pos->Y);
				}
				pos->X = cursorPos.X - dragPos.X;
				pos->Y = cursorPos.Y - dragPos.Y;
			}
			else
			{
				dragPos = FVector2D{ 0, 0 };
			}
		}
		else
		{
			hover_element = false;
		}


		offset_x = 0.0f; offset_y = 0.0f;
		menu_pos = FVector2D{ pos->X, pos->Y };
		first_element_pos = FVector2D{ 0, 0 };
		current_element_pos = FVector2D{ 0, 0 };
		current_element_size = FVector2D{ 0, 0 };

		//Bg
		drawFilledRect(FVector2D{ pos->X, pos->Y }, size.X, size.Y, Colors::Window_Background);
		drawFilledRect(FVector2D{ pos->X, pos->Y }, 122, size.Y, Colors::Tabs_Background); //My tabs bg

		//Header
		drawFilledRect(FVector2D{ pos->X, pos->Y }, size.X, 25.0f, Colors::Window_Header);

		offset_y += 25.0f;

		//Title
		FVector2D titlePos = FVector2D{ pos->X + size.X / 4, pos->Y + 25 / 4 };
		TextLeft(name, titlePos, Colors::Text);

		return true;
	}

	void Text(const char* text)
	{
		elements_count++;

		float size = 25;
		FVector2D padding = FVector2D{ 10, 10 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}

		if (!sameLine)
			offset_y += size + padding.Y;

		//Text
		FVector2D textPos = FVector2D{ pos.X + 5.0f, pos.Y + size / 2 };
		TextLeft(text, textPos, Colors::Text);

		sameLine = false;
		last_element_pos = pos;
		//last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;
	}

	bool ButtonTab(const char* name, FVector2D size, bool active)
	{
		elements_count++;

		FVector2D padding = FVector2D{ 5, 10 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, size);

		//Bg
		if (active)
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size.X, size.Y, Colors::Button_Active);
		}
		else if (isHovered)
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size.X, size.Y, Colors::Button_Hovered);
			hover_element = true;
		}
		else
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size.X, size.Y, Colors::Button_Idle);
		}

		if (!sameLine)
			offset_y += size.Y + padding.Y;

		//Text
		FVector2D textPos = FVector2D{ pos.X + size.X / 4, pos.Y + size.Y / 4 };
		TextLeft(name, textPos, Colors::Text);

		sameLine = false;
		last_element_pos = pos;
		last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;

		if (isHovered && Input::IsMouseClicked(0, elements_count, false))
			return true;

		return false;
	}

	bool Button(const char* name, FVector2D size)
	{
		elements_count++;

		FVector2D padding = FVector2D{ 5, 10 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, size);

		//Bg
		if (isHovered)
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size.X, size.Y, Colors::Button_Hovered);
			hover_element = true;
		}
		else
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size.X, size.Y, Colors::Button_Idle);
		}

		if (!sameLine)
			offset_y += size.Y + padding.Y;

		//Text
		FVector2D textPos = FVector2D{ pos.X + size.X / 4, pos.Y + size.Y / 4 };
		//if (!TextOverlapedFromActiveElement(textPos))
		TextLeft(name, textPos, Colors::Text);


		sameLine = false;
		last_element_pos = pos;
		last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;

		if (isHovered && Input::IsMouseClicked(0, elements_count, false))
			return true;

		return false;
	}

	void Checkbox(const char* name, bool* value)
	{
		elements_count++;

		float size = 18;
		FVector2D padding = FVector2D{ 10, 10 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, FVector2D{ size, size });

		//Bg
		if (isHovered)
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size, size, Colors::Checkbox_Hovered);
			hover_element = true;
		}
		else
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size, size, Colors::Checkbox_Idle);
		}

		if (!sameLine)
			offset_y += size + padding.Y;

		if (*value)
		{
			drawFilledRect(FVector2D{ pos.X + 3, pos.Y + 3 }, size - 6, size - 6, Colors::Checkbox_Enabled);
			//drawFilledRect(FVector2D{ pos.X + 9, pos.Y + 9 }, size - 18, size - 18, Colors::Checkbox_Hovered);
		}



		//Text
		FVector2D textPos = FVector2D{ pos.X + size + 5.0f, pos.Y + size / 4 };
		//if (!TextOverlapedFromActiveElement(textPos))
		TextLeft(name, textPos, Colors::Text);


		sameLine = false;
		last_element_pos = pos;
		//last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;

		if (isHovered && Input::IsMouseClicked(0, elements_count, false))
			*value = !*value;
	}

	void SliderInt(const char* name, int* value, int min, int max)
	{
		elements_count++;

		FVector2D size = FVector2D{ 210, 40 };
		FVector2D slider_size = FVector2D{ 170, 7 };
		FVector2D adjust_zone = FVector2D{ 0, 20 };
		FVector2D padding = FVector2D{ 10, 15 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y + slider_size.Y + padding.Y - adjust_zone.Y }, FVector2D{ slider_size.X, slider_size.Y + adjust_zone.Y * 1.5f });

		if (!sameLine)
			offset_y += size.Y + padding.Y;

		//Bg
		if (isHovered || current_element == elements_count)
		{
			//Drag
			if (Input::IsMouseClicked(0, elements_count, true))
			{
				current_element = elements_count;

				FVector2D cursorPos = CursorPos();
				*value = ((cursorPos.X - pos.X) * ((max - min) / slider_size.X)) + min;
				if (*value < min) *value = min;
				if (*value > max) *value = max;
			}

			drawFilledRect(FVector2D{ pos.X, pos.Y + slider_size.Y + padding.Y }, slider_size.X, slider_size.Y, Colors::Slider_Hovered);
			DrawFilledCircle(FVector2D{ pos.X, pos.Y + padding.Y + 9.3f }, 3.1f, Colors::Slider_Progress);
			DrawFilledCircle(FVector2D{ pos.X + slider_size.X, pos.Y + padding.Y + 9.3f }, 3.1f, Colors::Slider_Hovered);

			hover_element = true;
		}
		else
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y + slider_size.Y + padding.Y }, slider_size.X, slider_size.Y, Colors::Slider_Idle);
			DrawFilledCircle(FVector2D{ pos.X, pos.Y + padding.Y + 9.3f }, 3.1f, Colors::Slider_Progress);
			DrawFilledCircle(FVector2D{ pos.X + slider_size.X, pos.Y + padding.Y + 9.3f }, 3.1f, Colors::Slider_Idle);
		}

		//Text
		FVector2D textPos = FVector2D{ pos.X, pos.Y + 5 };
		TextLeft(name, textPos, Colors::Text);

		//Value
		float oneP = slider_size.X / (max - min);
		drawFilledRect(FVector2D{ pos.X, pos.Y + slider_size.Y + padding.Y }, oneP * (*value - min), slider_size.Y, Colors::Slider_Progress);
		DrawFilledCircle(FVector2D{ pos.X + oneP * (*value - min), pos.Y + slider_size.Y + 2.66f + padding.Y }, 8.0f, Colors::Slider_Button);
		DrawFilledCircle(FVector2D{ pos.X + oneP * (*value - min), pos.Y + slider_size.Y + 2.66f + padding.Y }, 4.0f, Colors::Slider_Progress);

		char buffer[32];
		sprintf_s(buffer, "%i", *value);
		FVector2D valuePos = FVector2D{ pos.X + oneP * (*value - min), pos.Y + slider_size.Y + 10 + padding.Y };
		TextLeft(buffer, valuePos, Colors::Text);


		sameLine = false;
		last_element_pos = pos;
		last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;
	}

	void SliderFloat(const char* name, float* value, float min, float max, const char* format = "%.0f")
	{
		elements_count++;

		FVector2D size = FVector2D{ 210, 40 };
		FVector2D slider_size = FVector2D{ 170, 7 };
		FVector2D adjust_zone = FVector2D{ 0, 20 };
		FVector2D padding = FVector2D{ 10, 15 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y + slider_size.Y + padding.Y - adjust_zone.Y }, FVector2D{ slider_size.X, slider_size.Y + adjust_zone.Y * 1.5f });

		if (!sameLine)
			offset_y += size.Y + padding.Y;

		//Bg
		if (isHovered || current_element == elements_count)
		{
			//Drag
			if (Input::IsMouseClicked(0, elements_count, true))
			{
				current_element = elements_count;

				FVector2D cursorPos = CursorPos();
				*value = ((cursorPos.X - pos.X) * ((max - min) / slider_size.X)) + min;
				if (*value < min) *value = min;
				if (*value > max) *value = max;
			}

			drawFilledRect(FVector2D{ pos.X, pos.Y + slider_size.Y + padding.Y }, slider_size.X, slider_size.Y, Colors::Slider_Hovered);
			DrawFilledCircle(FVector2D{ pos.X, pos.Y + padding.Y + 9.3f }, 3.1f, Colors::Slider_Progress);
			DrawFilledCircle(FVector2D{ pos.X + slider_size.X, pos.Y + padding.Y + 9.3f }, 3.1f, Colors::Slider_Hovered);

			hover_element = true;
		}
		else
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y + slider_size.Y + padding.Y }, slider_size.X, slider_size.Y, Colors::Slider_Idle);
			DrawFilledCircle(FVector2D{ pos.X, pos.Y + padding.Y + 9.3f }, 3.1f, Colors::Slider_Progress);
			DrawFilledCircle(FVector2D{ pos.X + slider_size.X, pos.Y + padding.Y + 9.3f }, 3.1f, Colors::Slider_Idle);
		}


		//Text
		FVector2D textPos = FVector2D{ pos.X, pos.Y + 5 };
		TextLeft(name, textPos, Colors::Text);

		//Value
		float oneP = slider_size.X / (max - min);
		drawFilledRect(FVector2D{ pos.X, pos.Y + slider_size.Y + padding.Y }, oneP * (*value - min), slider_size.Y, Colors::Slider_Progress);
		DrawFilledCircle(FVector2D{ pos.X + oneP * (*value - min), pos.Y + slider_size.Y + 2.66f + padding.Y }, 8.0f, Colors::Slider_Button);
		DrawFilledCircle(FVector2D{ pos.X + oneP * (*value - min), pos.Y + slider_size.Y + 2.66f + padding.Y }, 4.0f, Colors::Slider_Progress);

		char buffer[32];
		sprintf_s(buffer, format, *value);
		FVector2D valuePos = FVector2D{ pos.X + oneP * (*value - min), pos.Y + slider_size.Y + 10 + padding.Y };
		TextLeft(buffer, valuePos, Colors::Text);


		sameLine = false;
		last_element_pos = pos;
		last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;
	}

	bool checkbox_enabled[256];
	void Combobox(const char* name, FVector2D size, int* value, const char* arg, ...)
	{
		elements_count++;

		FVector2D padding = FVector2D{ 5, 10 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, size);

		//Bg
		if (isHovered || checkbox_enabled[elements_count])
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size.X, size.Y, Colors::Combobox_Hovered);

			hover_element = true;
		}
		else
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size.X, size.Y, Colors::Combobox_Idle);
		}

		if (!sameLine)
			offset_y += size.Y + padding.Y;

		//Text
		FVector2D textPos = FVector2D{ pos.X + size.X + 5.0f, pos.Y + size.Y / 8 };
		TextLeft(name, textPos, Colors::Text);

		//Elements
		bool isHovered2 = false;
		FVector2D element_pos = pos;
		int num = 0;

		if (checkbox_enabled[elements_count])
		{
			current_element_size.X = element_pos.X - 5.0f;
			current_element_size.Y = element_pos.Y - 5.0f;
		}
		va_list arguments;
		for (va_start(arguments, arg); arg != NULL; arg = va_arg(arguments, const char*))
		{
			//Selected Element
			if (num == *value)
			{
				FVector2D _textPos = FVector2D{ pos.X + size.X / 4, pos.Y + size.Y / 4 };
				TextLeft((char*)arg, _textPos, Colors::Text);
			}

			if (checkbox_enabled[elements_count])
			{
				element_pos.Y += 25.0f;

				isHovered2 = MouseInZone(FVector2D{ element_pos.X, element_pos.Y }, FVector2D{ size.X, 25.0f });
				if (isHovered2)
				{
					hover_element = true;
					PostRenderer::drawFilledRect(FVector2D{ element_pos.X, element_pos.Y }, size.X, 25.0f, Colors::Combobox_Hovered);

					//Click
					if (Input::IsMouseClicked(0, elements_count, false))
					{
						*value = num;
						checkbox_enabled[elements_count] = false;
					}
				}
				else
				{
					PostRenderer::drawFilledRect(FVector2D{ element_pos.X, element_pos.Y }, size.X, 25.0f, Colors::Combobox_Idle);
				}

				PostRenderer::TextLeft((char*)arg, FVector2D{ element_pos.X + 5.0f, element_pos.Y + 7.5f }, Colors::Text);
			}
			num++;
		}
		va_end(arguments);
		if (checkbox_enabled[elements_count])
		{
			current_element_size.X = element_pos.X + 5.0f;
			current_element_size.Y = element_pos.Y + 5.0f;
		}


		sameLine = false;
		last_element_pos = pos;
		last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;

		if (isHovered && Input::IsMouseClicked(0, elements_count, false))
		{
			checkbox_enabled[elements_count] = !checkbox_enabled[elements_count];
		}
		if (!isHovered && !isHovered2 && Input::IsMouseClicked(0, elements_count, false))
		{
			checkbox_enabled[elements_count] = false;
		}
	}

	int active_hotkey = -1;
	bool already_pressed = false;
	std::string VirtualKeyCodeToString(UCHAR virtualKey)
	{
		UINT scanCode = MapVirtualKey(virtualKey, MAPVK_VK_TO_VSC);

		if (virtualKey == VK_LBUTTON)
		{
			return _xor_("LMOUSE");
		}
		if (virtualKey == VK_RBUTTON)
		{
			return _xor_("RMOUSE");
		}
		if (virtualKey == VK_MBUTTON)
		{
			return _xor_("MBUTTON");
		}
		if (virtualKey == VK_XBUTTON1)
		{
			return _xor_("XBUTTON1");
		}
		if (virtualKey == VK_XBUTTON2)
		{
			return _xor_("XBUTTON2");
		}

		CHAR szName[128];
		int result = 0;
		switch (virtualKey)
		{
		case VK_LEFT: case VK_UP: case VK_RIGHT: case VK_DOWN:
		case VK_RCONTROL: case VK_RMENU:
		case VK_LWIN: case VK_RWIN: case VK_APPS:
		case VK_PRIOR: case VK_NEXT:
		case VK_END: case VK_HOME:
		case VK_INSERT: case VK_DELETE:
		case VK_DIVIDE:
		case VK_NUMLOCK:
			scanCode |= KF_EXTENDED;
		default:
			result = GetKeyNameTextA(scanCode << 16, szName, 128);
		}

		return szName;
	}
	void Hotkey(const char* name, FVector2D size, int* key)
	{
		elements_count++;

		FVector2D padding = FVector2D{ 5, 35 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y + (last_element_size.Y / 4) - size.Y / 4;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y + 25 }, size);

		FVector2D textPos = FVector2D{ pos.X, pos.Y + 5 };
		TextLeft(name, textPos, Colors::Text);

		//Bg
		if (isHovered)
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y + 25 }, size.X, size.Y, Colors::Button_Hovered);
			hover_element = true;
		}
		else
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y + 25 }, size.X, size.Y, Colors::Button_Idle);
		}

		if (!sameLine)
			offset_y += size.Y + padding.Y;

		if (active_hotkey == elements_count)
		{
			//Text
			FVector2D textPos = FVector2D{ pos.X + size.X / 4, pos.Y + size.Y + 25 / 4 };
			TextLeft(_xor_("[Press Key]"), textPos, Colors::Text);

			if (!ZeroGUI::Input::IsAnyMouseDown())
			{
				already_pressed = false;
			}

			if (!already_pressed)
			{
				for (int code = 0; code < 255; code++)
				{
					if (o_getasynckeystate((DWORD)code))
					{
						*key = code;
						active_hotkey = -1;
					}
				}
			}
		}
		else
		{
			//Text
			FVector2D textPos = FVector2D{ pos.X + size.X / 4, pos.Y + size.Y + 25 / 4 };

			if (*key == 0x07)
				TextLeft("Unbinded", textPos, Colors::Text);
			else
				TextLeft((char*)VirtualKeyCodeToString(*key).c_str(), textPos, Colors::Text);

			if (isHovered)
			{
				if (Input::IsMouseClicked(0, elements_count, false))
				{
					already_pressed = true;
					active_hotkey = elements_count;

					//Queue Fix
					for (int code = 0; code < 255; code++)
						if (o_getasynckeystate((DWORD)code)) {}
				}
			}
			else
			{
				if (Input::IsMouseClicked(0, elements_count, false))
				{
					active_hotkey = -1;
				}
			}
		}


		sameLine = false;
		last_element_pos = pos;
		last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;
	}

	int active_picker = -1;
	FColor saved_color;
	bool ColorPixel(FVector2D pos, FVector2D size, FColor* original, FColor color)
	{
		PostRenderer::drawFilledRect(FVector2D{ pos.X, pos.Y }, size.X, size.Y, color);

		if (original->R == color.R && original->G == color.G && original->B == color.B)
		{
			PostRenderer::Draw_Line(FVector2D{ pos.X, pos.Y }, FVector2D{ pos.X + size.X - 1, pos.Y }, Colors::Pixel_Outline);
			PostRenderer::Draw_Line(FVector2D{ pos.X, pos.Y + size.Y - 1 }, FVector2D{ pos.X + size.X - 1, pos.Y + size.Y - 1 }, Colors::Pixel_Outline);
			PostRenderer::Draw_Line(FVector2D{ pos.X, pos.Y }, FVector2D{ pos.X, pos.Y + size.Y - 1 }, Colors::Pixel_Outline);
			PostRenderer::Draw_Line(FVector2D{ pos.X + size.X - 1, pos.Y }, FVector2D{ pos.X + size.X - 1, pos.Y + size.Y - 1 }, Colors::Pixel_Outline);
		}

		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, size);
		if (isHovered)
		{
			if (Input::IsMouseClicked(0, elements_count, false))
				*original = color;
		}

		return true;
	}
	void ColorPicker(const char* name, FColor* color)
	{
		elements_count++;

		float size = 25;
		FVector2D padding = FVector2D{ 10, 10 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, FVector2D{ size, size });

		if (!sameLine)
			offset_y += size + padding.Y;

		if (active_picker == elements_count)
		{
			hover_element = true;

			float sizePickerX = 250;
			float sizePickerY = 250;
			bool isHoveredPicker = MouseInZone(FVector2D{ pos.X, pos.Y }, FVector2D{ sizePickerX, sizePickerY - 60 });

			//Background
			PostRenderer::drawFilledRect(FVector2D{ pos.X, pos.Y }, sizePickerX, sizePickerY - 65, Colors::ColorPicker_Background);

			//float pixedSize = sizePickerY / pixels;
			//FColor temp_color{1.0f, 1.0f, 1.0f, 1.0f};
			//float iterator = 0.0f;
			//
			//for (int y = 0; y < pixels; y++)
			//{
			//	for (int x = 0; x < pixels; x++)
			//	{
			//		ColorPixel(FVector2D{ pos.X + pixedSize * x, pos.Y + pixedSize * y }, pixedSize, color, temp_color);
			//		temp_color.R -= (1.0f - saved_color.R) / pixels;
			//		temp_color.G -= (1.0f - saved_color.G) / pixels;
			//		temp_color.B -= (1.0f - saved_color.B) / pixels;
			//	}
			//	
			//	iterator += 1.0f / pixels;
			//	temp_color = FColor{ 1.0f - iterator, 1.0f - iterator, 1.0f - iterator, 1.0f);
			//}

			FVector2D pixelSize = FVector2D{ sizePickerX / 12, sizePickerY / 12 };

			//0
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 0, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FColor{ 174, 235, 253, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 0, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FColor{ 136, 225, 251, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 0, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FColor{ 108, 213, 250, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 0, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FColor{ 89, 175, 213, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 0, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FColor{ 76, 151, 177, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 0, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FColor{ 60, 118, 140, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 0, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FColor{ 43, 85, 100, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 0, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FColor{ 32, 62, 74, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 0, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FColor{ 255, 255, 255, 255 });
			}
			//1
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 1, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FColor{ 175, 205, 252, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 1, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FColor{ 132, 179, 252, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 1, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FColor{ 90, 152, 250, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 1, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FColor{ 55, 120, 250, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 1, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FColor{ 49, 105, 209, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 1, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FColor{ 38, 83, 165, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 1, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FColor{ 28, 61, 120, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 1, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FColor{ 20, 43, 86, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 1, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FColor{ 247, 247, 247, 255 });
			}
			//2
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 2, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FColor{ 153, 139, 250, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 2, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FColor{ 101, 79, 249, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 2, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FColor{ 64, 50, 230, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 2, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FColor{ 54, 38, 175, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 2, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FColor{ 39, 31, 144, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 2, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FColor{ 32, 25, 116, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 2, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FColor{ 21, 18, 82, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 2, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FColor{ 16, 13, 61, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 2, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FColor{ 228, 228, 228, 255 });
			}
			//3
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 3, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FColor{ 194, 144, 251, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 3, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FColor{ 165, 87, 249, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 3, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FColor{ 142, 57, 239, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 3, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FColor{ 116, 45, 184, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 3, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FColor{ 92, 37, 154, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 3, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FColor{ 73, 29, 121, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 3, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FColor{ 53, 21, 88, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 3, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FColor{ 37, 15, 63, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 3, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FColor{ 203, 203, 203, 255 });
			}
			//4
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 4, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FColor{ 224, 162, 197, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 4, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FColor{ 210, 112, 166, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 4, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FColor{ 199, 62, 135, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 4, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FColor{ 159, 49, 105, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 4, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FColor{ 132, 41, 89, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 4, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FColor{ 104, 32, 71, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 4, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FColor{ 75, 24, 51, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 4, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FColor{ 54, 14, 36, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 4, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FColor{ 175, 175, 175, 255 });
			}
			//5
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 5, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FColor{ 235, 175, 176, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 5, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FColor{ 227, 133, 135, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 5, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FColor{ 219, 87, 88, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 5, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FColor{ 215, 50, 36, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 5, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FColor{ 187, 25, 7, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 5, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FColor{ 149, 20, 6, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 5, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FColor{ 107, 14, 4, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 5, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FColor{ 77, 9, 3, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 5, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FColor{ 144, 144, 144, 255 });
			}
			//6
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 6, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FColor{ 241, 187, 171, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 6, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FColor{ 234, 151, 126, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 6, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FColor{ 229, 115, 76, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 6, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FColor{ 227, 82, 24, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 6, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FColor{ 190, 61, 15, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 6, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FColor{ 150, 48, 12, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 6, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FColor{ 107, 34, 8, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 6, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FColor{ 79, 25, 6, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 6, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FColor{ 113, 113, 113, 255 });
			}
			//7
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 7, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FColor{ 245, 207, 169, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 7, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FColor{ 240, 183, 122, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 7, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FColor{ 236, 159, 74, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 7, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FColor{ 234, 146, 37, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 7, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FColor{ 193, 111, 28, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 7, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FColor{ 152, 89, 22, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 7, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FColor{ 110, 64, 16, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 7, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FColor{ 80, 47, 12, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 7, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FColor{ 82, 82, 82, 255 });
			}
			//8
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 8, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FColor{ 247, 218, 170, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 8, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FColor{ 244, 200, 124, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 8, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FColor{ 241, 182, 77, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 8, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FColor{ 239, 174, 44, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 8, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FColor{ 196, 137, 34, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 8, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FColor{ 154, 108, 27, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 8, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FColor{ 111, 77, 19, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 8, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FColor{ 80, 56, 14, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 8, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FColor{ 54, 54, 54, 255 });
			}
			//9
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 9, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FColor{ 254, 243, 187, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 9, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FColor{ 253, 237, 153, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 9, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FColor{ 253, 231, 117, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 9, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FColor{ 254, 232, 85, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 9, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FColor{ 242, 212, 53, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 9, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FColor{ 192, 169, 42, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 9, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FColor{ 138, 120, 30, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 9, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FColor{ 101, 87, 22, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 9, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FColor{ 29, 29, 29, 255 });
			}
			//10
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 10, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FColor{ 247, 243, 185, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 10, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FColor{ 243, 239, 148, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 10, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FColor{ 239, 232, 111, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 10, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FColor{ 235, 229, 76, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 10, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FColor{ 208, 200, 55, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 10, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FColor{ 164, 157, 43, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 10, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FColor{ 118, 114, 31, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 10, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FColor{ 86, 82, 21, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 10, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FColor{ 9, 9, 9, 255 });
			}
			//11
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 11, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FColor{ 218, 232, 182, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 11, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FColor{ 198, 221, 143, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 11, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FColor{ 181, 210, 103, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 11, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FColor{ 154, 186, 76, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 11, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FColor{ 130, 155, 64, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 11, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FColor{ 102, 121, 50, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 11, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FColor{ 74, 88, 36, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 11, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FColor{ 54, 64, 26, 255 });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 11, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FColor{ 0, 0, 0, 255 });
			}



			if (isHoveredPicker)
			{
				if (Input::IsMouseClicked(0, elements_count, false))
				{

				}
			}
			else
			{
				if (Input::IsMouseClicked(0, elements_count, false))
				{
					active_picker = -1;
					//hover_element = false;
				}
			}
		}
		else
		{
			//Bg
			if (isHovered)
			{
				drawFilledRect(FVector2D{ pos.X, pos.Y }, size, size, Colors::Checkbox_Hovered);
				hover_element = true;
			}
			else
			{
				drawFilledRect(FVector2D{ pos.X, pos.Y }, size, size, Colors::Checkbox_Idle);
			}

			//Color
			drawFilledRect(FVector2D{ pos.X + 4, pos.Y + 4 }, size - 8, size - 8, *color);

			//Text
			FVector2D textPos = FVector2D{ pos.X + size + 5.0f, pos.Y + size / 4 };
			TextLeft(name, textPos, Colors::Text);

			if (isHovered && Input::IsMouseClicked(0, elements_count, false))
			{
				saved_color = *color;
				active_picker = elements_count;
			}
		}


		sameLine = false;
		last_element_pos = pos;
		//last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;
	}


	void Render()
	{
		for (int i = 0; i < 128; i++)
		{
			if (PostRenderer::drawlist[i].type != -1)
			{
				//Filled Rect
				if (PostRenderer::drawlist[i].type == 1)
				{
					ZeroGUI::drawFilledRect(PostRenderer::drawlist[i].pos, PostRenderer::drawlist[i].size.X, PostRenderer::drawlist[i].size.Y, PostRenderer::drawlist[i].color);
				}
				//TextLeft
				else if (PostRenderer::drawlist[i].type == 2)
				{
					ZeroGUI::TextLeft(PostRenderer::drawlist[i].name, PostRenderer::drawlist[i].pos, PostRenderer::drawlist[i].color);
				}
				//TextLeft
				else if (PostRenderer::drawlist[i].type == 3)
				{
					ZeroGUI::TextLeft(PostRenderer::drawlist[i].name, PostRenderer::drawlist[i].pos, PostRenderer::drawlist[i].color);
				}
				//Draw_Line
				else if (PostRenderer::drawlist[i].type == 4)
				{
					Draw_Line(PostRenderer::drawlist[i].from, PostRenderer::drawlist[i].to, PostRenderer::drawlist[i].color);
				}

				PostRenderer::drawlist[i].type = -1;
			}
		}
	}
}