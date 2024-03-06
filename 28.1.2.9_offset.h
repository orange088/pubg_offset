//PUBG-DumpOffset By:Orange
//QQ Group:600811082

enum DecryptIndex : unsigned int {
#define IndexXorKey1 ( 0xF1C590E9 )
#define IndexXorKey2 ( 0x2C61B05F )
	Index_Offset = 0x20,
	Index_Value = 0x0F,
	Index_UsingRor = 0x01
};

constexpr auto Offset_GameVersion = 0x0A561028;
constexpr auto Offset_DecryptPropertyOffset = 0x0763C568;
constexpr auto Offset_GUObjects = 0x0C43D7F0;
constexpr auto Offset_GWorld = 0x0C47ED18;
constexpr auto Offset_XenuineDecrypt = 0x0A8EC828;
constexpr auto Offset_GNames = 0x0C68BC60;
constexpr auto Offset_ElementsPerChunk = 0x4058;

constexpr auto Offset_CurrentLevel = 0x0150;
constexpr auto Offset_Actors = 0x0120;
constexpr auto Offset_GameInstance = 0x160;
constexpr auto Offset_LocalPlayers = 0x38;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x04A8;
constexpr auto Offset_PlayerCameraManager = 0x04D0;
constexpr auto Offset_LocalPlayersPTR = 0x0C5C4C20;

// Class Engine.Controller
constexpr auto Offset_ControlRotation = 0x0408;
constexpr auto Offset_StateName = 0x0478;

//World
constexpr auto Offset_OriginLocation = 0x09B4;
constexpr auto Offset_DeltaSeconds = 0x09AC;
constexpr auto Offset_TimeSeconds = 0x0998;

constexpr auto Offset_InactiveStateInputComponent = 0x06F0;
constexpr auto Offset_MyHUD = 0x04C8;
constexpr auto Offset_WidgetStateMap = 0x0508;
constexpr auto Offset_BlockInputWidgetList = 0x0570;
constexpr auto Offset_TrainingMapGrid = 0x06D0;
constexpr auto Offset_SelectMinimapSizeIndex = 0x05B8;
constexpr auto Offset_Slot = 0x0030;
constexpr auto Offset_LayoutData = 0x0038;
constexpr auto Offset_Visibility = 0x00A1;

//ATslPlayerState
constexpr auto Offset_PlayerState = 0x0428;
constexpr auto Offset_PlayerName = 0x0418;
constexpr auto Offset_PartnerLevel = 0x062E;
constexpr auto Offset_DamageDealtOnEnemy = 0x088C;
constexpr auto Offset_PlayerStatistics = 0x0678;
constexpr auto Offset_ClanInfo = 0x0C30;
constexpr auto Offset_bIsInAircraft = 0x0C68;
constexpr auto Offset_PubgIdData = 0x0E80;

//ATslCharacter
constexpr auto Offset_Health = 0x09B0;
constexpr auto Offset_SpectatedCount = 0x0F0C;
constexpr auto Offset_GroggyHealth = 0x1D20;
constexpr auto Offset_CharacterState = 0x2CA1;
constexpr auto Offset_Team = 0x0FC8;
constexpr auto Offset_LastTeamNum = 0x0FD8;
constexpr auto Offset_CharacterName = 0x1BF0;
constexpr auto Offset_ReviveCastingTime = 0x162C;
constexpr auto Offset_AimOffsets = 0x1760;

constexpr auto Offset_Mesh = 0x04F8;
constexpr auto Offset_StaticMesh = 0x0AB0;
constexpr auto Offset_LastSubmitTime = 0x0738;
constexpr auto Offset_LastRenderTime = 0x073C;
constexpr auto Offset_LastRenderTimeOnScreen = 0x0740;

//Actor
constexpr auto Offset_Owner = 0x0048;
constexpr auto Offset_OwnedComponents = 0x0368;
constexpr auto Offset_RootComponent = 0x01C0;

//SceneComponent
constexpr auto Offset_AttachParent = 0x0310;
constexpr auto Offset_RelativeLocation = 0x01F0;
constexpr auto Offset_ComponentVelocity = 0x0330;
constexpr auto Offset_ComponentToWorld = 0x02C0;
constexpr auto Offset_ComponentLocation = 0x02D0;

//PlayerCameraManager
constexpr auto Offset_CameraLocation = 0x0A3C;
constexpr auto Offset_CameraRotation = 0x0A48;
constexpr auto Offset_CameraFov = 0x0A34;

//Package
constexpr auto Offset_ItemPackage = 0x0590;

//Items
constexpr auto Offset_ItemTableRowBase = 0x00A8;
constexpr auto Offset_ItemName = 0x0018;
constexpr auto Offset_ItemID = 0x0268;
constexpr auto Offset_DroppedItem = 0x0460;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0708;

//ATslWeapon
constexpr auto Offset_WeaponProcessor = 0x0910;
constexpr auto Offset_EquippedWeapons = 0x01F8;
constexpr auto Offset_CurrentWeaponIndex = 0x0301;
constexpr auto Offset_WeaponTrajectoryData = 0x10C0;
constexpr auto Offset_TrajectoryGravityZ = 0x102C;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;

constexpr auto Offset_WeaponConfig = 0x04E0;
constexpr auto Offset_WeaponClass = 0x0094;
constexpr auto Offset_Mesh3P = 0x07B0;
constexpr auto Offset_FiringAttachPoint = 0x0860;
constexpr auto Offset_CurrentAmmoData = 0x0A80;
constexpr auto Offset_FiringModeIndex = 0x0ABC;
constexpr auto Offset_ScopingAttachPoint = 0x0C68;
constexpr auto Offset_AttachedStaticComponentMap = 0x11A8;

//CharacterMovement
constexpr auto Offset_CharacterMovement = 0x0498;
constexpr auto Offset_StanceMode = 0x0500;
constexpr auto Offset_MovementMode = 0x02C8;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;

constexpr auto Offset_AnimScriptInstance = 0x0C50;
constexpr auto Offset_ControlRotation_CP = 0x07F4;
constexpr auto Offset_RecoilADSRotation_CP = 0x0A8C;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0E94;
constexpr auto Offset_LeanRightAlpha_CP = 0x0E98;
constexpr auto Offset_bIsScoping_CP = 0x0DB6;

constexpr auto Offset_VehicleRiderComponent = 0x1FE0;
constexpr auto Offset_SeatIndex = 0x0220;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x0058;

//ATslProjectile
constexpr auto Offset_ProjectileParticle = 0x0530;
constexpr auto Offset_ExplodeState = 0x05E0;
constexpr auto Offset_ProjectileConfig = 0x0640;
constexpr auto Offset_TimeTillExplosion = 0x07AC;
constexpr auto Offset_TickStartVelocity = 0x08B0;

//UTslVehicleCommonComponent
constexpr auto Offset_VehicleCommonComponent_Floating = 0x04D8;
constexpr auto Offset_VehicleCommonComponent_Wheeled = 0x0C08;
constexpr auto Offset_VehicleHealth = 0x02C8;
constexpr auto Offset_VehicleHealthMax = 0x02CC;
constexpr auto Offset_VehicleFuel = 0x02D0;
constexpr auto Offset_VehicleFuelMax = 0x02D4;
