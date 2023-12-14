GUObjects = 0x09D3F5F0,
GWorld = 0x09D80918,
XenuineDecrypt = 0x0862E328,
GNames = 0x09F8CB28,
ElementsPerChunk = 0x41A8,

ObjID = 0x0010,
XorKey1 = 0x92A6C3B6,
XorKey2 = 0x10511EBC,
Value = 0x0000,
UsingRor = 0x0000,


namespace DecryptOuter{
constexpr unsigned long long xor_key_1 = 0x4E1DB6A6A1A55C71,
constexpr unsigned long long xor_key_2 = 0xED04ABEB577CE5E5,
constexpr unsigned char offset = 0x08,
constexpr unsigned char rval = 0x1B,
constexpr bool IsingRor = false,
},


namespace DecryptClass{
constexpr unsigned long long xor_key_1 = 0xA1EBE9C9BB0DFBBD,
constexpr unsigned long long xor_key_2 = 0x8657EF98AB8F6E20,
constexpr unsigned char offset = 0x20,
constexpr unsigned char rval = 0x0F,
constexpr bool IsingRor = true,
},


namespace DecryptNameIndex{
constexpr unsigned int xor_key_1 = 0x92A6C3B6,
constexpr unsigned int xor_key_2 = 0x10511EBC,
constexpr unsigned char offset = 0x10,
constexpr unsigned char rval = 0x00,
constexpr bool IsingRor = false,
},


namespace DecryptNameNumber{
constexpr unsigned int xor_key_1 = 0xEED1EBC,
constexpr unsigned int xor_key_2 = 0x5110C3B6,
constexpr unsigned char offset = 0x14,
constexpr unsigned char rval = 0x08,
constexpr bool IsingRor = true,
},

//-------------------------------------------



CurrentLevel = 0x0158,
Actors = 0x01E8,
GameInstance = 0x0160,
LocalPlayers = 0x0038,
PlayerController = 0x0038,
AcknowledgedPawn = 0x0480,
PlayerCameraManager = 0x04A0,
InputPitchScale = 0x0620,
InputYawScale = 0x061C,
CameraViewBehaviour = 0x0AF0,

// Class Engine.Controller
ControlRotation = 0x0454,
StateName = 0x0430,

//World
OriginLocation = 0x09B4,
DeltaSeconds = 0x09AC,
TimeSeconds = 0x09A4,

GetIconTexture = 0x0062BB98,
Resource = 0x0078,
ImportedSize = 0x018C,
WeaponIcon = 0x0428,
WeaponIconRatio = 0x0430,
GetIconTexture_Index = 0x0030,

RefreshSkinInfo = 0x0035E794,
LineTraceSingle = 0x06673850,
GetDisplayName = 0x0667007C,
ProjectWorldLocationToScreen = 0x003ED8F0,
GetMousePosition = 0x00571C84,
VTable_LineOfSightTo = 0x06F0,
StopAllAnimMontages = 0x0052812C,
GetTslCharacterOrSpectator = 0x0539DF30,
GetLocalTslPlayerController = 0x00343D1C,

CurrentBuildNumber = 0x09BADC60,
GameWindowSize = 0x09B4F500,
CheckTab = 0x09FC2186,
IsLobbyReady = 0x09B809F8,

InactiveStateInputComponent = 0x06C0,
MyHUD = 0x0498,
WidgetStateMap = 0x04F8,
TrainingMapGrid = 0x06C0,
SelectMinimapSizeIndex = 0x05C0,
Slot = 0x0038,
LayoutData = 0x0040,
Visibility = 0x00A9,
WidgetIsVisible = 0x003E1034,

//TslCharacter
PlayerState = 0x0428,
PlayerName = 0x0428,
PlayerStatistics = 0x07C4,
PartnerLevel = 0x060E,
ClanInfo = 0x0C10,
bIsInAircraft = 0x0C48,
PubgIdData = 0x0E60,
DamageDealtOnEnemy = 0x07A8,
SpectatedCount = 0x14C4,
Health = 0x09A8,
GroggyHealth = 0x1470,
CharacterState = 0x1629,
Team = 0x1CC8,
LastTeamNum = 0x1CD0,
CharacterName = 0x1C60,
AimOffsets = 0x18D0,

Mesh = 0x04B8,
StaticMesh = 0x0AC0,

LastSubmitTime = 0x0748,
LastRenderTime = 0x074C,
LastRenderTimeOnScreen = 0x0750,
VTable_GetTslPlayerState = 0x0960,

//Actor
Owner = 0x0078,
OwnedComponents = 0x0370,
RootComponent = 0x01B0,
VTable_SetReplicateMovement = 0x0290,
VTable_GetVelocity = 0x0348,

//SceneComponent
AttachParent = 0x0240,
RelativeLocation = 0x0374,
ComponentVelocity = 0x0248,
ComponentToWorld = 0x02B0,
ComponentLocation = 0x02C0,
VTable_GetSocketTransform = 0x0428,
VTable_GetSocketRotation = 0x0438,
VTable_GetSocketLocation = 0x0430,

//PlayerCameraManager
ViewPitchMin = 0x1630,
ViewPitchMax = 0x103C,
ViewYawMin = 0x0A18,
ViewYawMax = 0x1CD4,
CameraLocation = 0x107C,
CameraRotation = 0x109C,
CameraFov = 0x1098,
VTable_StopAllCameraShakes = 0x07C8,
VTable_StopAllCameraAnims = 0x0800,

//Package
ItemPackage = 0x0580,
PackageType = 0x05E4,
PackageIcon = 0x04F8,
PackageIconSizeRatio = 0x0500,

//Items
ItemTableRowBase = 0x00B0,
ItemName = 0x0018,
ItemID = 0x0268,
DroppedItem = 0x0438,
DroppedItemGroup_UItem = 0x0718,

//ATslWeapon
WeaponProcessor = 0x08E0,
EquippedWeapons = 0x0208,
CurrentWeaponIndex = 0x0311,
WeaponTrajectoryData = 0x1040,
TrajectoryGravityZ = 0x0F6C,
TrajectoryConfig = 0x0108,
FloatCurves = 0x0038,
GetVectorValue = 0x003EB100,

WeaponConfig = 0x04D0,
WeaponClass = 0x0094,
Mesh3P = 0x07A0,
FiringAttachPoint = 0x0840,
ScopingAttachPoint = 0x0C48,
FiringModeIndex = 0x0A9C,
CurrentAmmoData = 0x0A60,
AttachedStaticComponentMap = 0x11B8,
ScopeType = 0x0E95,
GetCurrentScopeZeroingDistance = 0x059C52C4,
GetScopeMeshRelativePosition = 0x059C7660,

//CharacterMovement
CharacterMovement = 0x0538,
StanceMode = 0x0500,
MovementMode = 0x02D0,
Acceleration = 0x03A8,
MaxAcceleration = 0x0308,
LastUpdateVelocity = 0x03D0,
PendingLaunchVelocity = 0x054C,

AnimScriptInstance = 0x0C60,
ControlRotation_CP = 0x07FC,
RecoilADSRotation_CP = 0x09FC,
LeanLeftAlpha_CP = 0x0E04,
LeanRightAlpha_CP = 0x0E08,
bIsScoping_CP = 0x0D26,

VehicleRiderComponent = 0x1F80,
SeatIndex = 0x0230,
LastVehiclePawn = 0x0270,
ReplicatedMovement = 0x0080,

ReplicatedSkinParam = 0x1178,
ReplicatedSkinItem = 0x0168,
Equipment = 0x0450,
Items = 0x0470,
InventoryFacade = 0x1BE0,

//ATslProjectile
ProjectileParticle = 0x0520,
ExplodeState = 0x05D0,
ProjectileConfig = 0x0630,
TimeTillExplosion = 0x079C,
TickStartVelocity = 0x08A0,

//UTslVehicleCommonComponent
VehicleCommonComponent_Floating = 0x04C0,
VehicleCommonComponent_Wheeled = 0x0BF8,
VehicleHealth = 0x02D8,
VehicleHealthMax = 0x02DC,
VehicleFuel = 0x02E0,
VehicleFuelMax = 0x02E4,
