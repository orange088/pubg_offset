constexpr auto Offset_GUObjects = 0x09D3F5F0;
constexpr auto Offset_GWorld = 0x09D80918;
constexpr auto Offset_XenuineDecrypt = 0x0862E328;
constexpr auto Offset_GNames = 0x09F8CB28;
constexpr auto Offset_ElementsPerChunk = 0x41A8;

namespace DecryptOuter{
constexpr unsigned long long xor_key_1 = 0x4E1DB6A6A1A55C71;
constexpr unsigned long long xor_key_2 = 0xED04ABEB577CE5E5;
constexpr unsigned char offset = 0x08;
constexpr unsigned char rval = 0x1B;
constexpr bool IsingRor = false;
};


namespace DecryptClass{
constexpr unsigned long long xor_key_1 = 0xA1EBE9C9BB0DFBBD;
constexpr unsigned long long xor_key_2 = 0x8657EF98AB8F6E20;
constexpr unsigned char offset = 0x20;
constexpr unsigned char rval = 0x0F;
constexpr bool IsingRor = true;
};


namespace DecryptNameIndex{
constexpr unsigned int xor_key_1 = 0x92A6C3B6;
constexpr unsigned int xor_key_2 = 0x10511EBC;
constexpr unsigned char offset = 0x10;
constexpr unsigned char rval = 0x00;
constexpr bool IsingRor = false;
};


namespace DecryptNameNumber{
constexpr unsigned int xor_key_1 = 0xEED1EBC;
constexpr unsigned int xor_key_2 = 0x5110C3B6;
constexpr unsigned char offset = 0x14;
constexpr unsigned char rval = 0x08;
constexpr bool IsingRor = true;
};

//-------------------------------------------

struct {
uint32_t ArrayDim = 0x0038;
uint32_t ElementSize = 0x003C;
uint32_t Offset = 0x0058;
uint32_t PropertyFlags = 0x0040;
uint32_t Size = 0x0080;
} UProperty;


struct {
uint32_t FunctionFlags = 0x00FC;
uint32_t Function = 0x0120;
} UFunction;


struct {
uint32_t SuperStruct = 0x0058;
uint32_t Children = 0x0080;
uint32_t PropertiesSize = 0x0078;
} UStruct;

//-------------------------------------------

constexpr auto Offset_CurrentLevel = 0x0158;
constexpr auto Offset_Actors = 0x01E8;
constexpr auto Offset_GameInstance = 0x0160;
constexpr auto Offset_LocalPlayers = 0x0038;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0480;
constexpr auto Offset_PlayerCameraManager = 0x04A0;
constexpr auto Offset_LocalPlayersPTR = 0x09EC5FB0;

// Class Engine.Controller
constexpr auto Offset_ControlRotation = 0x0454;
constexpr auto Offset_StateName = 0x0430;

//World
constexpr auto Offset_OriginLocation = 0x09B4;
constexpr auto Offset_DeltaSeconds = 0x09AC;
constexpr auto Offset_TimeSeconds = 0x09A4;

constexpr auto Offset_LineTraceSingle = 0x06673850;
constexpr auto Offset_CurrentBuildNumber = 0x09BADC60;
constexpr auto Offset_GameWindowSize = 0x09B4F500;
constexpr auto Offset_CheckTab = 0x09FC2186;
constexpr auto Offset_IsLobbyReady = 0x09B809F8;

constexpr auto Offset_InactiveStateInputComponent = 0x06C0;
constexpr auto Offset_MyHUD = 0x0498;
constexpr auto Offset_WidgetStateMap = 0x04F8;
constexpr auto Offset_BlockInputWidgetList = 0x0560;
constexpr auto Offset_TrainingMapGrid = 0x06C0;
constexpr auto Offset_SelectMinimapSizeIndex = 0x05C0;
constexpr auto Offset_Slot = 0x0038;
constexpr auto Offset_LayoutData = 0x0040;
constexpr auto Offset_Visibility = 0x00A9;

//TslCharacter
constexpr auto Offset_PlayerState = 0x0428;
constexpr auto Offset_PlayerName = 0x0428;
constexpr auto Offset_PlayerStatistics = 0x07C4;
constexpr auto Offset_PartnerLevel = 0x060E;
constexpr auto Offset_ClanInfo = 0x0C10;
constexpr auto Offset_bIsInAircraft = 0x0C48;
constexpr auto Offset_PubgIdData = 0x0E60;
constexpr auto Offset_DamageDealtOnEnemy = 0x07A8;
constexpr auto Offset_SpectatedCount = 0x14C4;
constexpr auto Offset_Health = 0x0980;
constexpr auto Offset_GroggyHealth = 0x1470;
constexpr auto Offset_CharacterState = 0x1629;
constexpr auto Offset_Team = 0x1CC8;
constexpr auto Offset_LastTeamNum = 0x1CD0;
constexpr auto Offset_CharacterName = 0x1C60;
constexpr auto Offset_AimOffsets = 0x18D0;

constexpr auto Offset_Mesh = 0x04B8;
constexpr auto Offset_StaticMesh = 0x0AC0;
constexpr auto Offset_LastSubmitTime = 0x0748;
constexpr auto Offset_LastRenderTime = 0x074C;
constexpr auto Offset_LastRenderTimeOnScreen = 0x0750;

//Actor
constexpr auto Offset_Owner = 0x0078;
constexpr auto Offset_OwnedComponents = 0x0370;
constexpr auto Offset_RootComponent = 0x01B0;

//SceneComponent
constexpr auto Offset_AttachParent = 0x0240;
constexpr auto Offset_RelativeLocation = 0x0374;
constexpr auto Offset_ComponentVelocity = 0x0248;
constexpr auto Offset_ComponentToWorld = 0x02B0;
constexpr auto Offset_ComponentLocation = 0x02C0;

//PlayerCameraManager
constexpr auto Offset_CameraLocation = 0x107C;
constexpr auto Offset_CameraRotation = 0x109C;
constexpr auto Offset_CameraFov = 0x1098;

//Package
constexpr auto Offset_ItemPackage = 0x0580;

//Items
constexpr auto Offset_ItemTableRowBase = 0x00B0;
constexpr auto Offset_ItemName = 0x0018;
constexpr auto Offset_ItemID = 0x0268;
constexpr auto Offset_DroppedItem = 0x0438;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0718;

//ATslWeapon
constexpr auto Offset_WeaponProcessor = 0x08E0;
constexpr auto Offset_EquippedWeapons = 0x0208;
constexpr auto Offset_CurrentWeaponIndex = 0x0311;
constexpr auto Offset_WeaponTrajectoryData = 0x1040;
constexpr auto Offset_TrajectoryGravityZ = 0x0F6C;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;

constexpr auto Offset_WeaponConfig = 0x04D0;
constexpr auto Offset_WeaponClass = 0x0094;
constexpr auto Offset_Mesh3P = 0x07A0;
constexpr auto Offset_FiringAttachPoint = 0x0840;
constexpr auto Offset_ScopingAttachPoint = 0x0C48;
constexpr auto Offset_FiringModeIndex = 0x0A9C;
constexpr auto Offset_CurrentAmmoData = 0x0A60;
constexpr auto Offset_AttachedStaticComponentMap = 0x11B8;
constexpr auto Offset_ScopeType = 0x0E95;

//CharacterMovement
constexpr auto Offset_CharacterMovement = 0x0538;
constexpr auto Offset_StanceMode = 0x0500;
constexpr auto Offset_MovementMode = 0x02D0;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;

constexpr auto Offset_AnimScriptInstance = 0x0C60;
constexpr auto Offset_ControlRotation_CP = 0x07FC;
constexpr auto Offset_RecoilADSRotation_CP = 0x09FC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0E04;
constexpr auto Offset_LeanRightAlpha_CP = 0x0E08;
constexpr auto Offset_bIsScoping_CP = 0x0D26;

constexpr auto Offset_VehicleRiderComponent = 0x1F80;
constexpr auto Offset_SeatIndex = 0x0230;
constexpr auto Offset_LastVehiclePawn = 0x0270;
constexpr auto Offset_ReplicatedMovement = 0x0080;

//ATslProjectile
constexpr auto Offset_ProjectileParticle = 0x0520;
constexpr auto Offset_ExplodeState = 0x05D0;
constexpr auto Offset_ProjectileConfig = 0x0630;
constexpr auto Offset_TimeTillExplosion = 0x079C;
constexpr auto Offset_TickStartVelocity = 0x08A0;

//UTslVehicleCommonComponent
constexpr auto Offset_VehicleCommonComponent_Floating = 0x04C0;
constexpr auto Offset_VehicleCommonComponent_Wheeled = 0x0BF8;
constexpr auto Offset_VehicleHealth = 0x02D8;
constexpr auto Offset_VehicleHealthMax = 0x02DC;
constexpr auto Offset_VehicleFuel = 0x02E0;
constexpr auto Offset_VehicleFuelMax = 0x02E4;
