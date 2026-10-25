modded class ModItemRegisterCallbacks
{
	 
	override void RegisterOneHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    { 
		super.RegisterOneHanded( pType, pBehavior );
		pType.AddItemInHandsProfileIK("dp_deploy_buildings_kit", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, 							"dz/anims/anm/player/ik/gear/fence_kit_folded.anm");
		pType.AddItemInHandsProfileIK("dp_metal_door_Kit", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, 								"dz/anims/anm/player/ik/gear/Rags.anm");
		pType.AddItemInHandsProfileIK("dp_armor_wall_Kit", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, 								"dz/anims/anm/player/ik/gear/Rags.anm");
	};
	
	override void RegisterHeavy(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterHeavy( pType, pBehavior );
		
		pType.AddItemInHandsProfileIK("dp_md_door", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,				 		"dz/anims/anm/player/ik/heavy/metal_sheet.anm");
		pType.AddItemInHandsProfileIK("dp_doorpost", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, 						"dz/anims/anm/player/ik/heavy/wooden_log.anm");
		pType.AddItemInHandsProfileIK("dp_aw_skeleton", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, 						"dz/anims/anm/player/ik/heavy/wooden_log.anm");
		pType.AddItemInHandsProfileIK("dp_aw_wall_sheets", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,				 		"dz/anims/anm/player/ik/heavy/metal_sheet.anm");

    }
	
	override void RegisterTwoHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
	{
		super.RegisterTwoHanded( pType, pBehavior )	
		pType.AddItemInHandsProfileIK("dp_mailbox", "dz/anims/workspaces/player/player_main/player_main_2h.asi", pBehavior,								"dz/anims/anm/player/ik/two_handed/spotlight.anm");
	};	
};
