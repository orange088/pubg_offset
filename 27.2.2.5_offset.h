//BY:Orange 89496414
constexpr auto Offset_GameVer = 0x088CC870;
constexpr auto Offset_GUObjects = 0x0A5605F0;
constexpr auto Offset_GWorld = 0x0A5A1B08;
constexpr auto Offset_XenuineDecrypt = 0x08C55E28;
constexpr auto Offset_GNames = 0x0A7AD770;
constexpr auto Offset_ElementsPerChunk = 0x4070;


constexpr auto Offset_ObjID = 0x0020;
constexpr auto Offset_XorKey1 = 0x2F567622;
constexpr auto Offset_XorKey2 = 0x74590804;
constexpr auto Offset_Value = 0x000B;
constexpr auto Offset_UsingRor = 0x0001;


namespace DecryptOuter{
constexpr unsigned long long xor_key_1 = 0x59A426848BE5DBC9;
constexpr unsigned long long xor_key_2 = 0x7E65DD1FC8F1DF64;
constexpr unsigned char offset = 0x08;
constexpr unsigned char rval = 0x0E;
constexpr bool IsingRor = false;
};


namespace DecryptClass{
constexpr unsigned long long xor_key_1 = 0x10C761ED7C698457;
constexpr unsigned long long xor_key_2 = 0x104A2840F6349551;
constexpr unsigned char offset = 0x10;
constexpr unsigned char rval = 0x1C;
constexpr bool IsingRor = true;
};


namespace DecryptNameIndex{
constexpr unsigned int xor_key_1 = 0x2F567622;
constexpr unsigned int xor_key_2 = 0x74590804;
constexpr unsigned char offset = 0x20;
constexpr unsigned char rval = 0x0B;
constexpr bool IsingRor = true;
};


namespace DecryptNameNumber{
constexpr unsigned int xor_key_1 = 0x7C5D0804;
constexpr unsigned int xor_key_2 = 0x59747622;
constexpr unsigned char offset = 0x24;
constexpr unsigned char rval = 0x0D;
constexpr bool IsingRor = false;
};

constexpr auto Offset_CurrentLevel = 0x0150;
constexpr auto Offset_Actors = 0x00D0;
constexpr auto Offset_GameInstance = 0x0160;
constexpr auto Offset_LocalPlayers = 0x0048;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0498;
constexpr auto Offset_PlayerCameraManager = 0x04C0;
constexpr auto Offset_LocalPlayersPTR = 0x0A6E6FC0;

//World
constexpr auto Offset_OriginLocation = 0x09B4;
constexpr auto Offset_DeltaSeconds = 0x09AC;
constexpr auto Offset_TimeSeconds = 0x09A4;

constexpr auto Offset_LineTraceSingle = 0x06AF7504;

constexpr auto Offset_InactiveStateInputComponent = 0x06E0;
constexpr auto Offset_MyHUD = 0x04B8;
constexpr auto Offset_WidgetStateMap = 0x04F0;
constexpr auto Offset_BlockInputWidgetList = 0x0558;
constexpr auto Offset_TrainingMapGrid = 0x06D0;
constexpr auto Offset_SelectMinimapSizeIndex = 0x05B8;
constexpr auto Offset_Slot = 0x0030;
constexpr auto Offset_LayoutData = 0x0038;
constexpr auto Offset_Visibility = 0x00A1;

//TslCharacter
constexpr auto Offset_PlayerState = 0x0420;
constexpr auto Offset_PlayerName = 0x0418;
constexpr auto Offset_PlayerStatistics = 0x07C0;
constexpr auto Offset_PartnerLevel = 0x0646;
constexpr auto Offset_ClanInfo = 0x0C00;
constexpr auto Offset_bIsInAircraft = 0x0C38;
constexpr auto Offset_PubgIdData = 0x0E50;
constexpr auto Offset_DamageDealtOnEnemy = 0x0828;

constexpr auto Offset_PlayerHealth = 0x0990;
constexpr auto Offset_Health = 0x09C0;
constexpr auto Offset_Gender = 0x09F0;
constexpr auto Offset_SpectatedCount = 0x1C68;
constexpr auto Offset_GroggyHealth = 0x1340;
constexpr auto Offset_CharacterState = 0x1C10;
constexpr auto Offset_Team = 0x1D98;
constexpr auto Offset_LastTeamNum = 0x1DA8;
constexpr auto Offset_CharacterName = 0x0DE0;
constexpr auto Offset_ReviveCastingTime = 0x16CC;
constexpr auto Offset_AimOffsets = 0x1800;

constexpr auto Offset_Mesh = 0x0548;
constexpr auto Offset_StaticMesh = 0x0AB0;
constexpr auto Offset_LastSubmitTime = 0x0738;
constexpr auto Offset_LastRenderTime = 0x073C;
constexpr auto Offset_LastRenderTimeOnScreen = 0x0740;

//Actor
constexpr auto Offset_Owner = 0x0048;
constexpr auto Offset_OwnedComponents = 0x01E0;
constexpr auto Offset_RootComponent = 0x01C0;

//SceneComponent
constexpr auto Offset_AttachParent = 0x0350;
constexpr auto Offset_RelativeLocation = 0x01F0;
constexpr auto Offset_ComponentVelocity = 0x01FC;
constexpr auto Offset_ComponentToWorld = 0x0270;
constexpr auto Offset_ComponentLocation = 0x0280;

//PlayerCameraManager
constexpr auto Offset_CameraLocation = 0x1CA0;
constexpr auto Offset_CameraRotation = 0x1C8C;
constexpr auto Offset_CameraFov = 0x1C88;

//Package
constexpr auto Offset_ItemPackage = 0x0578;

//Items
constexpr auto Offset_ItemTableRowBase = 0x00A8;
constexpr auto Offset_ItemID = 0x0268;
constexpr auto Offset_DroppedItem = 0x0430;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0708;

//ATslWeapon
constexpr auto Offset_WeaponProcessor = 0x08F0;
constexpr auto Offset_EquippedWeapons = 0x01F8;
constexpr auto Offset_CurrentWeaponIndex = 0x0301;
constexpr auto Offset_WeaponTrajectoryData = 0x1040;
constexpr auto Offset_TrajectoryGravityZ = 0x100C;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;

//CharacterMovement
constexpr auto Offset_CharacterMovement = 0x0510;
constexpr auto Offset_StanceMode = 0x0500;
constexpr auto Offset_MovementMode = 0x02C8;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;

constexpr auto Offset_AnimScriptInstance = 0x0C50;
constexpr auto Offset_ControlRotation_CP = 0x07F4;
constexpr auto Offset_RecoilADSRotation_CP = 0x0A7C;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0E84;
constexpr auto Offset_LeanRightAlpha_CP = 0x0E88;
constexpr auto Offset_bIsScoping_CP = 0x0DA6;

constexpr auto Offset_VehicleRiderComponent = 0x1EC0;
constexpr auto Offset_SeatIndex = 0x0220;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x0058;

//ATslProjectile
constexpr auto Offset_ProjectileParticle = 0x0520;
constexpr auto Offset_ExplodeState = 0x05D0;
constexpr auto Offset_ProjectileConfig = 0x0630;
constexpr auto Offset_TimeTillExplosion = 0x079C;
constexpr auto Offset_TickStartVelocity = 0x08A0;

//UTslVehicleCommonComponent
constexpr auto Offset_VehicleCommonComponent_Floating = 0x04C0;
constexpr auto Offset_VehicleCommonComponent_Wheeled = 0x0BF8;
constexpr auto Offset_VehicleHealth = 0x02C8;
constexpr auto Offset_VehicleHealthMax = 0x02CC;
constexpr auto Offset_VehicleFuel = 0x02D0;
constexpr auto Offset_VehicleFuelMax = 0x02D4;
