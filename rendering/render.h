namespace maths
{
	FRotator VectorToRotation(FVector vVector)
	{
		FRotator rRotation;

		rRotation.Yaw = atan2(vVector.Y, vVector.X) * Const_RadToUnrRot;
		rRotation.Pitch = atan2(vVector.Z, sqrt((vVector.X * vVector.X) + (vVector.Y * vVector.Y))) * Const_RadToUnrRot;
		rRotation.Roll = 0;

		return rRotation;
	}

	FVector RotationToVector(FRotator R)
	{
		FVector Vec;
		float fYaw = R.Yaw * Const_URotationToRadians;
		float fPitch = R.Pitch * Const_URotationToRadians;
		float CosPitch = cos(fPitch);
		Vec.X = cos(fYaw) * CosPitch;
		Vec.Y = sin(fYaw) * CosPitch;
		Vec.Z = sin(fPitch);
		return Vec;
	}

	float VectorMagnitude(FVector Vec) {
		return sqrt((Vec.X * Vec.X) + (Vec.Y * Vec.Y) + (Vec.Z * Vec.Z));
	}

	void Normalize(FVector& v)
	{
		float size = VectorMagnitude(v);

		if (!size)
		{
			v.X = v.Y = v.Z = 1;
		}
		else
		{
			v.X /= size;
			v.Y /= size;
			v.Z /= size;
		}
	}


	void GetAxes(FRotator R, FVector& X, FVector& Y, FVector& Z)
	{
		X = RotationToVector(R);
		Normalize(X);
		R.Yaw += 16384;
		FRotator R2 = R;
		R2.Pitch = 0.f;
		Y = RotationToVector(R2);
		Normalize(Y);
		Y.Z = 0.f;
		R.Yaw -= 16384;
		R.Pitch += 16384;
		Z = RotationToVector(R);
		Normalize(Z);
	}

	FVector VectorScale(FVector s1, float scale)
	{
		FVector temp;
		temp.X = s1.X * scale;
		temp.Y = s1.Y * scale;
		temp.Z = s1.Z * scale;

		return temp;
	}

	void AimAtVector(FVector TargetVec, FVector PlayerLocation, FRotator& AimRot)
	{
		FVector AimVec;
		AimVec.X = TargetVec.X - PlayerLocation.X;
		AimVec.Y = TargetVec.Y - PlayerLocation.Y;
		AimVec.Z = TargetVec.Z - PlayerLocation.Z;

		FRotator AimAtRot = VectorToRotation(AimVec);
		AimRot = AimAtRot;
	}

	FVector GetAngleTo(FVector TargetVec, FVector OriginVec)
	{
		FVector Diff;
		Diff.X = TargetVec.X - OriginVec.X;
		Diff.Y = TargetVec.Y - OriginVec.Y;
		Diff.Z = TargetVec.Z - OriginVec.Z;

		return Diff;
	}

	float GetDistance(FVector to, FVector from) {
		float deltaX = to.X - from.X;
		float deltaY = to.Y - from.Y;
		float deltaZ = to.Z - from.Z;

		return (float)sqrt(deltaX * deltaX + deltaY * deltaY + deltaZ * deltaZ);
	}

	float GetCrosshairDistance(float Xx, float Yy, float xX, float yY)
	{
		return sqrt((yY - Yy) * (yY - Yy) + (xX - Xx) * (xX - Xx));
	}
}

namespace colors {
	FColor Black = FColor(0.f, 0.f, 0.f, 255.f);
	FColor White = FColor(255.f, 255.f, 255.f, 255.f);
	FColor Red = FColor(255.f, 0.f, 0.f, 255.f);
	FColor Green = FColor(0.f, 255.f, 0.f, 255.f);
	FColor Blue = FColor(0.f, 0.f, 255.f, 255.f);
	FColor Yellow = FColor(255.f, 255.f, 0.f, 255.f);
	FColor Cyan = FColor(0.f, 255.f, 255.f, 255.f);
}

namespace utils {
	void DoOnce(bool &var, bool reset = false) {
		static bool once = false;
		if (!once) {
			once = true;
			var = !var;
		}

		if (reset)
			once = false;
	}
	
	const wchar_t* St2Wc(const char* sz) {
		wchar_t Buff[1024];
		mbstowcs(Buff, sz, 1024);
		return Buff;
	}
	
	bool W2S(FVector target, FVector2D& dst) {
		FVector AxisX, AxisY, AxisZ, Delta, Transformed;
		maths::GetAxes(Globals::PlayerCamera->STATIC_GetCameraRotation(), AxisX, AxisY, AxisZ);

		Delta = target - Globals::PlayerCamera->LastFrameCameraCache.POV.Location;
		Transformed = FVector(Delta.Dot(AxisY), Delta.Dot(AxisZ), Delta.Dot(AxisX));

		if (Transformed.Z < 1.00f)
			Transformed.Z = 1.00f;

		float CentX = (Globals::width / 2.0f);
		float CentY = (Globals::height / 2.0f);

		dst.X = CentX + Transformed.X * (CentX / tan(Globals::FOV * Const_PI / 360.0f)) / Transformed.Z;
		dst.Y = CentY + -Transformed.Y * (CentX / tan(Globals::FOV * Const_PI / 360.0f)) / Transformed.Z;

		if (dst.X >= 0.0f && dst.X <= Globals::width) {
			if (dst.Y >= 0.0f && dst.Y <= Globals::height) {
				return true;
			}
		}
		return false;
	}

	bool IsPawnVisible(ATgPawn* pawn) {
		if (!Globals::WorldInfo ||
			!pawn) {
			return false;
		}

		float lastRenderTime = pawn->Mesh->LastRenderTime;
		float timeSeconds = Globals::WorldInfo->TimeSeconds;
		
		return (lastRenderTime > timeSeconds - 0.05f);
	}

	FBoneAtom GetBoneFromId(USkeletalMeshComponent* mesh, int id) {
		int bones = mesh->SpaceBases.Num();
		if (bones > 0) {
			FBoneAtom localToWorld = mesh->LocalToWorldBoneAtom;

			FBoneAtom bone = mesh->SpaceBases[id];
			FBoneAtom boneWorld;
			boneWorld = bone;

			D3DXMATRIX rotationMatrix;
			D3DXQUATERNION quat;

			quat.w = localToWorld.Rotation.W;
			quat.x = localToWorld.Rotation.X;
			quat.y = localToWorld.Rotation.Y;
			quat.z = -localToWorld.Rotation.Z;

			D3DXMatrixRotationQuaternion(&rotationMatrix, &quat);

			boneWorld.Translation = maths::VectorScale(boneWorld.Translation, localToWorld.Scale);
			D3DXVECTOR3 in(boneWorld.Translation.X, boneWorld.Translation.Y, boneWorld.Translation.Z), out;
			D3DXVec3TransformCoord(&out, &in, &rotationMatrix);

			boneWorld.Translation.X = out.x;
			boneWorld.Translation.Y = out.y;
			boneWorld.Translation.Z = out.z;
			boneWorld.Translation += localToWorld.Translation;

			return boneWorld;
		}

		return FBoneAtom{0};
	}

	FColor getColor(bool state) {
		return state ? colors::Green : colors::Red;
	}

	void DrawText(UCanvas* canvas, FString text, FVector2D pos, FColor color) {
		FVector2D oldPos = FVector2D(canvas->CurX, canvas->CurY);
		FColor oldColor = canvas->DrawColor;

		canvas->SetPos(pos.X, pos.Y, 0.f);
		canvas->SetDrawColor(color.R, color.G, color.B, color.A);

		canvas->STATIC_DrawText(text, false, 1.f, 1.f, EDisplayPlane::DISPLAYPLANE_HUD, NULL);

		canvas->SetPos(oldPos.X, oldPos.Y, 0.f);
		canvas->SetDrawColor(oldColor.R, oldColor.G, oldColor.B, oldColor.A);
	}
}

float fProjectileSpeed = 7000.0f;
ATgPawn* AimbotLockedPawn = nullptr;
FVector LockedPawnHead = FVector{ 0, 0, 0 };
bool bLocked = false;

int delay = 1000;
int lastFlick;

void Aimbot()
{
	if (!AimbotLockedPawn ||
		!AimbotLockedPawn->Mesh ||
		!Globals::WorldInfo ||
		!Globals::LocalWeapon ||
		!Globals::LocalController) {
			return; 
	}

	if (AimbotLockedPawn->Health > 1) {
		FRotator AimRotation, oldRotation = FRotator{ 0, 0, 0 };

		bool isPawnVisible = utils::IsPawnVisible(AimbotLockedPawn);

		if (isPawnVisible) {
			if (config_system.item.prediction) {
				if (Globals::LocalWeapon->m_FiredProjectiles.Num() > 0) {
					fProjectileSpeed = Globals::LocalWeapon->m_FiredProjectiles.GetByIndex(0)->Speed;
				}

				FVector TargetVelocity = AimbotLockedPawn->Velocity;
				FVector TargetLocation = AimbotLockedPawn->Location;
				float TravelTime = maths::GetDistance(Globals::LocalPawn->Location, TargetLocation) / fProjectileSpeed;

				FVector PredictedTargetLocation = {
					(TargetLocation.X + TargetVelocity.X * TravelTime),
					(TargetLocation.Y + TargetVelocity.Y * TravelTime),
					 TargetLocation.Z
				};

				maths::AimAtVector(PredictedTargetLocation, Globals::PlayerCamera->LastFrameCameraCache.POV.Location, AimRotation);
				Globals::LocalController->Rotation = AimRotation;
			}
			else {
				if (!config_system.item.smooth) {
					//ATgPlayerController* controller = (ATgPlayerController*)Globals::LocalController;
					//controller->bPressingLeftMouseButton = false;

					maths::AimAtVector(LockedPawnHead, Globals::PlayerCamera->LastFrameCameraCache.POV.Location, AimRotation);

					//oldRotation = Globals::LocalController->Rotation;
					Globals::LocalController->Rotation = AimRotation;

					//controller->bPressingLeftMouseButton = true;
					//Globals::LocalController->Rotation = oldRotation;
				}
				else {
					maths::AimAtVector(LockedPawnHead, Globals::PlayerCamera->LastFrameCameraCache.POV.Location, AimRotation);

					FVector difference;
					difference.X = AimRotation.Pitch - Globals::LocalController->Rotation.Pitch;
					difference.Y = AimRotation.Yaw - Globals::LocalController->Rotation.Yaw;

					Globals::LocalController->Rotation.Pitch += difference.X / config_system.item.smoothness;
					Globals::LocalController->Rotation.Yaw += difference.Y / config_system.item.smoothness;
				}
			}
		}
	}
	else
	{
		bLocked = false;
		AimbotLockedPawn = nullptr;
		return;
	}
}

void ActorLoop(UCanvas* canvas) {
	ATgPawn* CurrentPawn = (ATgPawn*)Globals::WorldInfo->PawnList;

	while (CurrentPawn != NULL) {
		ATgRepInfo_Player* CurrentPawnReplicationInfo = (ATgRepInfo_Player*)CurrentPawn->PlayerReplicationInfo;

		// Doing it here else it's going to dissapear if there are now valid pawn
		if (config_system.item.visuals && config_system.item.espFOV)
			ZeroGUI::DrawCircle(FVector2D{ (float)Globals::width / 2, (float)Globals::height / 2 }, config_system.item.aimFOV, config_system.item.resolution, ZeroGUI::Colors::ESP_Fov);

		if (!CurrentPawn ||
			!CurrentPawn->Mesh ||
			!CurrentPawn->PlayerReplicationInfo ||
			!CurrentPawnReplicationInfo->r_TaskForce ||
			!CurrentPawnReplicationInfo->PlayerName.IsValid() ||
			!Globals::LocalPawn ||
			!Globals::ReplicationInfo->r_TaskForce ||
			!Globals::WorldInfo ||
			CurrentPawn == Globals::LocalPawn ||
			CurrentPawn->Health < 1 ||
			((CurrentPawnReplicationInfo->r_TaskForce->TeamIndex == Globals::ReplicationInfo->r_TaskForce->TeamIndex) && !config_system.item.espAllies)) {
				CurrentPawn = (ATgPawn*)CurrentPawn->NextPawn;
				continue;
		}

		if (config_system.item.visuals) {
			if (!CurrentPawn->Mesh || !Globals::WorldInfo) {
				CurrentPawn = (ATgPawn*)CurrentPawn->NextPawn;
				continue;
			}

			FBoxSphereBounds PlayerHitbox = CurrentPawn->Mesh->Bounds;
			FVector min, max, posFeet;
			FVector2D smin, smax, pos;

			min = PlayerHitbox.Origin - PlayerHitbox.BoxExtent;
			max = PlayerHitbox.Origin + PlayerHitbox.BoxExtent;

			posFeet = CurrentPawn->Location;
			posFeet.Z = CurrentPawn->Location.Z - CurrentPawn->BaseEyeHeight;

			if (utils::W2S(min, smin) &&
				utils::W2S(max, smax) &&
				utils::W2S(posFeet, pos)) {
				float flWidth = fabs((smax.Y - smin.Y) / 4);
				float healthPercentage = CurrentPawn->Health / CurrentPawn->r_fCachedMaxHealth;

				bool isPawnVisible = utils::IsPawnVisible(CurrentPawn);

				FColor ESPColor = colors::White;
				if (isPawnVisible)
					ESPColor = ZeroGUI::Colors::Visible;
				else
					ESPColor = ZeroGUI::Colors::Not_Visible;

				char PlayerNameBuff[64];
				if (CurrentPawn->PlayerReplicationInfo->PlayerName.IsValid())
				{
					FString PlayerName = CurrentPawn->PlayerReplicationInfo->PlayerName;

					if (config_system.item.health)
						sprintf_s(PlayerNameBuff, "[ %.0f%% ] %s", healthPercentage * 100, PlayerName.ToString().c_str());
					else
						sprintf_s(PlayerNameBuff, "%s", PlayerName.ToString().c_str());
				}

				// Player name
				if (config_system.item.players)
					utils::DrawText(canvas, FString(utils::St2Wc(PlayerNameBuff)), FVector2D(pos.X - flWidth, smax.Y - 20), ZeroGUI::Colors::ESP_Text);

				// Tracer
				if (config_system.item.tracers)
					canvas->STATIC_Draw2DLine(Globals::width / 2, Globals::height, pos.X, smin.Y, ESPColor);

				// 2D Box
				if (config_system.item.box) {
					canvas->STATIC_Draw2DLine(pos.X - flWidth, smin.Y, pos.X + flWidth, smin.Y, ESPColor); // bottom
					canvas->STATIC_Draw2DLine(pos.X - flWidth, smax.Y, pos.X + flWidth, smax.Y, ESPColor); // up
					canvas->STATIC_Draw2DLine(pos.X - flWidth, smin.Y, pos.X - flWidth, smax.Y, ESPColor); // left
					canvas->STATIC_Draw2DLine(pos.X + flWidth, smin.Y, pos.X + flWidth, smax.Y, ESPColor); // right
				}

				// Bones
				/*if (config_system.item.bones) {
					int totalBones = 0;

					int bones = CurrentPawn->HeadBoneNames.Num();
					if (bones > 0) {
						for (int i = 0; i < bones; i++)
						{
							printf("[%i] %s\n", i, CurrentPawn->HeadBoneNames[i].GetName().c_str());
							totalBones++;
						}

						printf("====================Head====================\n");
					}

					bones = CurrentPawn->LArmBoneNames.Num();
					if (bones > 0) {
						for (int i = 0; i < bones; i++)
						{
							printf("[%i] %s\n", i, CurrentPawn->LArmBoneNames[i].GetName().c_str());
							totalBones++;
						}

						printf("====================LArm====================\n");
					}

					bones = CurrentPawn->RArmBoneNames.Num();
					if (bones > 0) {
						for (int i = 0; i < bones; i++)
						{
							printf("[%i] %s\n", i, CurrentPawn->RArmBoneNames[i].GetName().c_str());
							totalBones++;
						}

						printf("====================RArm====================\n");
					}

					bones = CurrentPawn->LLegBoneNames.Num();
					if (bones > 0) {
						for (int i = 0; i < bones; i++)
						{
							printf("[%i] %s\n", i, CurrentPawn->LLegBoneNames[i].GetName().c_str());
							totalBones++;
						}

						printf("====================LLeg====================\n");
					}

					bones = CurrentPawn->RLegBoneNames.Num();
					if (bones > 0) {
						for (int i = 0; i < bones; i++)
						{
							printf("[%i] %s\n", i, CurrentPawn->RLegBoneNames[i].GetName().c_str());
							totalBones++;
						}

						printf("====================RLeg====================\n");
					}

					printf("Total : %d\n\n", totalBones);
					// TODO bonesPosition
				}*/
			}
		}

		if (config_system.item.aimbot && o_getasynckeystate((DWORD)config_system.item.aimKey)) {
			float ClosestPawn = 999999.0f;

			int LocalTeam = Globals::ReplicationInfo->r_TaskForce->TeamIndex;
			int EnemyTeam = CurrentPawnReplicationInfo->r_TaskForce->TeamIndex;

			FVector head = CurrentPawn->Mesh->STATIC_GetBoneLocation(CurrentPawn->m_HeadShotBoneName, (int)EBoneControlSpace::BCS_WorldSpace);
			FVector2D headPos;

			if (AimbotLockedPawn)
			{
				LockedPawnHead = AimbotLockedPawn->Mesh->STATIC_GetBoneLocation(AimbotLockedPawn->m_HeadShotBoneName, (int)EBoneControlSpace::BCS_WorldSpace);

				if (bLocked)
				{
					Aimbot();
					CurrentPawn = (ATgPawn*)CurrentPawn->NextPawn;
					continue;
				}
			}

			if (utils::W2S(head, headPos))
			{
				float ScreenCX = Globals::width / 2;
				float ScreenCY = Globals::height / 2;
				float cx = headPos.X;
				float cy = headPos.Y;
				float crosshairDistance = maths::GetCrosshairDistance(cx, cy, ScreenCX, ScreenCY);

				if (crosshairDistance < (float)config_system.item.aimFOV) {
					if (crosshairDistance < ClosestPawn) {
						ClosestPawn = crosshairDistance;
						AimbotLockedPawn = CurrentPawn;
					}

					if (!bLocked && AimbotLockedPawn) {
						bLocked = true;
						Aimbot();
					}
					else {
						AimbotLockedPawn = nullptr;
						LockedPawnHead = FVector{ 0, 0, 0 };
						bLocked = false;

						CurrentPawn = (ATgPawn*)CurrentPawn->NextPawn;
						continue;
					}
				}
				CurrentPawn = (ATgPawn*)CurrentPawn->NextPawn;
				continue;
			}

			CurrentPawn = (ATgPawn*)CurrentPawn->NextPawn;
			continue;
		}
		else {
			AimbotLockedPawn = nullptr;
			LockedPawnHead = FVector{ 0, 0, 0 };
			bLocked = false;
		}

		CurrentPawn = (ATgPawn*)CurrentPawn->NextPawn;
		continue;
	}
}

void MainLoop(UCanvas* canvas) {
	if (!canvas) return;

	ZeroGUI::Input::Handle();
	ZeroGUI::SetupCanvas(canvas);

	canvas->SetPos(0, 0, 0);

	Globals::width = canvas->SizeX;
	Globals::height = canvas->SizeY;

	canvas->Font = Globals::Engine->MediumFont;
	utils::DrawText(canvas, FString(_xor_(TEXT(L"Bingus 1.0.0 | By Wooteck (Xiloe)"))), FVector2D(10.f, 10.f), colors::Yellow);
	utils::DrawText(canvas, FString(_xor_(TEXT(L"INS - Menu"))), FVector2D(10.f, 30.f), utils::getColor(config_system.item.showSexyMenu));

	if (!Globals::SetObjects()) return;

	if (o_getasynckeystate((DWORD)VK_INSERT) == -32767) config_system.item.showSexyMenu = !config_system.item.showSexyMenu;

	if (config_system.item.visuals || config_system.item.aimbot)
		ActorLoop(canvas);

	Exploits();

	static auto menuPos = FVector2D{ 150.f, 150.f };
	if (ZeroGUI::Window(_xor_("Bingus 1.0.0 | By Wooteck (Xiloe)"), &menuPos, FVector2D{ 550.f, 600.f }, config_system.item.showSexyMenu)) {
		static int tab = 0;

		if (ZeroGUI::ButtonTab(_xor_("Aimbot"), FVector2D{ 100.f, 25.f }, tab == 0))
			tab = 0;
		if (ZeroGUI::ButtonTab(_xor_("Visuals"), FVector2D{ 100.f, 25.f }, tab == 1))
			tab = 1;
		if (ZeroGUI::ButtonTab(_xor_("Exploits"), FVector2D{ 100.f, 25.f }, tab == 2))
			tab = 2;
		if (ZeroGUI::ButtonTab(_xor_("Settings"), FVector2D{ 100.f, 25.f }, tab == 3))
			tab = 3;
		if (ZeroGUI::ButtonTab(_xor_("Extra"), FVector2D{ 100.f, 25.f }, tab == 4))
			tab = 4;
		if (ZeroGUI::ButtonTab(_xor_("DEBUG"), FVector2D{ 100.f, 25.f }, tab == 5))
			tab = 5;

		ZeroGUI::NextColumn(130.0f);

		switch (tab)
		{
			case 0:
			{
				ZeroGUI::Checkbox(_xor_("Aimbot"), &config_system.item.aimbot); ZeroGUI::SameLine();
				ZeroGUI::Hotkey(_xor_("Key"), FVector2D{ 100.0f, 25.0f }, &config_system.item.aimKey);
				if (config_system.item.aimbot) {
					ZeroGUI::Checkbox(_xor_("Projectile Prediction"), &config_system.item.prediction);
					ZeroGUI::Checkbox(_xor_("Smooth"), &config_system.item.smooth);
					if (config_system.item.smooth)
						ZeroGUI::SliderFloat(_xor_("Smoothess"), &config_system.item.smoothness, 30.0f, 800.0f);
					ZeroGUI::SliderFloat(_xor_("FOV"), &config_system.item.aimFOV, 30.0f, 150.0f);
				}
				break;
			}

			case 1:
			{
				ZeroGUI::Checkbox(_xor_("Visuals"), &config_system.item.visuals);
				if (config_system.item.visuals) {
					ZeroGUI::Checkbox(_xor_("Allies"), &config_system.item.espAllies);
					ZeroGUI::Checkbox(_xor_("Aimbot FOV"), &config_system.item.espFOV);
					ZeroGUI::Checkbox(_xor_("Tracers"), &config_system.item.tracers);
					ZeroGUI::Checkbox(_xor_("2D Box"), &config_system.item.box);
					ZeroGUI::Checkbox(_xor_("Names"), &config_system.item.players);
					if (config_system.item.players)
						ZeroGUI::Checkbox(_xor_("Health"), &config_system.item.health);
				}

				ZeroGUI::Text(_xor_("Colors"));

				ZeroGUI::ColorPicker(_xor_("Text"), &ZeroGUI::Colors::ESP_Text); ZeroGUI::SameLine();
				ZeroGUI::ColorPicker(_xor_("FOV"), &ZeroGUI::Colors::ESP_Fov);
				ZeroGUI::ColorPicker(_xor_("Visible"), &ZeroGUI::Colors::Visible); ZeroGUI::SameLine();
				ZeroGUI::ColorPicker(_xor_("Invisible"), &ZeroGUI::Colors::Not_Visible);
				
				break;
			}

			case 2:
			{
				ZeroGUI::Checkbox(_xor_("No recoil"), &config_system.item.recoil); ZeroGUI::SameLine();
				ZeroGUI::Checkbox(_xor_("No spread"), &config_system.item.spread);
				ZeroGUI::Checkbox(_xor_("Glow"), &config_system.item.glow); ZeroGUI::SameLine();
				ZeroGUI::Checkbox(_xor_("3rd person"), &config_system.item.thirdPerson);
				break;
			}

			case 3:
			{
				ZeroGUI::Text(_xor_("Config (WIP)"));
				
				if (ZeroGUI::Button(_xor_("Save"), FVector2D{ 100.0f, 25.0f })) {
					// ...
				}

				ZeroGUI::SameLine();
				if (ZeroGUI::Button(_xor_("Load"), FVector2D{ 100.0f, 25.0f })) {
					// ...
				}

				break;
			}

			case 4:
			{
				ZeroGUI::Text(_xor_("Text"));

				ZeroGUI::ColorPicker(_xor_("Text"), &ZeroGUI::Colors::Text); ZeroGUI::SameLine();
				ZeroGUI::ColorPicker(_xor_("Shadow"), &ZeroGUI::Colors::Text_Shadow); ZeroGUI::SameLine();
				ZeroGUI::ColorPicker(_xor_("Outline"), &ZeroGUI::Colors::Text_Outline);

				ZeroGUI::Text(_xor_("Window"));

				ZeroGUI::ColorPicker(_xor_("Background"), &ZeroGUI::Colors::Window_Background); ZeroGUI::SameLine();
				ZeroGUI::ColorPicker(_xor_("Header"), &ZeroGUI::Colors::Window_Header); ZeroGUI::SameLine();
				ZeroGUI::ColorPicker(_xor_("Tabs"), &ZeroGUI::Colors::Tabs_Background);

				ZeroGUI::Text(_xor_("Buttons"));

				ZeroGUI::ColorPicker(_xor_("Idle"), &ZeroGUI::Colors::Button_Idle); ZeroGUI::SameLine();
				ZeroGUI::ColorPicker(_xor_("Hovered"), &ZeroGUI::Colors::Button_Hovered); ZeroGUI::SameLine();
				ZeroGUI::ColorPicker(_xor_("Active"), &ZeroGUI::Colors::Button_Active);

				ZeroGUI::Text(_xor_("Checkbox"));

				ZeroGUI::ColorPicker(_xor_("Idle"), &ZeroGUI::Colors::Checkbox_Idle); ZeroGUI::SameLine();
				ZeroGUI::ColorPicker(_xor_("Hovered"), &ZeroGUI::Colors::Checkbox_Hovered); ZeroGUI::SameLine();
				ZeroGUI::ColorPicker(_xor_("Enabled"), &ZeroGUI::Colors::Checkbox_Enabled);

				ZeroGUI::Text(_xor_("Combobox"));

				ZeroGUI::ColorPicker(_xor_("Idle"), &ZeroGUI::Colors::Combobox_Idle); ZeroGUI::SameLine();
				ZeroGUI::ColorPicker(_xor_("Hovered"), &ZeroGUI::Colors::Combobox_Hovered); ZeroGUI::SameLine();
				ZeroGUI::ColorPicker(_xor_("Elements"), &ZeroGUI::Colors::Combobox_Elements);

				ZeroGUI::Text(_xor_("Slider"));

				ZeroGUI::ColorPicker(_xor_("Idle"), &ZeroGUI::Colors::Slider_Idle); ZeroGUI::SameLine();
				ZeroGUI::ColorPicker(_xor_("Hovered"), &ZeroGUI::Colors::Slider_Hovered); ZeroGUI::SameLine();
				ZeroGUI::ColorPicker(_xor_("Progress"), &ZeroGUI::Colors::Slider_Progress); ZeroGUI::SameLine();
				ZeroGUI::ColorPicker(_xor_("Button"), &ZeroGUI::Colors::Slider_Button);

				ZeroGUI::Text(_xor_("Cursor"));
				ZeroGUI::ColorPicker(_xor_("Cursor"), &ZeroGUI::Colors::Cursor);

				break;
			}

			case 5:
			{
				ZeroGUI::Text(_xor_("DEBUG"));

				static bool mounted = false;
				static bool recoil = true;
				ZeroGUI::Checkbox(_xor_("r_bIsMounted"), &mounted);
				ZeroGUI::Checkbox(_xor_("m_bUsesRecoil"), &recoil);

				if (mounted)
					((ATgPawn*)Globals::LocalPawn)->r_bIsMounted = true;
				else
					((ATgPawn*)Globals::LocalPawn)->r_bIsMounted = false;

				if (recoil)
					((ATgPawn*)Globals::LocalPawn)->m_bUsesRecoil = true;
				else
					((ATgPawn*)Globals::LocalPawn)->m_bUsesRecoil = false;

				break;
			}
		}
	}

	ZeroGUI::Render();
	ZeroGUI::Draw_Cursor(config_system.item.showSexyMenu);
}