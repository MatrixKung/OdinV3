namespace maths
{
	FRotator VectorToRotation(FVector vVector)
	{
		FRotator rRotation;

		rRotation.Yaw = atan2(vVector.Y, vVector.X) * CONST_RadToUnrRot;
		rRotation.Pitch = atan2(vVector.Z, sqrt((vVector.X * vVector.X) + (vVector.Y * vVector.Y))) * CONST_RadToUnrRot;
		rRotation.Roll = 0;

		return rRotation;
	}

	FVector RotationToVector(FRotator R)
	{
		FVector Vec;
		float fYaw = R.Yaw * CONST_UnrRotToRad;
		float fPitch = R.Pitch * CONST_UnrRotToRad;
		float CosPitch = cos(fPitch);
		Vec.X = cos(fYaw) * CosPitch;
		Vec.Y = sin(fYaw) * CosPitch;
		Vec.Z = sin(fPitch);
		return Vec;
	}

	int ClampYaw(int angle) {
		static const auto max = Const_URotation180;

		while (angle > max)
		{
			angle -= max;
		}

		while (angle < 0) {
			angle += max;
		}
		return angle;
	}

	int ClampPitch(int angle) {
		if (angle > 16000) {
			angle = 16000;
		}
		if (angle < -16000) {
			angle = -16000;
		}
		return angle;
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

	FRotator AimAtVector(FVector TargetVec, FVector PlayerLocation)
	{
		FVector AimVec;
		AimVec.X = TargetVec.X - PlayerLocation.X;
		AimVec.Y = TargetVec.Y - PlayerLocation.Y;
		AimVec.Z = TargetVec.Z - PlayerLocation.Z;


		return VectorToRotation(AimVec);
	}

	FRotator RotationDelta(FRotator TargetRot, FRotator OriginRot)
	{
		FRotator Diff;
		Diff.Pitch = TargetRot.Pitch - OriginRot.Pitch;
		Diff.Yaw = TargetRot.Yaw - OriginRot.Yaw;
		Diff.Roll = TargetRot.Roll - OriginRot.Roll;

		return Diff;
	}

	int GetAngle(FRotator TargetRot, FRotator OriginRot) {
		int angle = (int)(abs(RotationDelta(TargetRot, OriginRot).Yaw) * CONST_UnrRotToDeg) - 360;
		if (angle <= -1 && angle >= -360) {
			angle = angle + 360;
		}
		
		return angle;
	}

	float GetDistance(FVector to, FVector from) {
		float deltaX = to.X - from.X;
		float deltaY = to.Y - from.Y;
		float deltaZ = to.Z - from.Z;

		return (float)sqrt(deltaX * deltaX + deltaY * deltaY + deltaZ * deltaZ);
	}

	float GetDistance2D(FVector2D to, FVector2D from) {
		float deltaX = to.X - from.X;
		float deltaY = to.Y - from.Y;

		return (float)sqrt(deltaX * deltaX + deltaY * deltaY);
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
	const const char* addy2str(void* addr) {
		const void* address = static_cast<const void*>(addr);
		std::stringstream ss;
		ss << _xor_("0x") << address;

		return ss.str().c_str();
	}

	const wchar_t* St2Wc(const char* sz) {
		wchar_t Buff[1024];
		mbstowcs(Buff, sz, 1024);
		return Buff;
	}

	bool W2S(FVector from, FVector2D& to) {
		FVector AxisX, AxisY, AxisZ, Delta, Transformed;
		maths::GetAxes(Globals::PlayerCamera->GetCameraRotation(), AxisX, AxisY, AxisZ);

		Delta = from - Globals::PlayerCamera->LastFrameCameraCache.POV.Location;
		Transformed = FVector(Delta.Dot(AxisY), Delta.Dot(AxisZ), Delta.Dot(AxisX));

		if (Transformed.Z < 1.00f)
			Transformed.Z = 1.00f;

		float CentX = (Globals::width / 2.0f);
		float CentY = (Globals::height / 2.0f);

		to.X = CentX + Transformed.X * (CentX / tan(Globals::FOV * Const_PI / 360.0f)) / Transformed.Z;
		to.Y = CentY + -Transformed.Y * (CentX / tan(Globals::FOV * Const_PI / 360.0f)) / Transformed.Z;

		if (to.X >= 0.0f && to.X <= Globals::width) {
			if (to.Y >= 0.0f && to.Y <= Globals::height) {
				return true;
			}
		}
		return false;
	}

	// TODO: Change to Trace for better VisCheck
	bool IsPawnVisible(ATgPawn* pawn) {
		if (!Globals::WorldInfo ||
			!pawn) {
			return false;
		}

		float lastRenderTime = pawn->Mesh->LastRenderTime;
		float timeSeconds = Globals::WorldInfo->TimeSeconds;

		return (lastRenderTime > timeSeconds - 0.05f);
	}

	FName GetBoneFromId(int id) {
		switch (id)
		{
		case 0:
			return FName(_xor_("head"));
			break;

		case 1:
			return FName(_xor_("Neck"));
			break;

		case 2:
			return FName(_xor_("pelvis"));
			break;

		default:
			return FName(_xor_("head"));
			break;
		}
	}

	/*FBoneAtom GetBoneFromId(USkeletalMeshComponent* mesh, int id) {
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

		return FBoneAtom{ 0 };
	}*/

	FColor GetColor(bool state) {
		return state ? colors::Green : colors::Red;
	}

	void DrawText(UCanvas* canvas, FString text, FVector2D pos, FColor color) {
		FVector2D oldPos = FVector2D(canvas->CurX, canvas->CurY);
		FColor oldColor = canvas->DrawColor;

		canvas->STATIC_SetPos(pos.X, pos.Y, 0.f);
		canvas->STATIC_SetDrawColor(color.R, color.G, color.B, color.A);

		canvas->DrawText(text, false, 1.f, 1.f, EDisplayPlane::DISPLAYPLANE_HUD, NULL);

		canvas->STATIC_SetPos(oldPos.X, oldPos.Y, 0.f);
		canvas->STATIC_SetDrawColor(oldColor.R, oldColor.G, oldColor.B, oldColor.A);
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
		!Globals::LocalPawn ||
		!Globals::LocalWeapon ||
		!Globals::LocalController) {
		return;
	}

	if (AimbotLockedPawn->Health > 1) {
		FRotator AimRotation, oldRotation = FRotator{ 0, 0, 0 };
		oldRotation = Globals::LocalController->Rotation;

		bool isPawnVisible = utils::IsPawnVisible(AimbotLockedPawn);

		if ((config_system.item.visCheck && isPawnVisible) ||
			(!config_system.item.visCheck)) {
			if (config_system.item.prediction) {
				if (config_system.item.smooth) {
					AimRotation = maths::AimAtVector(LockedPawnHead, Globals::PlayerCamera->LastFrameCameraCache.POV.Location);

					if (config_system.item.angleCheck && maths::GetAngle(AimRotation, oldRotation) > config_system.item.angle) {
						return;
					}

					if (Globals::LocalWeapon->m_FiredProjectiles.Num() > 0)
						fProjectileSpeed = Globals::LocalWeapon->m_FiredProjectiles.GetByIndex(Globals::LocalWeapon->m_FiredProjectiles.Num() - 1)->Speed;

					FVector Prediction = LockedPawnHead + (AimbotLockedPawn->Velocity * (maths::GetDistance(LockedPawnHead, Globals::LocalPawn->Location) / fProjectileSpeed));

					AimRotation = maths::AimAtVector(Prediction, Globals::PlayerCamera->LastFrameCameraCache.POV.Location);

					FVector difference;
					difference.X = AimRotation.Pitch - Globals::LocalController->Rotation.Pitch;
					difference.Y = AimRotation.Yaw - Globals::LocalController->Rotation.Yaw;

					int a = maths::ClampYaw(Globals::LocalController->Rotation.Yaw);
					int b = maths::ClampYaw(AimRotation.Yaw);
					const int Full360 = Const_URotation180;

					int dist1 = -(a - b + Full360) % Full360;
					int dist2 = (b - a + Full360) % Full360;

					int dist = dist1;
					if (abs(dist2) < abs(dist1)) {
						dist = dist2;
					}

					float smoothAmount = config_system.item.smoothness;

					if (config_system.item.lockWhenClose && abs(dist) + abs(difference.X) < Const_URotation180 / config_system.item.tolerance) {
						smoothAmount = 1.0f;
					}

					difference.Y = (int)(dist * smoothAmount);
					difference.X = (int)(difference.X * smoothAmount);

					Globals::LocalController->Rotation.Pitch += difference.X;
					Globals::LocalController->Rotation.Yaw += difference.Y;
				}
				else {
					if (Globals::LocalWeapon->m_FiredProjectiles.Num() > 0)
						fProjectileSpeed = Globals::LocalWeapon->m_FiredProjectiles.GetByIndex(Globals::LocalWeapon->m_FiredProjectiles.Num()-1)->Speed;

					FVector Prediction = LockedPawnHead + (AimbotLockedPawn->Velocity * (maths::GetDistance(LockedPawnHead, Globals::LocalPawn->Location) / fProjectileSpeed));

					AimRotation = maths::AimAtVector(Prediction, Globals::PlayerCamera->LastFrameCameraCache.POV.Location);

					Globals::LocalController->Rotation = AimRotation;
				}
			}
			else {
				if (config_system.item.smooth) {
					AimRotation = maths::AimAtVector(LockedPawnHead, Globals::PlayerCamera->LastFrameCameraCache.POV.Location);

					if (config_system.item.angleCheck && maths::GetAngle(AimRotation, oldRotation) > config_system.item.angle) {
						return;
					}

					FVector difference;
					difference.X = AimRotation.Pitch - Globals::LocalController->Rotation.Pitch;
					difference.Y = AimRotation.Yaw - Globals::LocalController->Rotation.Yaw;

					int a = maths::ClampYaw(Globals::LocalController->Rotation.Yaw);
					int b = maths::ClampYaw(AimRotation.Yaw);
					const int Full360 = Const_URotation180;

					int dist1 = -(a - b + Full360) % Full360;
					int dist2 = (b - a + Full360) % Full360;

					int dist = dist1;
					if (abs(dist2) < abs(dist1)) {
						dist = dist2;
					}

					float smoothAmount = config_system.item.smoothness;

					if (config_system.item.lockWhenClose && abs(dist) + abs(difference.X) < Const_URotation180 / config_system.item.tolerance) {
						smoothAmount = 1.0f;
					}

					difference.Y = (int)(dist * smoothAmount);
					difference.X = (int)(difference.X * smoothAmount);

					Globals::LocalController->Rotation.Pitch += difference.X;
					Globals::LocalController->Rotation.Yaw += difference.Y;
				}
				else if (config_system.item.silent) {
					AimRotation = maths::AimAtVector(LockedPawnHead, Globals::PlayerCamera->LastFrameCameraCache.POV.Location);

					FVector camloc = Globals::PlayerCamera->LastFrameCameraCache.POV.Location;

					ATgPlayerController* controller = (ATgPlayerController*)Globals::LocalController;
					ATgPawn* pawn = (ATgPawn*)Globals::LocalPawn;
					ATgDevice* weapon = (ATgDevice*)Globals::LocalWeapon;
					
					weapon->StopFire();
					controller->bPressingLeftMouseButton = false;
					Globals::LocalController->Rotation = AimRotation;

					weapon->StartFire();
					weapon->StopFire();
					controller->bPressingLeftMouseButton = false;
					Globals::LocalController->Rotation = oldRotation;
				}
				else {
					AimRotation = maths::AimAtVector(LockedPawnHead, Globals::PlayerCamera->LastFrameCameraCache.POV.Location);

					FVector camloc = Globals::PlayerCamera->LastFrameCameraCache.POV.Location;

					if (config_system.item.angleCheck && maths::GetAngle(AimRotation, oldRotation) > config_system.item.angle) {
						return;
					}

					Globals::LocalController->Rotation = AimRotation;
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
	float ClosestPawn = 999999.0f;

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
			CurrentPawnReplicationInfo->r_TaskForce->TeamIndex == Globals::ReplicationInfo->r_TaskForce->TeamIndex) {
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
						sprintf_s(PlayerNameBuff, _xor_("[ %.0f%% ] %s"), healthPercentage * 100, PlayerName.ToString().c_str());
					else
						sprintf_s(PlayerNameBuff, _xor_("%s"), PlayerName.ToString().c_str());
				}

				// Player name
				if (config_system.item.players)
					utils::DrawText(canvas, FString(utils::St2Wc(PlayerNameBuff)), FVector2D(pos.X - flWidth, smax.Y - 20), ZeroGUI::Colors::ESP_Text);

				// Tracer
				if (config_system.item.tracers)
					canvas->Draw2DLine(Globals::width / 2, Globals::height, pos.X, smin.Y, ESPColor);

				// 2D Box
				if (config_system.item.box) {
					canvas->Draw2DLine(pos.X - flWidth, smin.Y, pos.X + flWidth, smin.Y, ESPColor); // bottom
					canvas->Draw2DLine(pos.X - flWidth, smax.Y, pos.X + flWidth, smax.Y, ESPColor); // up
					canvas->Draw2DLine(pos.X - flWidth, smin.Y, pos.X - flWidth, smax.Y, ESPColor); // left
					canvas->Draw2DLine(pos.X + flWidth, smin.Y, pos.X + flWidth, smax.Y, ESPColor); // right
				}

				// Bones
				/*printf("======== Dumping bones ========\n");
				for (int i = 0; i < 500; i++)
				{
					FName boneName = CurrentPawn->Mesh->GetBoneName(i);
					printf("(%i) %s\n", i, boneName.GetName().c_str());
				}
				printf("============ Done! ============\n");
				MessageBox(0, 0, 0, 0);*/
			}
		}
		
		if (config_system.item.aimbot && o_getasynckeystate((DWORD)config_system.item.aimKey)) {
			int LocalTeam = Globals::ReplicationInfo->r_TaskForce->TeamIndex;
			int EnemyTeam = CurrentPawnReplicationInfo->r_TaskForce->TeamIndex;

			FVector head = CurrentPawn->Mesh->GetBoneLocation(utils::GetBoneFromId(config_system.item.aimBone), (int)EBoneControlSpace::BCS_WorldSpace);
			if (head == FVector{ 0.00f, 0.00f, 0.00f }) {
				CurrentPawn = (ATgPawn*)CurrentPawn->NextPawn;
				continue;
			}

			FVector2D headPos;

			if (!config_system.item.silent && AimbotLockedPawn)
			{
				if (AimbotLockedPawn->Health < 1) {
					AimbotLockedPawn = nullptr;
					LockedPawnHead = FVector{ 0, 0, 0 };
					bLocked = false;

					CurrentPawn = (ATgPawn*)CurrentPawn->NextPawn;
					continue;
				}
				
				LockedPawnHead = AimbotLockedPawn->Mesh->GetBoneLocation(utils::GetBoneFromId(config_system.item.aimBone), (int)EBoneControlSpace::BCS_WorldSpace);
				if (LockedPawnHead == FVector{0.00f, 0.00f, 0.00f}) {
					CurrentPawn = (ATgPawn*)CurrentPawn->NextPawn;
					continue;
				}

				if (bLocked)
				{
					Aimbot();
					CurrentPawn = (ATgPawn*)CurrentPawn->NextPawn;
					continue;
				}
			}
			else {
				if (!config_system.item.silent && bLocked)
				{
					AimbotLockedPawn = nullptr;
					LockedPawnHead = FVector{ 0, 0, 0 };
					bLocked = false;

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
				float crosshairDistance = maths::GetDistance2D(FVector2D{ cx, cy }, FVector2D{ ScreenCX, ScreenCY });

				if (config_system.item.silent) {
					if (crosshairDistance < ClosestPawn) {
						ClosestPawn = crosshairDistance;
						AimbotLockedPawn = CurrentPawn;

						LockedPawnHead = AimbotLockedPawn->Mesh->GetBoneLocation(utils::GetBoneFromId(config_system.item.aimBone), (int)EBoneControlSpace::BCS_WorldSpace);
						if (LockedPawnHead == FVector{ 0.00f, 0.00f, 0.00f }) {
							CurrentPawn = (ATgPawn*)CurrentPawn->NextPawn;
							continue;
						}
					}
				}
				else if (crosshairDistance < (float)config_system.item.aimFOV) {
					if (crosshairDistance < ClosestPawn) {
						ClosestPawn = crosshairDistance;
						AimbotLockedPawn = CurrentPawn;
					}

					//else {
					//	AimbotLockedPawn = nullptr;
					//	LockedPawnHead = FVector{ 0, 0, 0 };
					//	bLocked = false;

					//	CurrentPawn = (ATgPawn*)CurrentPawn->NextPawn;
					//	continue;
					//}
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

	if (config_system.item.silent)
	{
		Aimbot();
	} else if (!bLocked && AimbotLockedPawn && AimbotLockedPawn != NULL)
	{
		bLocked = true;
		Aimbot();
	}
}

void MainLoop(UCanvas* canvas) {
	if (!canvas) return;

	ZeroGUI::Input::Handle();
	ZeroGUI::SetupCanvas(canvas);

	canvas->STATIC_SetPos(0, 0, 0);

	Globals::width = canvas->SizeX;
	Globals::height = canvas->SizeY;

	if (config_system.item.hud) {
		utils::DrawText(canvas, FString(_xor_(L"Odin V4.1.0 | By Xiloe (Wooteck on UC)")), FVector2D(10.f, 10.f), colors::Yellow);
		utils::DrawText(canvas, FString(_xor_(L"INS - Menu (In-Game only)")), FVector2D(10.f, 30.f), utils::GetColor(config_system.item.showSexyMenu));
	}

	if (!Globals::SetObjects()) return;

	if (o_getasynckeystate((DWORD)config_system.item.menuKey) == -32767) config_system.item.showSexyMenu = !config_system.item.showSexyMenu;
	Globals::LocalController->bIgnoreLookInput = config_system.item.showSexyMenu;

	if (o_getasynckeystate((DWORD)config_system.item.visualsKey) == -32767) config_system.item.visuals = !config_system.item.visuals;
	if (o_getasynckeystate((DWORD)config_system.item.recoilKey) == -32767) config_system.item.recoil = !config_system.item.recoil;
	if (o_getasynckeystate((DWORD)config_system.item.spreadKey) == -32767) config_system.item.spread = !config_system.item.spread;
	if (o_getasynckeystate((DWORD)config_system.item.glowKey) == -32767) config_system.item.glow = !config_system.item.glow;
	if (o_getasynckeystate((DWORD)config_system.item.thirdPersonKey) == -32767) config_system.item.thirdPerson = !config_system.item.thirdPerson;
	if (o_getasynckeystate((DWORD)config_system.item.speedKey) == -32767) config_system.item.speedhack = !config_system.item.speedhack;
	
	if (config_system.item.visuals || config_system.item.aimbot)
		ActorLoop(canvas);

	if (config_system.item.glow || config_system.item.recoil || config_system.item.spread || config_system.item.thirdPerson || config_system.item.speedhack)
		Exploits();

	static auto menuPos = FVector2D{ 150.f, 150.f };
	if (ZeroGUI::Window(_xor_("Odin V4.1.0 | By Xiloe (Wooteck on UC)"), &menuPos, FVector2D{ 550.f, 600.f }, config_system.item.showSexyMenu)) {
		static int tab = 0;

		if (ZeroGUI::ButtonTab(_xor_("Aimbot"), FVector2D{ 100.f, 25.f }, tab == 0))
			tab = 0;
		if (ZeroGUI::ButtonTab(_xor_("Visuals"), FVector2D{ 100.f, 25.f }, tab == 1))
			tab = 1;
		if (ZeroGUI::ButtonTab(_xor_("Exploits"), FVector2D{ 100.f, 25.f }, tab == 2))
			tab = 2;
		if (ZeroGUI::ButtonTab(_xor_("Settings"), FVector2D{ 100.f, 25.f }, tab == 3))
			tab = 3;
		if (ZeroGUI::ButtonTab(_xor_("Colors"), FVector2D{ 100.f, 25.f }, tab == 4))
			tab = 4;
		if (ZeroGUI::ButtonTab(_xor_("UwU"), FVector2D{ 100.f, 25.f }, tab == 5))
			tab = 5;
		if (ZeroGUI::ButtonTab(_xor_("Infos"), FVector2D{ 100.f, 25.f }, tab == 6)) {
			tab = 6;
		}

		ZeroGUI::NextColumn(130.0f);

		switch (tab)
		{
			case 0:
			{
				ZeroGUI::Hotkey(_xor_("Keybind"), FVector2D{ 100.0f, 25.0f }, &config_system.item.aimKey); // TODO: Hold key
				ZeroGUI::Checkbox(_xor_("Aimbot"), &config_system.item.aimbot); ZeroGUI::SameLine();
				ZeroGUI::Combobox(_xor_("Aim bone"), FVector2D{ 125.0f, 25.0f }, &config_system.item.aimBone, _xor_("Head"), _xor_("Neck"), _xor_("Dick"), NULL);
				if (config_system.item.aimbot) {
					ZeroGUI::Checkbox(_xor_("fSilent"), &config_system.item.silent);
					ZeroGUI::Checkbox(_xor_("Visibility Check"), &config_system.item.visCheck);
					/*ZeroGUI::Checkbox(_xor_("Angle Check (!BUGGY!)"), &config_system.item.angleCheck);
					if (config_system.item.angleCheck)
						ZeroGUI::SliderInt(_xor_("Angle"), &config_system.item.angle, 0, 180);*/
						
					ZeroGUI::Checkbox(_xor_("Projectile Prediction (Buggy)"), &config_system.item.prediction);
					ZeroGUI::Checkbox(_xor_("Smooth"), &config_system.item.smooth);
					if (config_system.item.smooth)
						ZeroGUI::Checkbox(_xor_("Lock when close"), &config_system.item.lockWhenClose);

					ZeroGUI::SliderFloat(_xor_("FOV"), &config_system.item.aimFOV, 30.0f, 500.0f);
					if (config_system.item.smooth) {
						ZeroGUI::SliderFloat(_xor_("Smoothess"), &config_system.item.smoothness, 0.0055f, 0.01f, _xor_("%.3f"));
						if (config_system.item.lockWhenClose)
							ZeroGUI::SliderInt(_xor_("Tolerance"), &config_system.item.tolerance, 50, 150);
					}
				}
				break;
			}

			case 1:
			{
				ZeroGUI::Hotkey(_xor_("Keybind"), FVector2D{ 100.0f, 25.0f }, &config_system.item.visualsKey);
				ZeroGUI::Checkbox(_xor_("Visuals"), &config_system.item.visuals);
				if (config_system.item.visuals) {
					//ZeroGUI::Checkbox(_xor_("Allies"), &config_system.item.espAllies);
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
				ZeroGUI::SliderFloat(_xor_("FOV Slider"), &Globals::PlayerCamera->DefaultFOV, 50.0f, 170.0f);
				ZeroGUI::Checkbox(_xor_("Speedhack"), &config_system.item.speedhack); ZeroGUI::SameLine();
				ZeroGUI::Hotkey(_xor_("Speedhack Key"), FVector2D{ 100.0f, 25.0f }, &config_system.item.speedKey);
				ZeroGUI::SliderFloat(_xor_("Speedhack Speed"), &config_system.item.speed, 1.0f, 5.0f, _xor_("%.0f"));
					
				break;
			}

			case 3:
			{
				ZeroGUI::Text(_xor_("Cheat HUD (top left corner)"));
				ZeroGUI::Checkbox(_xor_("HUD"), &config_system.item.hud);

				/*ZeroGUI::Text(_xor_("Keybinds"));
				ZeroGUI::Hotkey(_xor_("Aimbot"), FVector2D{ 100.0f, 25.0f }, &config_system.item.aimKey); ZeroGUI::SameLine();
				ZeroGUI::Hotkey(_xor_("Visuals"), FVector2D{ 100.0f, 25.0f }, &config_system.item.visualsKey); ZeroGUI::SameLine();
				ZeroGUI::Hotkey(_xor_("Recoil"), FVector2D{ 100.0f, 25.0f }, &config_system.item.recoilKey);
				ZeroGUI::Hotkey(_xor_("Spread"), FVector2D{ 100.0f, 25.0f }, &config_system.item.spreadKey); ZeroGUI::SameLine();
				ZeroGUI::Hotkey(_xor_("Glow"), FVector2D{ 100.0f, 25.0f }, &config_system.item.glowKey); ZeroGUI::SameLine();
				ZeroGUI::Hotkey(_xor_("Third Person"), FVector2D{ 100.0f, 25.0f }, &config_system.item.thirdPersonKey);*/

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
				ZeroGUI::Text(_xor_("UwU"));

				UTgDeviceFire* fireMode = Globals::LocalWeapon->m_FireMode[0];

				// Hitscan champ
				// fireMode->m_nFireType = EWeaponFireType::EWFT_InstantHit;

				// Projectile champ
				// fireMode->m_nFireType = EWeaponFireType::EWFT_Projectile;
				if (Globals::LocalWeapon && Globals::LocalWeapon->m_FireMode.Num() > 0)
				{
					ZeroGUI::SliderInt(_xor_("m_nShotsPerFire"), &fireMode->m_nShotsPerFire, 1, 10);
					ZeroGUI::SliderInt(_xor_("m_nAmmoCostPerShot"), &fireMode->m_nAmmoCostPerShot, 0, 10);
					ZeroGUI::SliderFloat(_xor_("m_fAmmoClipPreReloadTime"), &fireMode->m_fAmmoClipPreReloadTime, 0.0f, 2.0f, _xor_("%.2f"));
					ZeroGUI::SliderFloat(_xor_("m_fAmmoClipPostReloadTime"), &fireMode->m_fAmmoClipPostReloadTime, 0.0f, 2.0f, _xor_("%.2f"));
					ZeroGUI::SliderFloat(_xor_("m_fFirePreHitDelay"), &fireMode->m_fFirePreHitDelay, 0.0f, 1.0f, _xor_("%.2f"));
					ZeroGUI::SliderFloat(_xor_("m_fFirePostHitDelay"), &fireMode->m_fFirePostHitDelay, 0.0f, 1.0f, _xor_("%.2f"));
				
					if (ZeroGUI::Button(_xor_("Toggle pass through shield"), FVector2D{ 300.0f, 25.0f })) {
						fireMode->m_bPassThroughShield = ~fireMode->m_bPassThroughShield;
					}

					if (ZeroGUI::Button(_xor_("Set Dredge"), FVector2D{ 300.0f, 25.0f })) {
						fireMode->m_fAmmoClipPreReloadTime = 0.001f;
						fireMode->m_fAmmoClipPostReloadTime = 0.001f;
						fireMode->m_fFirePreHitDelay = 0.001f;
						fireMode->m_fFirePostHitDelay = 0.001f;
					}
				}
				
				break;
			}

			case 6:
			{
				ZeroGUI::Text(_xor_("Odin V4 Made by Xiloe (Wooteck on UnknownCheats)"));
				ZeroGUI::Text(_xor_("Will be added in the next update:"));
				ZeroGUI::Text(_xor_("- Settings (Save/Load)"));
				ZeroGUI::Text(_xor_("- Allies Aimbot/ESP"));
				ZeroGUI::Text(_xor_("- More customization / keybinds"));

				ZeroGUI::Text(_xor_("Offsets:"));
				ZeroGUI::Text(_xor_("Module base: "));
				ZeroGUI::SameLine();
				ZeroGUI::Text(utils::addy2str(moduleBase));

				ZeroGUI::Text(_xor_("GObjects: "));
				ZeroGUI::SameLine();
				ZeroGUI::Text(utils::addy2str(UObject::GObjects));
				
				ZeroGUI::Text(_xor_("GNames: "));
				ZeroGUI::SameLine();
				ZeroGUI::Text(utils::addy2str(FName::GNames));

				ZeroGUI::Text(_xor_("UEngine: "));
				ZeroGUI::SameLine();
				ZeroGUI::Text(utils::addy2str((void*)Globals::UEngineAddr));

				ZeroGUI::Text(_xor_("ProcessEvent: "));
				ZeroGUI::SameLine();
				ZeroGUI::Text(utils::addy2str(ProcessEventOriginal));
				
				ZeroGUI::Text(_xor_("XOR: "));
				ZeroGUI::SameLine();
				ZeroGUI::Text(utils::addy2str(Globals::xorFunc));

				ZeroGUI::Text(_xor_("Key: "));
				ZeroGUI::SameLine();
				ZeroGUI::Text(utils::addy2str((void*)xorKey));

				break;
			}
		}
	}

	ZeroGUI::Render();
	ZeroGUI::Draw_Cursor(config_system.item.showSexyMenu);
}