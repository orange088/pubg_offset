constexpr auto Offset_GUObjects = 0x0A070570;
constexpr auto Offset_GWorld = 0x0A0B1898;
constexpr auto Offset_XenuineDecrypt = 0x08962128;
constexpr auto Offset_GNames = 0x0A2BDAB8;
constexpr auto Offset_ElementsPerChunk = 0x3FB4;

constexpr auto Offset_ObjID = 0x0008;
constexpr auto Offset_XorKey1 = 0xDE844008;
constexpr auto Offset_XorKey2 = 0x8C9E2FE5;
constexpr auto Offset_Value = 0x0000;
constexpr auto Offset_UsingRor = 0x0000;


namespace DecryptOuter{
constexpr unsigned long long xor_key_1 = 0xCE4670D3934C18F5;
constexpr unsigned long long xor_key_2 = 0x796A317574B7A3A5;
constexpr unsigned char offset = 0x18;
constexpr unsigned char rval = 0x05;
constexpr bool IsingRor = true;
};


namespace DecryptClass{
constexpr unsigned long long xor_key_1 = 0x45FB333C23A5B1F3;
constexpr unsigned long long xor_key_2 = 0xF733A1F4D7A49AC5;
constexpr unsigned char offset = 0x28;
constexpr unsigned char rval = 0x11;
constexpr bool IsingRor = false;
};


namespace DecryptNameIndex{
constexpr unsigned int xor_key_1 = 0xDE844008;
constexpr unsigned int xor_key_2 = 0x8C9E2FE5;
constexpr unsigned char offset = 0x08;
constexpr unsigned char rval = 0x00;
constexpr bool IsingRor = false;
};


namespace DecryptNameNumber{
constexpr unsigned int xor_key_1 = 0xA37B2FE5;
constexpr unsigned int xor_key_2 = 0x9E8C4008;
constexpr unsigned char offset = 0x0C;
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
uint32_t FunctionFlags = 0x0110;
uint32_t Function = 0x0128;
} UFunction;

struct {
uint32_t SuperStruct = 0x0070;
uint32_t Children = 0x0048;
uint32_t PropertiesSize = 0x0090;
} UStruct;

//-------------------------------------------

constexpr auto Offset_CurrentLevel = 0x0158;
constexpr auto Offset_Actors = 0x0058;
constexpr auto Offset_GameInstance = 0x0160;
constexpr auto Offset_LocalPlayers = 0x00B8;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0480;
constexpr auto Offset_PlayerCameraManager = 0x04A0;
constexpr auto Offset_LocalPlayersPTR = 0x0A1F6F20;

// Class Engine.Controller
constexpr auto Offset_ControlRotation = 0x0410;
constexpr auto Offset_StateName = 0x0408;


//World
constexpr auto Offset_OriginLocation = 0x09B4;
constexpr auto Offset_DeltaSeconds = 0x09AC;
constexpr auto Offset_TimeSeconds = 0x09A4;


constexpr auto Offset_LineTraceSingle = 0x06991AA8;
constexpr auto Offset_CurrentBuildNumber = 0x09EDEC60;
constexpr auto Offset_GameWindowSize = 0x09E80500;
constexpr auto Offset_CheckTab = 0x0A2F3116;
constexpr auto Offset_IsLobbyReady = 0x09EB19F8;

constexpr auto Offset_InactiveStateInputComponent = 0x06C0;
constexpr auto Offset_MyHUD = 0x0498;
constexpr auto Offset_WidgetStateMap = 0x04F0;
constexpr auto Offset_BlockInputWidgetList = 0x0558;
constexpr auto Offset_TrainingMapGrid = 0x06C0;
constexpr auto Offset_SelectMinimapSizeIndex = 0x05C0;
constexpr auto Offset_Slot = 0x0038;
constexpr auto Offset_LayoutData = 0x0040;
constexpr auto Offset_Visibility = 0x00A9;

//TslCharacter
constexpr auto Offset_PlayerState = 0x0420;
constexpr auto Offset_PlayerName = 0x0438;
constexpr auto Offset_PlayerStatistics = 0x09AC;
constexpr auto Offset_PartnerLevel = 0x04D6;
constexpr auto Offset_ClanInfo = 0x0C10;
constexpr auto Offset_bIsInAircraft = 0x0C48;
constexpr auto Offset_PubgIdData = 0x0E60;
constexpr auto Offset_DamageDealtOnEnemy = 0x0C04;
constexpr auto Offset_SpectatedCount = 0x1BC0;
constexpr auto Offset_Health = 0x0980;
constexpr auto Offset_GroggyHealth = 0x0F60;
constexpr auto Offset_CharacterState = 0x1D78;
constexpr auto Offset_Team = 0x0C38;
constexpr auto Offset_LastTeamNum = 0x0C40;
constexpr auto Offset_CharacterName = 0x1530;
constexpr auto Offset_AimOffsets = 0x1830;
constexpr auto Offset_Mesh = 0x0500;
constexpr auto Offset_StaticMesh = 0x0AC0;
constexpr auto Offset_LastSubmitTime = 0x0748;
constexpr auto Offset_LastRenderTime = 0x074C;
constexpr auto Offset_LastRenderTimeOnScreen = 0x0750;

//Actor
constexpr auto Offset_Owner = 0x0060;
constexpr auto Offset_OwnedComponents = 0x0248;
constexpr auto Offset_RootComponent = 0x02C8;

//SceneComponent
constexpr auto Offset_AttachParent = 0x02E0;
constexpr auto Offset_RelativeLocation = 0x0280;
constexpr auto Offset_ComponentVelocity = 0x02B4;
constexpr auto Offset_ComponentToWorld = 0x0210;
constexpr auto Offset_ComponentLocation = 0x0220;

//PlayerCameraManager
constexpr auto Offset_CameraLocation = 0x1700;
constexpr auto Offset_CameraRotation = 0x16E8;
constexpr auto Offset_CameraFov = 0x171C;

//Package
constexpr auto Offset_ItemPackage = 0x0578;

//Items
constexpr auto Offset_ItemTableRowBase = 0x00B0;
constexpr auto Offset_ItemID = 0x0268;
constexpr auto Offset_DroppedItem = 0x0430;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0718;

//ATslWeapon
constexpr auto Offset_WeaponProcessor = 0x08E0;
constexpr auto Offset_EquippedWeapons = 0x0208;
constexpr auto Offset_CurrentWeaponIndex = 0x0311;
constexpr auto Offset_WeaponTrajectoryData = 0x1050;
constexpr auto Offset_TrajectoryGravityZ = 0x0FCC;
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
constexpr auto Offset_CharacterMovement = 0x0548;
constexpr auto Offset_StanceMode = 0x0500;
constexpr auto Offset_MovementMode = 0x02D0;
constexpr auto Offset_Acceleration = 0x03A8;

constexpr auto Offset_AnimScriptInstance = 0x0C60;
constexpr auto Offset_ControlRotation_CP = 0x07FC;
constexpr auto Offset_RecoilADSRotation_CP = 0x09FC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0E04;
constexpr auto Offset_LeanRightAlpha_CP = 0x0E08;
constexpr auto Offset_bIsScoping_CP = 0x0D26;

constexpr auto Offset_VehicleRiderComponent = 0x1E90;
constexpr auto Offset_SeatIndex = 0x0230;
constexpr auto Offset_LastVehiclePawn = 0x0270;
constexpr auto Offset_ReplicatedMovement = 0x0068;

//ATslProjectile
constexpr auto Offset_ProjectileParticle = 0x0520;
constexpr auto Offset_ExplodeState = 0x05D0;
constexpr auto Offset_ProjectileConfig = 0x0630;
constexpr auto Offset_TimeTillExplosion = 0x079C;
constexpr auto Offset_TickStartVelocity = 0x08A0;

//UTslVehicleCommonComponent
constexpr auto Offset_VehicleCommonComponent_Floating = 0x04B8;
constexpr auto Offset_VehicleCommonComponent_Wheeled = 0x0BE8;
constexpr auto Offset_VehicleHealth = 0x02D8;
constexpr auto Offset_VehicleHealthMax = 0x02DC;
constexpr auto Offset_VehicleFuel = 0x02E0;
constexpr auto Offset_VehicleFuelMax = 0x02E4;
