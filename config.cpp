class CfgMods
{
	class Canik_TP9SF
	{
		dir = "CanikTP9SF";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "CanikTP9SF 9mm";
		credits = "";
		author = "NamantH";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"CanikTP9SF/scripts/4_World"};
			};
		};
	};
};
class CfgPatches
{
	class Canik_TP9SF
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoPistol;
class cfgWeapons
{
	class Pistol_Base;
	class Canik_TP9SF_Base: Pistol_Base
	{
		scope=0;
		weight=1000;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,10,250,4,10};
		WeaponLength=0.20999999;
		ShoulderDistance=0.40000001;
		barrelArmor=1.5;
		chamberSize=1;
		chamberedRound="";
		magazines[]=
		{
			"Mag_Canik_TP9SF_18Rnd",
			"Mag_Canik_TP9SF_18rnd_Red",
			"Mag_Canik_TP9SF_18rnd_Tan",
			"Mag_Canik_TP9SF_DrumMag_50rnd"
		};
		chamberableFrom[]=
		{
			"Ammo_9x19"
		};
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.1,1.1,0.80000001};
		class NoiseShoot
		{
			strength=40;
			type="shot";
		};
		modes[]=
		{
			"SemiAuto",
			"Burst"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Glock19_Shot_SoundSet",
				"Glock19_Tail_SoundSet",
				"Glock19_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Glock19_silencerPro_SoundSet",
					"Glock19_silencerTail_SoundSet",
					"Glock19_silencerInteriorTail_SoundSet"
				}
			};
			reloadTime=0.08;
			recoil="recoil_Glock";
			recoilProne="recoil_Glock_prone";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[]=
			{
				"Glock19_Shot_SoundSet",
				"Glock19_Tail_SoundSet",
				"Glock19_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Glock19_silencerPro_SoundSet",
					"Glock19_silencerTail_SoundSet",
					"Glock19_silencerInteriorTail_SoundSet"
				}
			};
			burst=3;
			reloadTime=0.08;
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoPistol
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		weaponStateAnim="dz\anims\anm\player\reloads\Glock\w_Glock19_states.anm";
	};
	class Canik_TP9SF: Canik_TP9SF_Base
	{
		scope=2;
		displayName="Canik TP9SF";
		descriptionShort="The TP9SF is a 9mm striker-fired pistol that has successfully passed 60,000 round torture tests without any failures, while still maintaining NATO standards for accuracy. With superior durability, reliability, and unparalleled trigger, the TP9SF pistol represents an ideal option for both competition or self defense minded users.";
		model="\CanikTP9SF\models\Canik_TP9SF.p3d";
		hiddenSelections[] = {"Frame","Slide"};
		hiddenSelectionsTextures[]=
		{
			"\CanikTP9SF\data\CanikTP9SF_Frame_co.paa",
			"\CanikTP9SF\data\CanikTP9SF_Slide_co.paa"
		};
		attachments[]=
		{
			"pistolOptics",
			"pistolFlashlight",
			"pistolMuzzle"
		};
		itemSize[]={3,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame_damage.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame_damage.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame_destruct.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=8;
				shotsToStartOverheating=8;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,1};
					positionOffset[]={0,0,0};
					onlyWithinRainLimits[]={0,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
				};
			};
		};
	};
	class Canik_TP9SF_Black: Canik_TP9SF {
		scope=2;
		displayName="Canik TP9SF";
		descriptionShort="The TP9SF is a 9mm striker-fired pistol that has successfully passed 60,000 round torture tests without any failures, while still maintaining NATO standards for accuracy. With superior durability, reliability, and unparalleled trigger, the TP9SF pistol represents an ideal option for both competition or self defense minded users.";
		model="\CanikTP9SF\models\Canik_TP9SF.p3d";
		hiddenSelections[] = {"Frame","Slide"};
		hiddenSelectionsTextures[]=
		{
			"\CanikTP9SF\data\CanikTP9SF_Frame_Black_co.paa",
			"\CanikTP9SF\data\CanikTP9SF_Slide_Black_co.paa"
		};
	};
	class Canik_TP9SF_White: Canik_TP9SF {
		scope=2;
		displayName="Canik TP9SF";
		descriptionShort="The TP9SF is a 9mm striker-fired pistol that has successfully passed 60,000 round torture tests without any failures, while still maintaining NATO standards for accuracy. With superior durability, reliability, and unparalleled trigger, the TP9SF pistol represents an ideal option for both competition or self defense minded users.";
		model="\CanikTP9SF\models\Canik_TP9SF.p3d";
		hiddenSelections[] = {"Frame","Slide"};
		hiddenSelectionsTextures[]=
		{
			"\CanikTP9SF\data\CanikTP9SF_Frame_Black_co.paa",
			"\CanikTP9SF\data\CanikTP9SF_Slide_White_co.paa"
		};
	};
	class Canik_TP9SF_Chrome: Canik_TP9SF {
		scope=2;
		displayName="Canik TP9SF";
		descriptionShort="The TP9SF is a 9mm striker-fired pistol that has successfully passed 60,000 round torture tests without any failures, while still maintaining NATO standards for accuracy. With superior durability, reliability, and unparalleled trigger, the TP9SF pistol represents an ideal option for both competition or self defense minded users.";
		model="\CanikTP9SF\models\Canik_TP9SF.p3d";
		hiddenSelections[] = {"Frame","Slide"};
		hiddenSelectionsTextures[]=
		{
			"\CanikTP9SF\data\CanikTP9SF_Frame_Black_co.paa",
			"\CanikTP9SF\data\CanikTP9SF_Slide_Chrome_co.paa"
		};
		hiddenSelectionsMaterials[] = {
			"CanikTP9SF\data\CanikTP9SF_Frame.rvmat",
			"CanikTP9SF\data\CanikTP9SF_Slide_Chrome.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_Chrome.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_Gold.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame_damage.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_Gold_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame_damage.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_Gold_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame_destruct.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_Gold_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Canik_TP9SF_BlackChrome: Canik_TP9SF {
		scope=2;
		displayName="Canik TP9SF";
		descriptionShort="The TP9SF is a 9mm striker-fired pistol that has successfully passed 60,000 round torture tests without any failures, while still maintaining NATO standards for accuracy. With superior durability, reliability, and unparalleled trigger, the TP9SF pistol represents an ideal option for both competition or self defense minded users.";
		model="\CanikTP9SF\models\Canik_TP9SF.p3d";
		hiddenSelections[] = {"Frame","Slide"};
		hiddenSelectionsTextures[]=
		{
			"\CanikTP9SF\data\CanikTP9SF_Frame_Black_co.paa",
			"\CanikTP9SF\data\CanikTP9SF_Slide_Black_co.paa"
		};
		hiddenSelectionsMaterials[] = {
			"CanikTP9SF\data\CanikTP9SF_Frame.rvmat",
			"CanikTP9SF\data\CanikTP9SF_Slide_BlackChrome.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_BlackChrome.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_Gold.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame_damage.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_Gold_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame_damage.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_Gold_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame_destruct.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_Gold_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Canik_TP9SF_Gold: Canik_TP9SF {
		scope=2;
		displayName="Canik TP9SF";
		descriptionShort="The TP9SF is a 9mm striker-fired pistol that has successfully passed 60,000 round torture tests without any failures, while still maintaining NATO standards for accuracy. With superior durability, reliability, and unparalleled trigger, the TP9SF pistol represents an ideal option for both competition or self defense minded users.";
		model="\CanikTP9SF\models\Canik_TP9SF.p3d";
		hiddenSelections[] = {"Frame","Slide"};
		hiddenSelectionsTextures[]=
		{
			"\CanikTP9SF\data\CanikTP9SF_Frame_Black_co.paa",
			"\CanikTP9SF\data\CanikTP9SF_Slide_Gold_co.paa"
		};
		hiddenSelectionsMaterials[] = {
			"CanikTP9SF\data\CanikTP9SF_Frame.rvmat",
			"CanikTP9SF\data\CanikTP9SF_Slide_Gold.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_Gold.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_Gold.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame_damage.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_Gold_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame_damage.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_Gold_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame_destruct.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_Gold_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Canik_TP9SF_NCA: Canik_TP9SF {
		scope=2;
		displayName="Canik TP9SF";
		descriptionShort="The TP9SF is a 9mm striker-fired pistol that has successfully passed 60,000 round torture tests without any failures, while still maintaining NATO standards for accuracy. With superior durability, reliability, and unparalleled trigger, the TP9SF pistol represents an ideal option for both competition or self defense minded users.";
		model="\CanikTP9SF\models\Canik_TP9SF.p3d";
		hiddenSelections[] = {"Frame","Slide"};
		hiddenSelectionsTextures[]=
		{
			"\CanikTP9SF\data\CanikTP9SF_Frame_NCA_co.paa",
			"\CanikTP9SF\data\CanikTP9SF_Slide_White_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame_NCA.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame_NCA.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame_NCA_damage.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame_NCA_damage.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Frame_NCA_destruct.rvmat",
								"CanikTP9SF\data\CanikTP9SF_Slide_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgMagazines
{
	class Mag_Glock_15Rnd;

	class Mag_Canik_TP9SF_18rnd: Mag_Glock_15Rnd
	{
		scope=2;
		displayName="Canik TP9SF 18rnd Magazine";
		descriptionShort="The 18 round magazine for the Canik TP9SF.";
		model="\CanikTP9SF\models\Mag_Canik_TP9SF.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]=
		{
			"\CanikTP9SF\data\CanikTP9SF_Mag_co.paa"
		};
		count=18;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Mag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Mag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Mag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"CanikTP9SF\data\CanikTP9SF_Mag_destruct.rvmat"
							}
						}
					};
				};
			};
		};	
	};
	class Mag_Canik_TP9SF_18rnd_Red: Mag_Canik_TP9SF_18rnd
	{
		scope=2;
		displayName="Canik TP9SF 18rnd Magazine";
		descriptionShort="The 18 round magazine for the Canik TP9SF.";
		model="\CanikTP9SF\models\Mag_Canik_TP9SF.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]=
		{
			"\CanikTP9SF\data\CanikTP9SF_Mag_Red_co.paa"
		};
	};
	class Mag_Canik_TP9SF_18rnd_Tan: Mag_Canik_TP9SF_18rnd
	{
		scope=2;
		displayName="Canik TP9SF 18rnd Magazine";
		descriptionShort="The 18 round magazine for the Canik TP9SF.";
		model="\CanikTP9SF\models\Mag_Canik_TP9SF.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]=
		{
			"\CanikTP9SF\data\CanikTP9SF_Mag_Tan_co.paa"
		};
	};
	class Mag_Canik_TP9SF_DrumMag_50rnd: Mag_Canik_TP9SF_18rnd
	{
		scope=2;
		displayName="Canik TP9SF 50rnd Drum Magazine";
		descriptionShort="The 18 round magazine for the Canik TP9SF.";
		model="\CanikTP9SF\models\Mag_Canik_Tp9SF_50Drum.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]=
		{
			"\CanikTP9SF\data\CanikTP9SF_DrumMag_co.paa"
		};
		hiddenSelectionsMaterials[] = {
			"CanikTP9SF\data\CanikTP9SF_DrumMag.rvmat"
		};
		itemSize[]={2,3};
		count=50;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"CanikTP9SF\data\CanikTP9SF_DrumMag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"CanikTP9SF\data\CanikTP9SF_DrumMag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"CanikTP9SF\data\CanikTP9SF_DrumMag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"CanikTP9SF\data\CanikTP9SF_DrumMag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"CanikTP9SF\data\CanikTP9SF_DrumMag_destruct.rvmat"
							}
						}
					};
				};
			};
		};	
	};
};

class CfgNonAIVehicles
{

	class ProxyAttachment;
	class ProxyMag_Canik_TP9SF: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="\CanikTP9SF\models\Mag_Canik_TP9SF.p3d";
	};
	class ProxyMag_Canik_Tp9SF_50Drum: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="\CanikTP9SF\models\Mag_Canik_Tp9SF_50Drum.p3d";
	};
	class ProxyCanik_TP9SF: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model="\CanikTP9SF\models\Canik_TP9SF.p3d";
	};
};