/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Retirer la Tenue", 0, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Polo Rayé", 100, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Polo Rouge / Blanc", 100, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Polo Bleu", 100, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Polo Griffures", 100, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Polo Tricolore", 100, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "The Farmer", 650, { "", "", -1 } },
            { "U_NikosAgedBody", "The Affair", 5000, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "The Adventurer", 735, { "", "", -1 } },
            { "U_OrestesBody", "The Surfer", 1100, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunter", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "The Mechanic", 2500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Retirer le Chapeau", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Bandana Camo", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Bandana Surfeur", 130, { "", "", -1 } },
            { "H_Cap_grn_BI", " Casquette Bohemia", 150, { "", "", -1 } },
            { "H_Cap_grn", "Casquette Verte", 150, { "", "", -1 } },
            { "H_Cap_oli", "Casquette Olive", 150, { "", "", -1 } },
            { "H_Cap_blu", "Casquette Bleue", 150, { "", "", -1 } },
            { "H_Cap_red", "Casquette Rouge", 150, { "", "", -1 } },
            { "H_Cap_tan", "Casquette Beige", 150, { "", "", -1 } },
            { "H_StrawHat", "Chapeau Tressé", 225, { "", "", -1 } },
            { "H_Hat_brown", "Chapeau Marron", 276, { "", "", -1 } },
            { "H_Hat_grey", "Chapeau Gris", 280, { "", "", -1 } },
            { "H_Hat_checker", "Chapeau Habillé", 340, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Retirer les Lunettes", 0, { "", "", -1 } },
            { "G_Shades_Black", "Lun. soleil (Noires)", 20, { "", "", -1 } },
            { "G_Shades_Blue", "Lun. soleil (Bleues)", 20, { "", "", -1 } },
            { "G_Shades_Green", "Lun. soleil (Jaunes)", 20, { "", "", -1 } },
            { "G_Shades_Red", "Lun. soleil (Rouges)", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "L. soleil sport (Vulcan)", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "L. soleil sport (Ombre)", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "L. soleil sport (Rayé)", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "L. soleil sport (Jaunes)", 25, { "", "", -1 } },
            { "G_Sport_Greenblack", "L. soleil sport (Vertes)", 25, { "", "", -1 } },
            { "G_Sport_Red", "L. soleil sport (Rouges)", 25, { "", "", -1 } },
            { "G_Squares", "Lun. Carrées", 50, { "", "", -1 } },
            { "G_Aviator", "Lun. d'Aviateur", 100, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Retirer le Gilet", 0, { "", "", -1 } },
			{ "V_Rangemaster_belt", "Ceinture d'Intendant", 1500, { "", "", -1 } },
            { "V_BandollierB_blk", "Lanière Tactique", 2500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Retirer le Sac à Dos", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "Assaut (Kaki)", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "Assaut (Brun)", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "Assaut (Vert)", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "Assaut (Beige)", 2000, { "", "", -1 } },
            { "B_Kitbag_sgg", "Terrain (Vert)", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "Terrain (Beige)", 3500, { "", "", -1 } },
            { "B_FieldPack_ocamo", "Léger (Sable)", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "Léger (Toundra)", 5000, { "", "", -1 } },
            { "B_Bergen_sgg", "Tactique (Beige)", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "Tactique (Vert)", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "Tactique (Gris)", 6500, { "", "", -1 } },
            { "B_Carryall_ocamo", "Multifonctions (Sable)", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "Multifonctions (Toundra)", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "Multifonctions (Olive)", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "Multifonctions (Marron)", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "Multifonctions (Beige)", 7500, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Retirer l'Uniforme", 0, { "", "", -1 } },
            { "U_I_CombatUniform_shortsleeve", "Treilli de Combat", 550, { "life_coplevel", "SCALAR", 1 } },
            { "U_O_FullGhillie_lsh", "Ghillie Complète Verte", 50000, { "life_coplevel", "SCALAR", 6 } },
            { "U_O_FullGhillie_sard", "Ghillie Complète Sèche", 50000, { "life_coplevel", "SCALAR", 6 } },
            { "U_O_FullGhillie_ard", "Ghillie Complète Aride", 50000, { "life_coplevel", "SCALAR", 6 } },
            { "U_B_CTRG_1", "Treilli d'Intervention", 550, { "life_coplevel", "SCALAR", 4 } },
            { "U_I_CombatUniform", "Tenue de sécurité", 550, { "life_coplevel", "SCALAR", 1 } },
            { "U_I_CombatUniform_tshirt", "Président", 550, { "life_coplevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Retirer le Chapeau", 0, { "", "", -1 } },
            { "H_Cap_police", "Casquette d'Intendant", 25, { "life_coplevel", "SCALAR", 1 } },
                        { "NONE", "------- COMBAT -------", 0, { "life_coplevel", "SCALAR", 1 } },
            { "H_HelmetB", "Casque Classique", 25, { "life_coplevel", "SCALAR", 1 } },
            { "H_HelmetB_light", "Casque Léger", 25, { "life_coplevel", "SCALAR", 1 } },
            { "H_HelmetSpecB", "Casque de Specialiste", 25, { "life_coplevel", "SCALAR", 1 } },
                        { "NONE", "---- INTERVENTION ----", 0, { "life_coplevel", "SCALAR", 4 } },
            { "H_HelmetB_black", "Casque Classique", 25, { "life_coplevel", "SCALAR", 4 } },
            { "H_HelmetB_light_black", "Casque Léger", 25, { "life_coplevel", "SCALAR", 4 } },
            { "H_HelmetSpecB_blk", "Casque de Specialiste", 25, { "life_coplevel", "SCALAR", 4 } },
                        { "NONE", "------- BERETS -------", 0, { "life_coplevel", "SCALAR", 1 } },
            { "H_Beret_blk", "Beret Classique", 25, { "life_coplevel", "SCALAR", 1 } },
            { "H_Beret_02", "Beret de Sous-Officier", 25, { "life_coplevel", "SCALAR", 3 } },
            { "H_Beret_Colonel", "Beret d'Officier", 25, { "life_coplevel", "SCALAR", 5 } }
                };
        goggles[] = {
            { "NONE", "Retirer les Lunettes", 0, { "", "", -1 } },
            { "G_Shades_Black", "Lun. soleil (Noires)", 50, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_Blackred", "L. soleil sport (Vulcan)", 75, { "life_coplevel", "SCALAR", 1 } },
            { "G_Aviator", "Lun. d'Aviateur", 100, { "life_coplevel", "SCALAR", 1 } },
            { "G_Combat", "Masque de Combat", 150, { "life_coplevel", "SCALAR", 1 } },
            { "G_Balaclava_oli", "Cagoule (Khaki)", 200, { "life_coplevel", "SCALAR", 1 } },
            { "G_Balaclava_blk", "Cagoule (Noire)", 200, { "life_coplevel", "SCALAR", 1 } },
            { "G_Balaclava_combat", "Cagoule de Combat", 200, { "life_coplevel", "SCALAR", 4 } }
        };
        vests[] = {
            { "NONE", "Retirer le Gilet", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "Ceinture d'Intendant", 800, { "life_coplevel", "SCALAR", 1 } },
            { "NONE", "------- COMBAT -------", 0, { "life_coplevel", "SCALAR", 1 } },
            { "V_PlateCarrier2_rgr_noflag_F", "Gilet Modulable", 800, { "life_coplevel", "SCALAR", 1 } },
            { "NONE", "---- INTERVENTION ----", 0, { "life_coplevel", "SCALAR", 4 } },
            { "V_PlateCarrier2_blk", "Gilet Modulable", 800, { "life_coplevel", "SCALAR", 4 } },
            { "V_PlateCarrier1_blk", "Gilet Léger", 800, { "life_coplevel", "SCALAR", 4 } }
        };
        backpacks[] = {
            { "NONE", "Retirer le Sac à Dos", 0, { "", "", -1 } },
            { "B_Carryall_cbr", "", 3500, { "life_coplevel", "SCALAR", 1 } },
            { "B_Bergen_mcamo_F", "Bergen (OTAN)", 10000, { "life_coplevel", "SCALAR", 4 } },
            { "B_UAV_01_F", "SAc a dos drone", 50000, { "life_coplevel", "SCALAR", 4 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Retirer la Combinaison", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "Combinaison de Plongée", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Aucun Chapeau", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Retirer le Masque", 0, { "", "", -1 } },
            { "G_Diving", "Masque de Plongée", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Retirer le Respirateur", 0, { "", "", -1 } },
            { "V_RebreatherB", "Respirateur Aquatique", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Aucun Sac à Dos", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Aucun Uniforme", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Aucun Chapeau", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Aucunes Lunettes", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Aucune Veste", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Aucun Sac à Dos", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
        	{ "NONE", "Retirer la Combinaison", 0, { "", "", -1 } },
			{ "NONE", "--------------- CSAT ---------------", 0, { "", "", -1 } },
			{ "U_O_OfficerUniform_ocamo", "Tenue d'Officier", 45000, { "", "", -1 } },
            { "U_O_CombatUniform_ocamo", "Treilli de Combat", 15610, { "", "", -1 } },
			{ "U_O_V_Soldier_Viper_hex_F", "Combi. d'Intervention", 20000, { "", "", -1 } },
            { "U_O_GhillieSuit", "Treilli Ghillie", 7500, { "", "", -1 } },
			{ "U_O_T_Officer_F", "Tenue d'Officier Jungle", 20000, { "", "", -1 } },
			{ "U_O_T_Soldier_F", "Treilli de Combat Jungle", 20000, { "", "", -1 } },
			{ "U_O_V_Soldier_Viper_F", "Combi. d'Interv. Jungle", 20000, { "", "", -1 } },
			{ "U_O_T_Sniper_F", "Treilli Ghillie Jungle", 20000, { "", "", -1 } },
			{ "U_O_T_FullGhillie_tna_F", "Ghillie Complète Jungle", 20000, { "", "", -1 } },
			{ "U_O_CombatUniform_oucamo", "Treilli de Reco.", 10000, { "", "", -1 } },
            { "U_O_PilotCoveralls", "Combinaison de Pilote", 50000, { "", "", -1 } },
			{ "NONE", "---------------- AAF ----------------", 0, { "", "", -1 } },
			{ "U_I_OfficerUniform", "Tenue d'Officier", 45000, { "", "", -1 } },
            { "U_I_CombatUniform", "Treilli Complet", 15340, { "", "", -1 } },
            { "U_I_CombatUniform_shortsleeve", "Treilli Retroussé", 17500, { "", "", -1 } },
            { "U_I_GhillieSuit", "Treilli Ghillie", 11500, { "", "", -1 } },
            { "U_I_HeliPilotCoveralls", "Combinaison de Pilote", 7500, { "", "", -1 } },
			{ "NONE", "--------------- CTRG ---------------", 0, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_1_F", "Treilli Complet", 10000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_3_F", "Treilli Retroussé", 10000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_2_F", "Treilli T-Shirt", 10000, { "", "", -1 } },
            { "U_B_CTRG_1", "Uniforme Complet", 17500, { "", "", -1 } },
            { "U_B_CTRG_2", "Uniforme T-Shirt", 15610, { "", "", -1 } },
			{ "NONE", "------------ GUERILLA ------------", 0, { "", "", -1 } },
            { "U_IG_leader", "Leader de Guerilla", 15340, { "", "", -1 } },
            { "U_OG_Guerilla1_1", "Chef de Guerilla", 15340, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "Gros Bras de Guérilla", 9000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_2_F", "Bandit de Guérilla n°1", 10000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_3_F", "Bandit de Guérilla n°2", 10000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_4_F", "Bandit de Guérilla n°3", 10000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_5_F", "Bandit de Guérilla n°4", 10000, { "", "", -1 } },
			{ "NONE", "------------- REBELLE -------------", 0, { "", "", -1 } },
			{ "U_I_C_Soldier_Camo_F", "Leader Rebelle", 20000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_1_F", "Rebelle n°1", 20000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_4_F", "Rebelle n°2", 20000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_5_F", "Rebelle n°3", 20000, { "", "", -1 } },
			{ "NONE", "---------------- TNA ----------------", 0, { "", "", -1 } },
			{ "U_B_T_Soldier_F", "Treilli Complet", 50000, { "", "", -1 } },
			{ "U_B_T_Soldier_AR_F", "Treilli T-Shirt", 50000, { "", "", -1 } },
			{ "U_B_T_Soldier_SL_F", "Treilli Retroussé", 50000, { "", "", -1 } },
			{ "U_B_T_Sniper_F", "Treilli Ghilie", 80000, { "", "", -1 } },
			{ "U_B_T_FullGhillie_tna_F", "Ghillie Complète", 120000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Retirer le Casque", 0, { "", "", -1 } },
			{ "NONE", "--------------- CSAT ---------------", 0, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "Casque de Combat", 3000, { "", "", -1 } },
            { "H_HelmetLeaderO_ocamo", "Casque Avance", 850, { "", "", -1 } },
			{ "H_MilCap_oucamo", "Képi Désert", 2000, { "", "", -1 } },
			{ "NONE", "---------------- AAF ----------------", 0, { "", "", -1 } },
			{ "H_HelmetIA", "Casque de Combat", 32500, { "", "", -1 } },
            { "H_PilotHelmetHeli_I", "Casque de Pilote Héli.", 800, { "", "", -1 } },
            { "H_Booniehat_indp", "Chapeau de Brousse", 800, { "", "", -1 } },
            { "H_Beret_blk", "Béret d'Officier", 1200, { "", "", -1 } },
			{ "NONE", "--------------- CTRG ---------------", 0, { "", "", -1 } },
            { "H_HelmetB_snakeskin", "Casque de Combat", 1200, { "", "", -1 } },
            { "H_HelmetB_light_snakeskin", "Casque Léger", 850, { "", "", -1 } },
            { "H_Booniehat_grn", "Chapeau de Brousse", 850, { "", "", -1 } },
			{ "NONE", "------------ GUERILLA ------------", 0, { "", "", -1 } },
            { "H_ShemagOpen_tan", "Shemag Marron", 2500, { "", "", -1 } },
            { "H_ShemagOpen_khk", "Shemag Blanc", 2500, { "", "", -1 } },
			{ "H_Shemag_olive", "Shemag Khaki", 2000, { "", "", -1 } },
			{ "NONE", "------------- REBELLE -------------", 0, { "", "", -1 } },
            { "H_Beret_blk", "Béret de Leader", 1200, { "", "", -1 } },
			{ "H_Bandanna_camo", "Bandanna Terrain", 1500, { "", "", -1 } },
			{ "NONE", "---------------- TNA ----------------", 0, { "", "", -1 } },
			{ "H_HelmetB_tna_F", "Casque de Combat", 9500, { "", "", -1 } },
			{ "H_HelmetB_Enh_tna_F", "Casque Tactique", 37500, { "", "", -1 } },
			{ "H_HelmetB_Light_tna_F", "Casque Léger", 39500, { "", "", -1 } },
			{ "H_MilCap_tna_F", "Képi de Jungle", 4500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Retirer les Lunettes", 0, { "", "", -1 } },
            { "G_Shades_Black", "Lun. soleil (Noires)", 50, { "", "", -1 } },
            { "G_Shades_Blue", "Lun. soleil (Bleues)", 50, { "", "", -1 } },
            { "G_Shades_Green", "Lun. soleil (Jaunes)", 50, { "", "", -1 } },
            { "G_Shades_Red", "Lun. soleil (Rouges)", 50, { "", "", -1 } },
            { "G_Sport_Blackred", "L. soleil sport (Vulcan)", 75, { "", "", -1 } },
            { "G_Sport_BlackWhite", "L. soleil sport (Ombre)", 75, { "", "", -1 } },
            { "G_Sport_Checkered", "L. soleil sport (Rayé)", 75, { "", "", -1 } },
            { "G_Sport_Blackyellow", "L. soleil sport (Jaunes)", 75, { "", "", -1 } },
            { "G_Sport_Greenblack", "L. soleil sport (Vertes)", 75, { "", "", -1 } },
            { "G_Sport_Red", "L. soleil sport (Rouges)", 75, { "", "", -1 } },
            { "G_Squares", "Lun. Carrées", 25, { "", "", -1 } },
            { "G_Aviator", "Lun. d'Aviateur", 100, { "", "", -1 } },
            { "G_Lowprofile", "Lunettes Balistiques", 125, { "", "", -1 } },
            { "G_Combat", "Masque de Combat", 150, { "", "", -1 } },
            { "G_Balaclava_oli", "Cagoule (Khaki)", 200, { "", "", -1 } },
            { "G_Balaclava_blk", "Cagoule (Noire)", 200, { "", "", -1 } },
            { "G_Balaclava_combat", "Cagoule de Combat", 200, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "Cagoule Balistique", 200, { "", "", -1 } },
            { "G_Bandanna_blk", "Bandanna (Noir)", 200, { "", "", -1 } },
            { "G_Bandanna_tan", "Bandanna (Beige)", 200, { "", "", -1 } },
            { "G_Bandanna_oli", "Bandanna (Khaki)", 200, { "", "", -1 } },
            { "G_Bandanna_khk", "Bandanna (Tan)", 200, { "", "", -1 } },
            { "G_Bandanna_beast", "Bandanna (Fauve)", 250, { "", "", -1 } },
            { "G_Bandanna_aviator", "Bandanna Aviateur", 300, { "", "", -1 } },
            { "G_Bandanna_shades", "Bandanna Soleil", 250, { "", "", -1 } },
            { "G_Bandanna_sport", "Bandanna Sport", 275, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Retirer le Gilet", 0, { "", "", -1 } },
			{ "NONE", "--------------- CSAT ---------------", 0, { "", "", -1 } },
            { "V_Chestrig_khk", "Gilet Ceinture", 4500, { "", "", -1 } },
			{ "NONE", "---------------- AAF ----------------", 0, { "", "", -1 } },
            { "V_PlateCarrierIA1_dgtl", "Gilet Léger", 7500, { "", "", -1 } },
            { "V_PlateCarrierIA2_dgtl", "Gilet Modulable", 12500, { "", "", -1 } }, 
			{ "NONE", "--------------- CTRG ---------------", 0, { "", "", -1 } },
            { "V_PlateCarrierL_CTRG", "Gilet Léger", 4500, { "", "", -1 } },
            { "V_PlateCarrierH_CTRG", "Gilet Modulable", 4500, { "", "", -1 } },
			{ "NONE", "------------ GUERILLA ------------", 0, { "", "", -1 } },
			{ "V_TacVest_khk", "Gilet Pare-Balles (Brun)", 12500, { "", "", -1 } },
			{ "V_TacVest_brn", "Gilet Pare-Balles (Beige)", 12500, { "", "", -1 } },
			{ "NONE", "------------- REBELLE -------------", 0, { "", "", -1 } },
			{ "V_TacVest_oli", "Gilet Pare-Balles (Khaki)", 12500, { "", "", -1 } },
			{ "V_TacVest_camo", "Gilet Pare-Balles (Camo)", 12500, { "", "", -1 } },
			{ "NONE", "---------------- TNA ----------------", 0, { "", "", -1 } },
			{ "V_PlateCarrier1_tna_F", "Gilet Léger", 7500, { "", "", -1 } },
			{ "V_PlateCarrier2_tna_F", "Gilet Modulable", 7500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Retirer le Sac à Dos", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "Assaut (Kaki)", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "Assaut (Brun)", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "Assaut (Vert)", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "Assaut (Beige)", 2000, { "", "", -1 } },
			{ "B_AssaultPack_mcamo", "Assaut (OTAN)", 2000, { "", "", -1 } },
			{ "B_AssaultPack_dgtl", "Assaut (AAF)", 2000, { "", "", -1 } },
            { "B_Kitbag_sgg", "Terrain (Vert)", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "Terrain (Beige)", 3500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "Terrain (OTAN)", 3500, { "", "", -1 } },
            { "B_FieldPack_ocamo", "Léger (Sable)", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "Léger (Toundra)", 5000, { "", "", -1 } },
			{ "B_FieldPack_ghex_F", "Léger (CSATJ)", 7500, { "","",-1}  },
            { "B_Bergen_sgg", "Tactique (Beige)", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "Tactique (Vert)", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "Tactique (Gris)", 6500, { "", "", -1 } },
			{ "B_Bergen_mcamo", "Tactique (OTAN)", 6500, { "", "", -1 } },
            { "B_Carryall_ocamo", "Multifonctions (Sable)", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "Multifonctions (Toundra)", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "Multifonctions (Olive)", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "Multifonctions (Marron)", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "Multifonctions (Beige)", 7500, { "", "", -1 } },
			{ "B_Bergen_mcamo", "Tactique (OTAN)", 6500, { "", "", -1 } },
			{ "B_Carryall_mcamo", "Multifonctions (OTAN)", 7500, { "", "", -1 } },
			{ "B_Carryall_ghex_F", "Multifonctions (CSATJ)", 7500, { "","",-1} },
			{ "B_ViperLightHarness_hex_F", "Viper Léger (Désert)", 7500, { "","",-1} },
			{ "B_ViperLightHarness_oli_F", "Viper Léger (Olive)", 7500, { "","",-1} },
			{ "B_ViperLightHarness_khk_F", "Viper Léger (Khaki)", 7500, { "","",-1} },
			{ "B_ViperLightHarness_ghex_F", "Viper Léger (CSATJ)", 7500, { "","",-1} },
			{ "B_ViperHarness_hex_F", "Viper (Désert)", 7500, { "","",-1} },
			{ "B_ViperHarness_oli_F", "Viper (Olive)", 7500, { "","",-1} },
			{ "B_ViperHarness_khk_F", "Viper (Khaki)", 7500, { "","",-1} },
			{ "B_ViperHarness_ghex_F", "Viper (CSATJ)", 7500, { "","",-1} },
			{ "B_Bergen_mcamo_F", "Bergen (OTAN)", 10000, { "","",-1} },
			{ "B_Bergen_hex_F", "Bergen (CSAT)", 10000, { "","",-1} },
			{ "B_Bergen_dgtl_F", "Bergen (AAF)", 10000, { "","",-1} },
			{ "B_Bergen_tna_F", "Bergen (TNA)", 10000, { "","",-1} }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Retirer la Tenue", 0, { "", "", -1 } },
            { "U_Rangemaster", "Uniforme SAMU", 50, { "", "", -1 } },
            { "U_B_CTRG_1", "Tenue Medecin", 50,  { "life_mediclevel", "SCALAR", 1 } }
            
        };
        headgear[] = {
            { "NONE", "Retirer la Casquette", 0, { "", "", -1 } },
            { "H_Cap_blu", "Casquette du SAMU", 10, { "", "", -1 } },
			{ "H_MilCap_gry", "Kapi du SAMU", 100, { "life_mediclevel", "SCALAR", -1 } }
        };
        goggles[] = {
            { "NONE", "Retirer les Lunettes", 0, { "", "", -1 } },
            { "G_Shades_Blue", "Lunettes du SAMU", 10, { "", "", -1 } },
			{ "G_Aviator", "Lunettes d'Aviateur", 100, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Retirer la Veste", 0, { "", "", -1 } },
			{ "V_TacVest_blk", "Gilet du SAMU", 5000, { "", "", -1 } },
			{ "V_RebreatherB", "Respirateur Aquatique", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Retirer le Sac à Dos", 0, { "", "", -1 } },
			{ "B_Carryall_cbr", "Sac à dos du SAMU", 7500, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
        	{ "NONE", "Retirer la Combinaison", 0, { "", "", -1 } },
			{ "NONE", "--------------- CSAT ---------------", 0, { "", "", -1 } },
			{ "U_O_OfficerUniform_ocamo", "Tenue d'Officier", 45000, { "", "", -1 } },
            { "U_O_CombatUniform_ocamo", "Treilli de Combat", 15610, { "", "", -1 } },
			{ "U_O_V_Soldier_Viper_hex_F", "Combi. d'Intervention", 20000, { "", "", -1 } },
            { "U_O_GhillieSuit", "Treilli Ghillie", 7500, { "", "", -1 } },
			{ "U_O_T_Officer_F", "Tenue d'Officier Jungle", 20000, { "", "", -1 } },
			{ "U_O_T_Soldier_F", "Treilli de Combat Jungle", 20000, { "", "", -1 } },
			{ "U_O_V_Soldier_Viper_F", "Combi. d'Interv. Jungle", 20000, { "", "", -1 } },
			{ "U_O_T_Sniper_F", "Treilli Ghillie Jungle", 20000, { "", "", -1 } },
			{ "U_O_T_FullGhillie_tna_F", "Ghillie Complète Jungle", 20000, { "", "", -1 } },
			{ "U_O_CombatUniform_oucamo", "Treilli de Reco.", 10000, { "", "", -1 } },
            { "U_O_PilotCoveralls", "Combinaison de Pilote", 50000, { "", "", -1 } },
			{ "NONE", "---------------- AAF ----------------", 0, { "", "", -1 } },
			{ "U_I_OfficerUniform", "Tenue d'Officier", 45000, { "", "", -1 } },
            { "U_I_CombatUniform", "Treilli Complet", 15340, { "", "", -1 } },
            { "U_I_CombatUniform_shortsleeve", "Treilli Retroussé", 17500, { "", "", -1 } },
            { "U_I_GhillieSuit", "Treilli Ghillie", 11500, { "", "", -1 } },
            { "U_I_HeliPilotCoveralls", "Combinaison de Pilote", 7500, { "", "", -1 } },
			{ "NONE", "--------------- CTRG ---------------", 0, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_1_F", "Treilli Complet", 10000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_3_F", "Treilli Retroussé", 10000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_2_F", "Treilli T-Shirt", 10000, { "", "", -1 } },
            { "U_B_CTRG_1", "Uniforme Complet", 17500, { "", "", -1 } },
            { "U_B_CTRG_2", "Uniforme T-Shirt", 15610, { "", "", -1 } },
			{ "NONE", "------------ GUERILLA ------------", 0, { "", "", -1 } },
            { "U_IG_leader", "Leader de Guerilla", 15340, { "", "", -1 } },
            { "U_OG_Guerilla1_1", "Chef de Guerilla", 15340, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "Gros Bras de Guérilla", 9000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_2_F", "Bandit de Guérilla n°1", 10000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_3_F", "Bandit de Guérilla n°2", 10000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_4_F", "Bandit de Guérilla n°3", 10000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_5_F", "Bandit de Guérilla n°4", 10000, { "", "", -1 } },
			{ "NONE", "------------- REBELLE -------------", 0, { "", "", -1 } },
			{ "U_I_C_Soldier_Camo_F", "Leader Rebelle", 20000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_1_F", "Rebelle n°1", 20000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_4_F", "Rebelle n°2", 20000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_5_F", "Rebelle n°3", 20000, { "", "", -1 } },
			{ "NONE", "---------------- TNA ----------------", 0, { "", "", -1 } },
			{ "U_B_T_Soldier_F", "Treilli Complet", 50000, { "", "", -1 } },
			{ "U_B_T_Soldier_AR_F", "Treilli T-Shirt", 50000, { "", "", -1 } },
			{ "U_B_T_Soldier_SL_F", "Treilli Retroussé", 50000, { "", "", -1 } },
			{ "U_B_T_Sniper_F", "Treilli Ghilie", 80000, { "", "", -1 } },
			{ "U_B_T_FullGhillie_tna_F", "Ghillie Complète", 120000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Retirer le Casque", 0, { "", "", -1 } },
			{ "NONE", "--------------- CSAT ---------------", 0, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "Casque de Combat", 3000, { "", "", -1 } },
            { "H_HelmetLeaderO_ocamo", "Casque Avance", 850, { "", "", -1 } },
			{ "H_MilCap_oucamo", "Képi Désert", 2000, { "", "", -1 } },
			{ "NONE", "---------------- AAF ----------------", 0, { "", "", -1 } },
			{ "H_HelmetIA", "Casque de Combat", 32500, { "", "", -1 } },
            { "H_PilotHelmetHeli_I", "Casque de Pilote Héli.", 800, { "", "", -1 } },
            { "H_Booniehat_indp", "Chapeau de Brousse", 800, { "", "", -1 } },
            { "H_Beret_blk", "Béret d'Officier", 1200, { "", "", -1 } },
			{ "NONE", "--------------- CTRG ---------------", 0, { "", "", -1 } },
            { "H_HelmetB_snakeskin", "Casque de Combat", 1200, { "", "", -1 } },
            { "H_HelmetB_light_snakeskin", "Casque Léger", 850, { "", "", -1 } },
            { "H_Booniehat_grn", "Chapeau de Brousse", 850, { "", "", -1 } },
			{ "NONE", "------------ GUERILLA ------------", 0, { "", "", -1 } },
            { "H_ShemagOpen_tan", "Shemag Marron", 2500, { "", "", -1 } },
            { "H_ShemagOpen_khk", "Shemag Blanc", 2500, { "", "", -1 } },
			{ "H_Shemag_olive", "Shemag Khaki", 2000, { "", "", -1 } },
			{ "NONE", "------------- REBELLE -------------", 0, { "", "", -1 } },
            { "H_Beret_blk", "Béret de Leader", 1200, { "", "", -1 } },
			{ "H_Bandanna_camo", "Bandanna Terrain", 1500, { "", "", -1 } },
			{ "NONE", "---------------- TNA ----------------", 0, { "", "", -1 } },
			{ "H_HelmetB_tna_F", "Casque de Combat", 9500, { "", "", -1 } },
			{ "H_HelmetB_Enh_tna_F", "Casque Tactique", 37500, { "", "", -1 } },
			{ "H_HelmetB_Light_tna_F", "Casque Léger", 39500, { "", "", -1 } },
			{ "H_MilCap_tna_F", "Képi de Jungle", 4500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Retirer les Lunettes", 0, { "", "", -1 } },
            { "G_Shades_Black", "Lun. soleil (Noires)", 50, { "", "", -1 } },
            { "G_Shades_Blue", "Lun. soleil (Bleues)", 50, { "", "", -1 } },
            { "G_Shades_Green", "Lun. soleil (Jaunes)", 50, { "", "", -1 } },
            { "G_Shades_Red", "Lun. soleil (Rouges)", 50, { "", "", -1 } },
            { "G_Sport_Blackred", "L. soleil sport (Vulcan)", 75, { "", "", -1 } },
            { "G_Sport_BlackWhite", "L. soleil sport (Ombre)", 75, { "", "", -1 } },
            { "G_Sport_Checkered", "L. soleil sport (Rayé)", 75, { "", "", -1 } },
            { "G_Sport_Blackyellow", "L. soleil sport (Jaunes)", 75, { "", "", -1 } },
            { "G_Sport_Greenblack", "L. soleil sport (Vertes)", 75, { "", "", -1 } },
            { "G_Sport_Red", "L. soleil sport (Rouges)", 75, { "", "", -1 } },
            { "G_Squares", "Lun. Carrées", 25, { "", "", -1 } },
            { "G_Aviator", "Lun. d'Aviateur", 100, { "", "", -1 } },
            { "G_Lowprofile", "Lunettes Balistiques", 125, { "", "", -1 } },
            { "G_Combat", "Masque de Combat", 150, { "", "", -1 } },
            { "G_Balaclava_oli", "Cagoule (Khaki)", 200, { "", "", -1 } },
            { "G_Balaclava_blk", "Cagoule (Noire)", 200, { "", "", -1 } },
            { "G_Balaclava_combat", "Cagoule de Combat", 200, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "Cagoule Balistique", 200, { "", "", -1 } },
            { "G_Bandanna_blk", "Bandanna (Noir)", 200, { "", "", -1 } },
            { "G_Bandanna_tan", "Bandanna (Beige)", 200, { "", "", -1 } },
            { "G_Bandanna_oli", "Bandanna (Khaki)", 200, { "", "", -1 } },
            { "G_Bandanna_khk", "Bandanna (Tan)", 200, { "", "", -1 } },
            { "G_Bandanna_beast", "Bandanna (Fauve)", 250, { "", "", -1 } },
            { "G_Bandanna_aviator", "Bandanna Aviateur", 300, { "", "", -1 } },
            { "G_Bandanna_shades", "Bandanna Soleil", 250, { "", "", -1 } },
            { "G_Bandanna_sport", "Bandanna Sport", 275, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Retirer le Gilet", 0, { "", "", -1 } },
			{ "NONE", "--------------- CSAT ---------------", 0, { "", "", -1 } },
            { "V_Chestrig_khk", "Gilet Ceinture", 4500, { "", "", -1 } },
			{ "NONE", "---------------- AAF ----------------", 0, { "", "", -1 } },
            { "V_PlateCarrierIA1_dgtl", "Gilet Léger", 7500, { "", "", -1 } },
            { "V_PlateCarrierIA2_dgtl", "Gilet Modulable", 12500, { "", "", -1 } }, 
			{ "NONE", "--------------- CTRG ---------------", 0, { "", "", -1 } },
            { "V_PlateCarrierL_CTRG", "Gilet Léger", 4500, { "", "", -1 } },
            { "V_PlateCarrierH_CTRG", "Gilet Modulable", 4500, { "", "", -1 } },
			{ "NONE", "------------ GUERILLA ------------", 0, { "", "", -1 } },
			{ "V_TacVest_khk", "Gilet Pare-Balles (Brun)", 12500, { "", "", -1 } },
			{ "V_TacVest_brn", "Gilet Pare-Balles (Beige)", 12500, { "", "", -1 } },
			{ "NONE", "------------- REBELLE -------------", 0, { "", "", -1 } },
			{ "V_TacVest_oli", "Gilet Pare-Balles (Khaki)", 12500, { "", "", -1 } },
			{ "V_TacVest_camo", "Gilet Pare-Balles (Camo)", 12500, { "", "", -1 } },
			{ "NONE", "---------------- TNA ----------------", 0, { "", "", -1 } },
			{ "V_PlateCarrier1_tna_F", "Gilet Léger", 7500, { "", "", -1 } },
			{ "V_PlateCarrier2_tna_F", "Gilet Modulable", 7500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Retirer le Sac à Dos", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "Assaut (Kaki)", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "Assaut (Brun)", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "Assaut (Vert)", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "Assaut (Beige)", 2000, { "", "", -1 } },
			{ "B_AssaultPack_mcamo", "Assaut (OTAN)", 2000, { "", "", -1 } },
			{ "B_AssaultPack_dgtl", "Assaut (AAF)", 2000, { "", "", -1 } },
            { "B_Kitbag_sgg", "Terrain (Vert)", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "Terrain (Beige)", 3500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "Terrain (OTAN)", 3500, { "", "", -1 } },
            { "B_FieldPack_ocamo", "Léger (Sable)", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "Léger (Toundra)", 5000, { "", "", -1 } },
			{ "B_FieldPack_ghex_F", "Léger (CSATJ)", 7500, { "","",-1}  },
            { "B_Bergen_sgg", "Tactique (Beige)", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "Tactique (Vert)", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "Tactique (Gris)", 6500, { "", "", -1 } },
			{ "B_Bergen_mcamo", "Tactique (OTAN)", 6500, { "", "", -1 } },
            { "B_Carryall_ocamo", "Multifonctions (Sable)", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "Multifonctions (Toundra)", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "Multifonctions (Olive)", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "Multifonctions (Marron)", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "Multifonctions (Beige)", 7500, { "", "", -1 } },
			{ "B_Bergen_mcamo", "Tactique (OTAN)", 6500, { "", "", -1 } },
			{ "B_Carryall_mcamo", "Multifonctions (OTAN)", 7500, { "", "", -1 } },
			{ "B_Carryall_ghex_F", "Multifonctions (CSATJ)", 7500, { "","",-1} },
			{ "B_ViperLightHarness_hex_F", "Viper Léger (Désert)", 7500, { "","",-1} },
			{ "B_ViperLightHarness_oli_F", "Viper Léger (Olive)", 7500, { "","",-1} },
			{ "B_ViperLightHarness_khk_F", "Viper Léger (Khaki)", 7500, { "","",-1} },
			{ "B_ViperLightHarness_ghex_F", "Viper Léger (CSATJ)", 7500, { "","",-1} },
			{ "B_ViperHarness_hex_F", "Viper (Désert)", 7500, { "","",-1} },
			{ "B_ViperHarness_oli_F", "Viper (Olive)", 7500, { "","",-1} },
			{ "B_ViperHarness_khk_F", "Viper (Khaki)", 7500, { "","",-1} },
			{ "B_ViperHarness_ghex_F", "Viper (CSATJ)", 7500, { "","",-1} },
			{ "B_Bergen_mcamo_F", "Bergen (OTAN)", 10000, { "","",-1} },
			{ "B_Bergen_hex_F", "Bergen (CSAT)", 10000, { "","",-1} },
			{ "B_Bergen_dgtl_F", "Bergen (AAF)", 10000, { "","",-1} },
			{ "B_Bergen_tna_F", "Bergen (TNA)", 10000, { "","",-1} }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Retirer la Combinaison", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3000, { "", "", -1 } },
            { "U_C_Driver_4", "", 3000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Retirer le Casque", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Aucunes Lunettes", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Aucun Gilet", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Aucun Sac à Dos", 0, { "", "", -1 } }
        };
    };
};
