modded class ModItemRegisterCallbacks
{
	override void RegisterPistol( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterPistol( pType, pBehavior );

 		pType.AddItemInHandsProfileIK("Canik_TP9SF",		"dz/anims/workspaces/player/player_main/weapons/player_main_glock.asi",			pBehavior, "dz/anims/anm/player/ik/weapons/Glock19.anm", "dz/anims/anm/player/reloads/Glock/w_Glock19_states.anm");
 		pType.AddItemInHandsProfileIK("Canik_TP9SF_Elite",		"dz/anims/workspaces/player/player_main/weapons/player_main_glock.asi",			pBehavior, "dz/anims/anm/player/ik/weapons/Glock19.anm", "dz/anims/anm/player/reloads/Glock/w_Glock19_states.anm");
	}
	override void RegisterOneHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterOneHanded( pType, pBehavior );

		pType.AddItemInHandsProfileIK("Mag_Canik_TP9SF_18rnd",					"dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi",		pBehavior,			"dz/anims/anm/player/ik/attachments/magazines/magazine_glock19_15rnd.anm");
		pType.AddItemInHandsProfileIK("Mag_Canik_TP9SF_18rnd_Red",					"dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi",		pBehavior,			"dz/anims/anm/player/ik/attachments/magazines/magazine_glock19_15rnd.anm");
		pType.AddItemInHandsProfileIK("Mag_Canik_TP9SF_18rnd_Tan",					"dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi",		pBehavior,			"dz/anims/anm/player/ik/attachments/magazines/magazine_glock19_15rnd.anm");
		pType.AddItemInHandsProfileIK("Mag_Canik_TP9SF_DrumMag_50rnd",					"dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi",		pBehavior,			"dz/anims/anm/player/ik/attachments/magazines/magazine_glock19_15rnd.anm");
		pType.AddItemInHandsProfileIK("Mag_Canik_TP9SF_Elite_18rnd",					"dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi",		pBehavior,			"dz/anims/anm/player/ik/attachments/magazines/magazine_glock19_15rnd.anm");
		pType.AddItemInHandsProfileIK("PistolSuppressor",					"dz/anims/workspaces/player/player_main/player_main_1h.asi",					pBehavior,			"dz/anims/anm/player/ik/attachments/muzzle/suppressor_45acp.anm");
	}
};