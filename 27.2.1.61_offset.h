constexpr auto Offset_GameVer = 0x089AFF18;
constexpr auto Offset_GUObjects = 0x0A6DFB70;
constexpr auto Offset_GWorld = 0x0A721088;
constexpr auto Offset_XenuineDecrypt = 0x08D3F028;
constexpr auto Offset_GNames = 0x0A92CCF0;
constexpr auto Offset_ElementsPerChunk = 0x3E4C;

constexpr auto Offset_CurrentLevel = 0x0150;
constexpr auto Offset_Actors = 0x0128;
constexpr auto Offset_GameInstance = 0x0160;
constexpr auto Offset_LocalPlayers = 0x0040;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x04A8;
constexpr auto Offset_PlayerCameraManager = 0x04D0;
constexpr auto Offset_LocalPlayersPTR = 0x0A866560;

// Class Engine.Controller
constexpr auto Offset_ControlRotation = 0x0448;
constexpr auto Offset_StateName = 0x0428;

//World
constexpr auto Offset_OriginLocation = 0x09B4;
constexpr auto Offset_DeltaSeconds = 0x09AC;
constexpr auto Offset_TimeSeconds = 0x09A4;

constexpr auto Offset_LineTraceSingle = 0x06CC82A8;

constexpr auto Offset_InactiveStateInputComponent = 0x06F0;
constexpr auto Offset_MyHUD = 0x04C8;
constexpr auto Offset_WidgetStateMap = 0x0500;
constexpr auto Offset_BlockInputWidgetList = 0x0560;
constexpr auto Offset_TrainingMapGrid = 0x06D0;
constexpr auto Offset_SelectMinimapSizeIndex = 0x05B8;
constexpr auto Offset_Slot = 0x0030;
constexpr auto Offset_LayoutData = 0x0038;
constexpr auto Offset_Visibility = 0x00A1;

//TslCharacter
constexpr auto Offset_PlayerState = 0x0420;
constexpr auto Offset_PlayerName = 0x0428;
constexpr auto Offset_PlayerStatistics = 0x0BE0;
constexpr auto Offset_PartnerLevel = 0x0A0E;
constexpr auto Offset_ClanInfo = 0x0C28;
constexpr auto Offset_bIsInAircraft = 0x0C60;
constexpr auto Offset_PubgIdData = 0x0E78;
constexpr auto Offset_DamageDealtOnEnemy = 0x0490;

constexpr auto Offset_PlayerHealth = 0x09A0;
constexpr auto Offset_Gender = 0x0A00;
constexpr auto Offset_SpectatedCount = 0x1AF8;
constexpr auto Offset_GroggyHealth = 0x14D0;
constexpr auto Offset_CharacterState = 0x1164;
constexpr auto Offset_Team = 0x1280;
constexpr auto Offset_LastTeamNum = 0x1290;
constexpr auto Offset_CharacterName = 0x1C20;
constexpr auto Offset_AimOffsets = 0x17F0;

constexpr auto Offset_Mesh = 0x0570;
constexpr auto Offset_StaticMesh = 0x0AC0;
constexpr auto Offset_LastSubmitTime = 0x0748;
constexpr auto Offset_LastRenderTime = 0x074C;
constexpr auto Offset_LastRenderTimeOnScreen = 0x0750;

//Actor
constexpr auto Offset_Owner = 0x0058;
constexpr auto Offset_OwnedComponents = 0x02D8;
constexpr auto Offset_RootComponent = 0x0158;

//SceneComponent
constexpr auto Offset_AttachParent = 0x0370;
constexpr auto Offset_RelativeLocation = 0x02FC;
constexpr auto Offset_ComponentVelocity = 0x0204;
constexpr auto Offset_ComponentToWorld = 0x0330;
constexpr auto Offset_ComponentLocation = 0x0340;

//PlayerCameraManager
constexpr auto Offset_CameraLocation = 0x1614;
constexpr auto Offset_CameraRotation = 0x15F4;
constexpr auto Offset_CameraFov = 0x15E8;

//Package
constexpr auto Offset_ItemPackage = 0x0588;
constexpr auto Offset_PackageType = 0x05EC;
constexpr auto Offset_PackageIcon = 0x0500;

//Items
constexpr auto Offset_ItemTableRowBase = 0x00A8;
constexpr auto Offset_ItemID = 0x0268;
constexpr auto Offset_DroppedItem = 0x0440;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0718;

//ATslWeapon
constexpr auto Offset_WeaponProcessor = 0x0900;
constexpr auto Offset_EquippedWeapons = 0x01F8;
constexpr auto Offset_CurrentWeaponIndex = 0x0301;
constexpr auto Offset_WeaponTrajectoryData = 0x10C0;
constexpr auto Offset_TrajectoryGravityZ = 0x0FCC;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;

constexpr auto Offset_WeaponConfig = 0x04E0;
constexpr auto Offset_WeaponClass = 0x0094;
constexpr auto Offset_Mesh3P = 0x07B0;
constexpr auto Offset_FiringAttachPoint = 0x0860;
constexpr auto Offset_ScopingAttachPoint = 0x0C68;
constexpr auto Offset_FiringModeIndex = 0x0ABC;
constexpr auto Offset_CurrentAmmoData = 0x0A80;

//CharacterMovement
constexpr auto Offset_CharacterMovement = 0x04D0;
constexpr auto Offset_StanceMode = 0x0500;
constexpr auto Offset_MovementMode = 0x02C8;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;
constexpr auto Offset_PendingLaunchVelocity = 0x054C;

constexpr auto Offset_AnimScriptInstance = 0x0C60;
constexpr auto Offset_ControlRotation_CP = 0x07F4;
constexpr auto Offset_RecoilADSRotation_CP = 0x0A7C;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0E84;
constexpr auto Offset_LeanRightAlpha_CP = 0x0E88;
constexpr auto Offset_bIsScoping_CP = 0x0DA6;

constexpr auto Offset_VehicleRiderComponent = 0x1F30;
constexpr auto Offset_SeatIndex = 0x0220;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x0068;

//ATslProjectile
constexpr auto Offset_ProjectileParticle = 0x0530;
constexpr auto Offset_ExplodeState = 0x05E0;
constexpr auto Offset_ProjectileConfig = 0x0640;
constexpr auto Offset_TimeTillExplosion = 0x07AC;
constexpr auto Offset_TickStartVelocity = 0x08B0;

//UTslVehicleCommonComponent
constexpr auto Offset_VehicleCommonComponent_Floating = 0x04D0;
constexpr auto Offset_VehicleCommonComponent_Wheeled = 0x0C08;
constexpr auto Offset_VehicleHealth = 0x02C8;
constexpr auto Offset_VehicleHealthMax = 0x02CC;
constexpr auto Offset_VehicleFuel = 0x02D0;
constexpr auto Offset_VehicleFuelMax = 0x02D4;
