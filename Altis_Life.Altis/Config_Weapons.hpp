/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "", "-------- ARMES DE POING --------", 0, 0 },
			{ "hgun_P07_F", "P07 9mm", 6500, -1 },
            { "hgun_Rook40_F", "ROOK-40 9mm", 6500, -1 },
            { "hgun_ACPC2_F", "ACP-C2 .45", 9000, -1 },
            { "hgun_Pistol_heavy_02_F", "Zubr .45", 12500, -1 },
			{ "", "---------- MITRAILLETTES ----------", 0, 0 },
            { "hgun_PDW2000_F", "PDW-2000 9mm", 20000, -1 },
			{ "", "--------- FUSILS D'ASSAULT ---------", 0, 0 },
			{ "arifle_SDAR_F", "SDAR 5.56mm", 30000, -1 },
			{ "", "----------- UTILISABLES -----------", 0, 0 },
			{ "Chemlight_red", "Flare Rouge", 300, -1 },
			{ "Chemlight_blue", "Flare Bleue", 300, -1 },
			{ "Chemlight_green", "Flare Verte", 300, -1 },
			{ "Chemlight_yellow", "Flare Jaune", 300, -1 },
			{ "", "--------- QUINCAILLERIE ---------", 0, 0 },
			{ "Binocular", "Jumelles", 150, -1 },
			{ "ItemMap", "Carte", 50, -1 },
			{ "ItemGPS", "GPS", 100, -1 },
			{ "ItemRadio", "Radio", 100, -1 },
			{ "ItemCompass", "Boussole", 50, -1 },
			{ "ItemWatch", "Montre", 50, -1 },
			{ "ToolKit", "Kit de Réparation", 250, -1 },
			{ "FirstAidKit", "Trousse de Secours", 150, -1 },
			{ "NVGoggles", "Lun. Vision Noc. (Camo)", 3000, -1 }
        };
        mags[] = {
			{ "30Rnd_9x21_Mag", "", 300 }, // P07 / ROOK-40 / PDW-2000
            { "9Rnd_45ACP_Mag", "", 10 }, // ACP-C2
            { "6Rnd_45ACP_Cylinder", "", 150 }, // Zubr
			{ "30Rnd_556x45_Stanag", "", 150 } // SDAR
        };
        accs[] = {
			{ "", "---------- OPTIQUES ----------", 0, 0 },
			{ "optic_Aco_smg", "ACO-SMG (P. Rouge)", 1500 },
            { "optic_ACO_grn_smg", "ACO-SMG (P. Vert)", 1500 },
			{ "optic_ACO_grn", "ACO (P. Vert)", 3000 },
			{ "optic_Aco", "ACO (P. Rouge)", 3000 },
			{ "", "---------- RAIL ----------", 0, 0 },
			{ "acc_flashlight", "Flashlight", 2000 },
			{ "acc_pointer_IR", "Pointeur Laser", 2000 },
			{ "", "---------- CANON ----------", 0, 0 },
			{ "muzzle_snds_acp", "Silencieux .45", 2500 },
			{ "muzzle_snds_L", "Silencieux 9 mm", 2500 },
			{ "muzzle_snds_M", "Silencieux 5.56 mm", 2500 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "", "-------- ARMES DE POING --------", 0, 0 },
			{ "hgun_P07_F", "P07 9mm (Tan)", 6500, -1 },
			{ "hgun_P07_khk_F", "P07 9mm (Khaki)", 6500, -1 },
			{ "", "---------- MITRAILLETTES ----------", 0, 0 },
            { "SMG_05_F", "Protector 9mm", 25000, -1 },
			{ "", "------- FUSILS D'ASSAULT -------", 0, 0 },
            { "arifle_SPAR_01_khk_F", "SPAR-16 5.56mm (K)", 200000, -1 },
            { "arifle_Katiba_F", "Katiba 6.5mm", 250000, -1 },
            { "arifle_MX_F", "MX 6.5mm (Tan)", 200000, -1 },
            { "arifle_MXC_F", "MXC 6.5mm (Tan)", 225000, -1 },
            { "arifle_MXM_F", "MXM 6.5mm (Tan)", 250000, -1 },
            { "arifle_AK12_F", "AK-12 7.62mm", 550000, -1 },
            { "srifle_EBR_F", "MK 18 7.62mm", 600000, -1 },
            { "arifle_AKM_F", "AK-M 7.62mm", 350000, -1 },
			{ "", "---- FUSILS DE PRÉCISION ----", 0, 0 },
            { "srifle_DMR_01_F", "Rahim 7.62mm", 400000, -1 },
            { "srifle_DMR_03_F", "MK1 7.62mm (Classic)", 600000, -1 },
            { "srifle_DMR_03_tan_F", "MK1 7.62mm (Tan)", 600000, -1 },
            { "srifle_DMR_03_khaki_F", "MK1 7.62mm (Khaki)", 600000, -1 },
			{ "arifle_SPAR_03_khk_F", "SPAR-17 7.62mm (K)", 600000, -1 },
            { "srifle_DMR_05_hex_F", "Cyrus 9.3mm (Hex)", 1000000, -1 },
            { "srifle_DMR_02_camo_F", "MAR-10 .338 (Jungle)", 900000, -1 },
            { "srifle_LRR_tna_F", "M320 .408 (Tropic)", 1500000, -1 },
            { "srifle_GM6_camo_F", "Lynx 12.7mm (Hex)", 2000000, -1 },
			{ "", "-------- ARMES LOURDES --------", 0, 0 },
            { "LMG_03_F", "LIM 5.56mm", 400000, -1 },
            { "arifle_SPAR_02_khk_F", "SPAR-16S 5.56mm (K)", 400000, -1 },
            { "arifle_MX_SW_F", "MXSW 6.5mm", 650000, -1 },
            { "LMG_Mk200_F", "MK200 6.5mm", 750000, -1 },
            { "LMG_Zafir_F", "ZAPHIR 7.62mm", 1000000, -1 },
			{ "", "----------- UTILISABLES -----------", 0, 0 },
			{ "Chemlight_red", "Flare Rouge", 300, -1 },
			{ "Chemlight_blue", "Flare Bleue", 300, -1 },
			{ "Chemlight_green", "Flare Verte", 300, -1 },
			{ "Chemlight_yellow", "Flare Jaune", 300, -1 },
			{ "SmokeShell", "Fumi. Blanche", 2000, -1 },
			{ "SmokeShellRed", "Fumi. Rouge", 2000, -1 },
			{ "SmokeShellBlue", "Fumi. Bleue", 2000, -1 },
			{ "SmokeShellGreen", "Fumi. Verte", 2000, -1 },
			{ "SmokeShellYellow", "Fumi. Jaune", 2000, -1 },
			{ "MiniGrenade", "Granade Frag.", 800000, -1 },
			{ "", "--------- QUINCAILLERIE ---------", 0, 0 },
			{ "Rangefinder", "Rangefinder", 150, -1 },
			{ "Binocular", "Jumelles", 150, -1 },
			{ "ItemMap", "Carte", 50, -1 },
			{ "ItemGPS", "GPS", 100, -1 },
			{ "ItemRadio", "Radio", 100, -1 },
			{ "ItemCompass", "Boussole", 50, -1 },
			{ "ItemWatch", "Montre", 50, -1 },
			{ "ToolKit", "Kit de Réparation", 250, -1 },
			{ "FirstAidKit", "Trousse de Secours", 150, -1 },
			{ "NVGoggles", "Lun. Vision Noc. (Camo)", 3000, -1 },
			{ "NVGoggles_tna_F", "Lun. Vision Noc. (Jungle)", 4500, -1 }
        };
        mags[] = {
			{ "30Rnd_9x21_Mag", "", 300 },
            { "30Rnd_9x21_Mag_SMG_02", "", 300 },
            { "30Rnd_556x45_Stanag", "", 275 },
            { "30Rnd_65x39_caseless_green", "", 500 },
            { "30Rnd_65x39_caseless_mag", "", 125 },
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "30Rnd_65x39_caseless_mag", "", 500 },
            { "10Rnd_762x54_Mag", "", 300 },
            { "30Rnd_762x39_Mag_F", "", 275 },
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 500 },
            { "200Rnd_556x45_Box_F", "", 300 },
            { "100Rnd_65x39_caseless_mag", "", 275 },
            { "200Rnd_65x39_cased_Box_Tracer", "", 500 },
            { "30Rnd_556x45_Stanag", "", 300 },
            { "150Rnd_762x54_Box", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "10Rnd_93x64_DMR_05_Mag", "", 500 },
            { "10Rnd_338_Mag", "", 300 },
            { "10Rnd_338_Mag", "", 275 },
            { "7Rnd_408_Mag", "", 500 },
            { "5Rnd_127x108_Mag", "", 300 },
            { "5Rnd_127x108_APDS_Mag", "", 275 },
			{ "20Rnd_762x51_Mag", "", 130 },
            { "10Rnd_127x54_Mag", "", 500 }
        };
        accs[] = {
			{ "", "---------- OPTIQUES ----------", 0, 0 },
			{ "optic_Aco_smg", "ACO-SMG (P. Rouge)", 1500 },
            { "optic_ACO_grn_smg", "ACO-SMG (P. Vert)", 1500 },
			{ "optic_ACO_grn", "ACO (P. Vert)", 3000 },
			{ "optic_Aco", "ACO (P. Rouge)", 3000 },
			{ "optic_Hamr", "RCO (Noir)", 7500 },
			{ "optic_Hamr_khk_F", "RCO (Khaki)", 7500 },
			{ "optic_Arco_blk_F", "ARCO (Noir)", 10000 },
			{ "optic_Arco", "ARCO (Tan)", 10000 },
			{ "optic_ERCO_blk_F", "ERCO (Noir)", 12500 },
			{ "optic_ERCO_khk_F", "ERCO (Khaki)", 12500 },
			{ "optic_MRCO", "MRCO (Noir)", 15000 },
			{ "optic_Holosight_blk_F", "Holographique (Noir)", 5000 },
			{ "optic_Holosight", "Holographique (Tan)", 5000 },
			{ "optic_Holosight_khk_F", "Holographique (Khaki)", 5000 },
			{ "", "---------- LUNETTES ----------", 0, 0 },
			{ "optic_NVS", "Night Vision Sight", 20000 },
			{ "optic_DMS", "DMS (Noir)", 10000 },
			{ "optic_DMS_ghex_F", "DMS (Hex Vert)", 10000 },
			{ "optic_SOS", "MOS (Noir)", 15000 },
			{ "optic_SOS_khk_F", "MOS (Khaki)", 15000 },
			{ "optic_AMS", "AMS (Noir)", 20000 },
			{ "optic_AMS_khk", "AMS (Khaki)", 20000 },
			{ "optic_KHS_blk", "Khalia (Noir)", 30000 },
			{ "optic_KHS_old", "Khalia (Usé)", 30000 },
			{ "optic_KHS_tan", "Khalia (Tan)", 30000 },
			{ "optic_KHS_hex", "Khalia (Hex)", 30000 },
			{ "optic_LRPS", "LRPS (Noir)", 35000 },
			{ "optic_LRPS_ghex_F", "LRPS (Hex Vert)", 35000 },
			{ "optic_LRPS_tna_F", "LRPS (Tropiques)", 35000 },
			{ "", "---------- RAIL ----------", 0, 0 },
			{ "acc_flashlight", "", 2000 },
			{ "acc_pointer_IR", "", 2000 },
			{ "", "---------- BIPIED ----------", 0, 0 },
			{ "bipod_01_F_blk", "Bipied (Noir)  [OTAN]", 1000 },
			{ "bipod_01_F_snd", "Bipied (Tan)   [OTAN]", 1000 },
			{ "bipod_01_F_khk", "Bipied (Khaki) [OTAN]", 1000 },
			{ "bipod_02_F_blk", "Bipied (Noir)  [CSAT]", 1000 },
			{ "bipod_02_F_tan", "Bipied (Tan)   [CSAT]", 1000 },
			{ "bipod_02_F_hex", "Bipied (Hex)   [CSAT]", 1000 },
			{ "", "---------- CANON ----------", 0, 0 },
			{ "muzzle_snds_L", "Silenc. 9mm (Noir)", 2500 },
			{ "muzzle_snds_M", "Silenc. 5.56mm (Noir)", 2500 },
			{ "muzzle_snds_m_snd_F", "Silenc. 5.56mm (Tan)", 2500 },
			{ "muzzle_snds_m_khk_F", "Silenc. 5.56mm (Khaki)", 2500 },
			{ "muzzle_snds_H", "Silenc. 6.5mm (Noir)", 2500 },
			{ "muzzle_snds_H_snd_F", "Silenc. 5.56mm (Tan)", 2500 },
			{ "muzzle_snds_B", "Silenc. 7.62mm (Noir)", 2500 },
			{ "muzzle_snds_B_snd_F", "Silenc. 7.62mm (Tan)", 2500 },
			{ "muzzle_snds_B_snd_F", "Silenc. 7.62mm (Khaki)", 2500 },
			{ "muzzle_snds_93mmg", "Silenc. 9.3mm (Noir)", 2500 },
			{ "muzzle_snds_93mmg_tan", "Silenc. 9.3mm (Noir)", 2500 },
			{ "muzzle_snds_338_black", "Silenc. .338 (Noir)", 2500 },
			{ "muzzle_snds_338_sand", "Silenc. .338 (Tan)", 2500 },
			{ "muzzle_snds_338_green", "Silenc. .338 (Jungle)", 2500 }
        };
    };
    

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "", "-------- ARMES DE POING --------", 0, 0 },
			{ "hgun_P07_F", "P07 9mm (Tan)", 6500, -1 },
			{ "hgun_P07_khk_F", "P07 9mm (Khaki)", 6500, -1 },
			{ "", "---------- MITRAILLETTES ----------", 0, 0 },
            { "SMG_05_F", "Protector 9mm", 25000, -1 },
			{ "", "------- FUSILS D'ASSAULT -------", 0, 0 },
            { "arifle_SPAR_01_khk_F", "SPAR-16 5.56mm (K)", 50000, -1 },
            { "arifle_Katiba_F", "Katiba 6.5mm", 30000, -1 },
            { "arifle_MX_F", "MX 6.5mm (Tan)", 20000, -1 },
            { "arifle_MXC_F", "MXC 6.5mm (Tan)", 50000, -1 },
            { "arifle_MXM_F", "MXM 6.5mm (Tan)", 25000, -1 },
            { "arifle_AK12_F", "AK-12 7.62mm", 25000, -1 },
            { "arifle_AKM_F", "AK-M 7.62mm", 30000, -1 },
			{ "", "---- FUSILS DE PRÉCISION ----", 0, 0 },
            { "srifle_DMR_01_F", "Rahim 7.62mm", 30000, -1 },
            { "srifle_DMR_03_F", "MK1 7.62mm (Classic)", 50000, -1 },
            { "srifle_DMR_03_khaki_F", "MK1 7.62mm (Khaki)", 20000, -1 },
			{ "arifle_SPAR_03_khk_F", "SPAR-17 7.62mm (K)", 950000, -1 },
            { "srifle_DMR_05_hex_F", "Cyrus 9.3mm (Hex)", 50000, -1 },
            { "srifle_DMR_02_camo_F", "MAR-10 .338 (Jungle)", 25000, -1 },
            { "srifle_LRR_camo_F", "M320 .408 (Désert)", 20000, -1 },
            { "srifle_LRR_tna_F", "M320 .408 (Tropic)", 50000, -1 },
            { "srifle_GM6_camo_F", "Lynx 12.7mm (Hex)", 50000, -1 },
			{ "", "-------- ARMES LOURDES --------", 0, 0 },
            { "LMG_03_F", "LIM 5.56mm", 50000, -1 },
            { "arifle_SPAR_02_khk_F", "SPAR-16S 5.56mm (K)", 25000, -1 },
            { "arifle_MX_SW_F", "MXSW 6.5mm", 20000, -1 },
            { "LMG_Mk200_F", "MK200 6.5mm", 25000, -1 },
            { "LMG_Zafir_F", "ZAPHIR 7.62mm", 30000, -1 },
			{ "", "----------- UTILISABLES -----------", 0, 0 },
			{ "Chemlight_red", "Flare Rouge", 300, -1 },
			{ "Chemlight_blue", "Flare Bleue", 300, -1 },
			{ "Chemlight_green", "Flare Verte", 300, -1 },
			{ "Chemlight_yellow", "Flare Jaune", 300, -1 },
			{ "SmokeShell", "Fumi. Blanche", 2000, -1 },
			{ "SmokeShellRed", "Fumi. Rouge", 2000, -1 },
			{ "SmokeShellBlue", "Fumi. Bleue", 2000, -1 },
			{ "SmokeShellGreen", "Fumi. Verte", 2000, -1 },
			{ "SmokeShellYellow", "Fumi. Jaune", 2000, -1 },
			{ "MiniGrenade", "Granade Frag.", 800000, -1 },
			{ "", "--------- QUINCAILLERIE ---------", 0, 0 },
			{ "Rangefinder", "Rangefinder", 150, -1 },
			{ "Binocular", "Jumelles", 150, -1 },
			{ "ItemMap", "Carte", 50, -1 },
			{ "ItemGPS", "GPS", 100, -1 },
			{ "ItemRadio", "Radio", 100, -1 },
			{ "ItemCompass", "Boussole", 50, -1 },
			{ "ItemWatch", "Montre", 50, -1 },
			{ "ToolKit", "Kit de Réparation", 250, -1 },
			{ "FirstAidKit", "Trousse de Secours", 150, -1 },
			{ "NVGoggles", "Lun. Vision Noc. (Camo)", 3000, -1 },
			{ "NVGoggles_tna_F", "Lun. Vision Noc. (Jungle)", 4500, -1 }
        };
        mags[] = {
			{ "30Rnd_9x21_Mag", "", 300 },
            { "30Rnd_9x21_Mag_SMG_02", "", 300 },
            { "30Rnd_556x45_Stanag", "", 275 },
            { "30Rnd_65x39_caseless_green", "", 500 },
            { "30Rnd_65x39_caseless_mag", "", 125 },
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "30Rnd_65x39_caseless_mag", "", 500 },
            { "10Rnd_762x54_Mag", "", 300 },
            { "30Rnd_762x39_Mag_F", "", 275 },
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 500 },
            { "200Rnd_556x45_Box_F", "", 300 },
            { "100Rnd_65x39_caseless_mag", "", 275 },
            { "200Rnd_65x39_cased_Box_Tracer", "", 500 },
            { "30Rnd_556x45_Stanag", "", 300 },
            { "150Rnd_762x54_Box", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "10Rnd_93x64_DMR_05_Mag", "", 500 },
            { "10Rnd_338_Mag", "", 300 },
            { "10Rnd_338_Mag", "", 275 },
            { "7Rnd_408_Mag", "", 500 },
            { "5Rnd_127x108_Mag", "", 300 },
            { "5Rnd_127x108_APDS_Mag", "", 275 },
            { "10Rnd_127x54_Mag", "", 500 }
        };
        accs[] = {
			{ "", "---------- OPTIQUES ----------", 0, 0 },
			{ "optic_Aco_smg", "ACO-SMG (P. Rouge)", 1500 },
            { "optic_ACO_grn_smg", "ACO-SMG (P. Vert)", 1500 },
			{ "optic_ACO_grn", "ACO (P. Vert)", 3000 },
			{ "optic_Aco", "ACO (P. Rouge)", 3000 },
			{ "optic_Hamr", "RCO (Noir)", 7500 },
			{ "optic_Hamr_khk_F", "RCO (Khaki)", 7500 },
			{ "optic_Arco_blk_F", "ARCO (Noir)", 10000 },
			{ "optic_Arco", "ARCO (Tan)", 10000 },
			{ "optic_ERCO_blk_F", "ERCO (Noir)", 12500 },
			{ "optic_ERCO_khk_F", "ERCO (Khaki)", 12500 },
			{ "optic_MRCO", "MRCO (Noir)", 15000 },
			{ "optic_Holosight_blk_F", "Holographique (Noir)", 5000 },
			{ "optic_Holosight", "Holographique (Tan)", 5000 },
			{ "optic_Holosight_khk_F", "Holographique (Khaki)", 5000 },
			{ "", "---------- LUNETTES ----------", 0, 0 },
			{ "optic_NVS", "Night Vision Sight", 20000 },
			{ "optic_DMS", "DMS (Noir)", 10000 },
			{ "optic_DMS_ghex_F", "DMS (Hex Vert)", 10000 },
			{ "optic_SOS", "MOS (Noir)", 15000 },
			{ "optic_SOS_khk_F", "MOS (Khaki)", 15000 },
			{ "optic_AMS", "AMS (Noir)", 20000 },
			{ "optic_AMS_khk", "AMS (Khaki)", 20000 },
			{ "optic_KHS_blk", "Khalia (Noir)", 30000 },
			{ "optic_KHS_old", "Khalia (Usé)", 30000 },
			{ "optic_KHS_tan", "Khalia (Tan)", 30000 },
			{ "optic_KHS_hex", "Khalia (Hex)", 30000 },
			{ "optic_LRPS", "LRPS (Noir)", 35000 },
			{ "optic_LRPS_ghex_F", "LRPS (Hex Vert)", 35000 },
			{ "optic_LRPS_tna_F", "LRPS (Tropiques)", 35000 },
			{ "", "---------- RAIL ----------", 0, 0 },
			{ "acc_flashlight", "", 2000 },
			{ "acc_pointer_IR", "", 2000 },
			{ "", "---------- BIPIED ----------", 0, 0 },
			{ "bipod_01_F_blk", "Bipied (Noir)  [OTAN]", 1000 },
			{ "bipod_01_F_snd", "Bipied (Tan)   [OTAN]", 1000 },
			{ "bipod_01_F_khk", "Bipied (Khaki) [OTAN]", 1000 },
			{ "bipod_02_F_blk", "Bipied (Noir)  [CSAT]", 1000 },
			{ "bipod_02_F_tan", "Bipied (Tan)   [CSAT]", 1000 },
			{ "bipod_02_F_hex", "Bipied (Hex)   [CSAT]", 1000 },
			{ "", "---------- CANON ----------", 0, 0 },
			{ "muzzle_snds_L", "Silenc. 9mm (Noir)", 2500 },
			{ "muzzle_snds_M", "Silenc. 5.56mm (Noir)", 2500 },
			{ "muzzle_snds_m_snd_F", "Silenc. 5.56mm (Tan)", 2500 },
			{ "muzzle_snds_m_khk_F", "Silenc. 5.56mm (Khaki)", 2500 },
			{ "muzzle_snds_H", "Silenc. 6.5mm (Noir)", 2500 },
			{ "muzzle_snds_H_snd_F", "Silenc. 5.56mm (Tan)", 2500 },
			{ "muzzle_snds_B", "Silenc. 7.62mm (Noir)", 2500 },
			{ "muzzle_snds_B_snd_F", "Silenc. 7.62mm (Tan)", 2500 },
			{ "muzzle_snds_B_snd_F", "Silenc. 7.62mm (Khaki)", 2500 },
			{ "muzzle_snds_93mmg", "Silenc. 9.3mm (Noir)", 2500 },
			{ "muzzle_snds_93mmg_tan", "Silenc. 9.3mm (Noir)", 2500 },
			{ "muzzle_snds_338_black", "Silenc. .338 (Noir)", 2500 },
			{ "muzzle_snds_338_sand", "Silenc. .338 (Tan)", 2500 },
			{ "muzzle_snds_338_green", "Silenc. .338 (Jungle)", 2500 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "Binocular", "Jumelles", 150, -1 },
			{ "ItemMap", "Carte", 50, -1 },
			{ "ItemGPS", "GPS", 100, -1 },
			{ "ItemRadio", "Radio", 100, -1 },
			{ "ItemCompass", "Boussole", 50, -1 },
			{ "ItemWatch", "Montre", 50, -1 },
			{ "ToolKit", "Kit de Réparation", 250, -1 },
			{ "FirstAidKit", "Trousse de Secours", 150, -1 },
			{ "NVGoggles", "Lun. Vision Noc. (Camo)", 3000, -1 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "Binocular", "Jumelles", 150, -1 },
			{ "ItemMap", "Carte", 50, -1 },
			{ "ItemGPS", "GPS", 100, -1 },
			{ "ItemRadio", "Radio", 100, -1 },
			{ "ItemCompass", "Boussole", 50, -1 },
			{ "ItemWatch", "Montre", 50, -1 },
			{ "ToolKit", "Kit de Réparation", 250, -1 },
			{ "FirstAidKit", "Trousse de Secours", 150, -1 },
			{ "NVGoggles", "Lun. Vision Noc. (Camo)", 3000, -1 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "", "-------- ARMES DE POING --------", 0, 0, { "life_coplevel", 1 } },
			{ "hgun_P07_F", "P07 9mm", 6500, -1, { "life_coplevel", 1 } },
			{ "", "------- FUSILS D'ASSAULT -------", 0, 0, { "life_coplevel", 1 } },
            { "arifle_SPAR_01_snd_F", "SPAR-16 5.56mm", 20000, -1, { "life_coplevel", 1 } },
            { "arifle_Mk20_F", "MK-20 5.56mm", 50000, -1, { "life_coplevel", 1 } },
            { "arifle_MX_F", "MX 6.5mm", 20000, -1, { "life_coplevel", 2 } },
            { "arifle_MXC_F", "MXC 6.5mm", 50000, -1, { "life_coplevel", 2 } },
            { "arifle_MXM_F", "MXM 6.5mm", 25000, -1, { "life_coplevel", 2 } },
			{ "", "---- FUSILS DE PRÉCISION ----", 0, 0, { "life_coplevel", 4 } },
			{ "arifle_SPAR_03_snd_F", "SPAR-17 7.62mm", 950000, -1, { "life_coplevel", 4 } },
            { "srifle_DMR_03_tan_F", "MK1-EMR 7.62mm", 20000, -1, { "life_coplevel", 4 } },
            { "srifle_DMR_05_tan_f", "Cyrus 9.3mm (Tan)", 20000, -1, { "life_coplevel", 6 } },
            { "srifle_DMR_05_blk_F", "Cyrus 9.3mm (black)", 50000, -1, { "life_coplevel", 6 } },
            { "srifle_DMR_02_F", "MAR-10 .338 (Black)", 30000, -1, { "life_coplevel", 6 } },
            { "srifle_LRR_F", "M320 .408 (Désert)", 20000, -1, { "life_coplevel", 6 } },
            { "srifle_GM6_F", "Lynx 12.7mm (Hex)", 50000, -1, { "life_coplevel", 6 } },
			{ "", "-------- ARMES LOURDES --------", 0, 0, { "life_coplevel", 3 } },
            { "LMG_Mk200_F", "MK200 6.5mm", 25000, -1, { "life_coplevel", 3 } },
            { "LMG_Zafir_F", "ZAPHIR 7.62mm", 30000, -1, { "life_coplevel", 5 } },
			{ "", "----------- UTILISABLES -----------", 0, 0, { "life_coplevel", 1 } },
			{ "Chemlight_red", "Flare Rouge", 300, -1, { "life_coplevel", 1 } },
			{ "Chemlight_blue", "Flare Bleue", 300, -1, { "life_coplevel", 1 } },
			{ "Chemlight_green", "Flare Verte", 300, -1, { "life_coplevel", 1 } },
			{ "Chemlight_yellow", "Flare Jaune", 300, -1, { "life_coplevel", 1 } },
			{ "SmokeShell", "Fumi. Blanche", 2000, -1, { "life_coplevel", 1 } },
			{ "SmokeShellRed", "Fumi. Rouge", 2000, -1, { "life_coplevel", 1 } },
			{ "SmokeShellBlue", "Fumi. Bleue", 2000, -1, { "life_coplevel", 1 } },
			{ "SmokeShellGreen", "Fumi. Verte", 2000, -1, { "life_coplevel", 1 } },
			{ "SmokeShellYellow", "Fumi. Jaune", 2000, -1, { "life_coplevel", 1 } },
            { "HandGrenade_Stone", "Grenade Flash", 1700, -1, { "life_coplevel", "SCALAR", 5 } },
			{ "MiniGrenade", "Granade Frag.", 800000, -1, { "life_coplevel", "SCALAR", 5 } },
			{ "", "--------- QUINCAILLERIE ---------", 0, 0, { "life_coplevel", 1 } },
			{ "Rangefinder", "Rangefinder", 150, -1, { "life_coplevel", 1 } },
			{ "Binocular", "Jumelles", 150, -1, { "life_coplevel", 1 } },
			{ "ItemMap", "Carte", 50, -1, { "life_coplevel", 1 } },
			{ "ItemGPS", "GPS", 100, -1, { "life_coplevel", 1 } },
			{ "ItemRadio", "Radio", 100, -1, { "life_coplevel", 1 } },
			{ "ItemCompass", "Boussole", 50, -1, { "life_coplevel", 1 } },
			{ "ItemWatch", "Montre", 50, -1, { "life_coplevel", 1 } },
			{ "ToolKit", "Kit de Réparation", 250, -1, { "life_coplevel", 1 } },
			{ "FirstAidKit", "Trousse de Secours", 150, -1, { "life_coplevel", 1 } },
			{ "NVGoggles", "Lun. Vision Noc. (Camo)", 3000, -1, { "life_coplevel", 1 } },
			{ "NVGoggles_OPFOR", "Lun. Vision Noc. (Noir)", 3000, -1, { "life_coplevel", 1 } },
            { "B_UavTerminal", "Drone Control", 50000, -1, { "life_coplevel", 3 } }
        };
        mags[] = {
			{ "30Rnd_9x21_Mag", "", 300 },
            { "30Rnd_556x45_Stanag", "", 130 },
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "20Rnd_762x51_Mag", "", 130 },
            { "150Rnd_762x54_Box", "", 275 },
            { "10Rnd_93x64_DMR_05_Mag", "", 500 },
            { "10Rnd_338_Mag", "", 300 },
            { "7Rnd_408_Mag", "", 500 },
            { "5Rnd_127x108_Mag", "", 300 }
		};
        accs[] = {
			{ "", "---------- OPTIQUES ----------", 0, 0, { "life_coplevel", 1 } },
			{ "optic_ACO_grn", "ACO (P. Vert)", 3000, { "life_coplevel", 1 } },
			{ "optic_Aco", "ACO (P. Rouge)", 3000, { "life_coplevel", 1 } },
			{ "optic_Hamr", "RCO (Noir)", 7500, { "life_coplevel", 1 } },
			{ "optic_Arco_blk_F", "ARCO (Noir)", 10000, { "life_coplevel", 1 } },
			{ "optic_Arco", "ARCO (Tan)", 10000, { "life_coplevel", 1 } },
			{ "optic_ERCO_blk_F", "ERCO (Noir)", 12500, { "life_coplevel", 1 } },
			{ "optic_MRCO", "MRCO (Noir)", 15000, { "life_coplevel", 1 } },
			{ "optic_Holosight_blk_F", "Holographique (Noir)", 5000, { "life_coplevel", 1 } },
			{ "optic_Holosight", "Holographique (Tan)", 5000, { "life_coplevel", 1 } },
			{ "", "---------- LUNETTES ----------", 0, 0, { "life_coplevel", 3 } },
			{ "optic_NVS", "Night Vision Sight", 20000, { "life_coplevel", 3 } },
			{ "optic_DMS", "DMS (Noir)", 10000, { "life_coplevel", 3 } },
			{ "optic_SOS", "MOS (Noir)", 15000, { "life_coplevel", 3 } },
			{ "optic_AMS", "AMS (Noir)", 20000, { "life_coplevel", 3 } },
			{ "optic_KHS_blk", "Khalia (Noir)", 30000, { "life_coplevel", 6 } },
			{ "optic_KHS_old", "Khalia (Usé)", 30000, { "life_coplevel", 6 } },
			{ "optic_KHS_tan", "Khalia (Tan)", 30000, { "life_coplevel", 6 } },
			{ "optic_KHS_hex", "Khalia (Hex)", 30000, { "life_coplevel", 6 } },
			{ "optic_LRPS", "LRPS (Noir)", 35000, { "life_coplevel", 6 } },
			{ "", "---------- RAIL ----------", 0, 0, { "life_coplevel", 1 } },
			{ "acc_flashlight", "", 2000, { "life_coplevel", 1 } },
			{ "acc_pointer_IR", "", 2000, { "life_coplevel", 1 } },
			{ "", "---------- BIPIED ----------", 0, 0, { "life_coplevel", 1 } },
			{ "bipod_01_F_blk", "Bipied (Noir)  [OTAN]", 1000, { "life_coplevel", 1 } },
			{ "bipod_01_F_snd", "Bipied (Tan)   [OTAN]", 1000, { "life_coplevel", 1 } },
			{ "bipod_02_F_blk", "Bipied (Noir)  [CSAT]", 1000, { "life_coplevel", 1 } },
			{ "bipod_02_F_tan", "Bipied (Tan)   [CSAT]", 1000, { "life_coplevel", 1 } },
			{ "bipod_02_F_hex", "Bipied (Hex)   [CSAT]", 1000, { "life_coplevel", 1 } },
			{ "", "---------- CANON ----------", 0, 0, { "life_coplevel", 1 } },
			{ "muzzle_snds_L", "Silenc. 9mm (Noir)", 2500, { "life_coplevel", 1 } },
			{ "muzzle_snds_M", "Silenc. 5.56mm (Noir)", 2500, { "life_coplevel", 1 } },
			{ "muzzle_snds_m_snd_F", "Silenc. 5.56mm (Tan)", 2500, { "life_coplevel", 1 } },
			{ "muzzle_snds_H", "Silenc. 6.5mm (Noir)", 2500, { "life_coplevel", 1 } },
			{ "muzzle_snds_H_snd_F", "Silenc. 5.56mm (Tan)", 2500, { "life_coplevel", 1 } },
			{ "muzzle_snds_B", "Silenc. 7.62mm (Noir)", 2500, { "life_coplevel", 4 } },
			{ "muzzle_snds_B_snd_F", "Silenc. 7.62mm (Tan)", 2500, { "life_coplevel", 4 } },
			{ "muzzle_snds_93mmg", "Silenc. 9.3mm (Noir)", 2500, { "life_coplevel", 6 } },
			{ "muzzle_snds_93mmg_tan", "Silenc. 9.3mm (Noir)", 2500, { "life_coplevel", 6 } },
			{ "muzzle_snds_338_black", "Silenc. .338 (Noir)", 2500, { "life_coplevel", 6 } },
			{ "muzzle_snds_338_sand", "Silenc. .338 (Tan)", 2500, { "life_coplevel", 6 } },
			{ "muzzle_snds_338_green", "Silenc. .338 (Jungle)", 2500, { "life_coplevel", 6 } }
		};
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "Binocular", "Jumelles", 150, -1 },
			{ "ItemMap", "Carte", 50, -1 },
			{ "ItemGPS", "GPS", 100, -1 },
			{ "ItemRadio", "Radio", 100, -1 },
			{ "ItemCompass", "Boussole", 50, -1 },
			{ "ItemWatch", "Montre", 50, -1 },
			{ "ToolKit", "Kit de Réparation", 250, -1 },
			{ "Medikit", "Kit de Soins", 250, -1 },
			{ "FirstAidKit", "Trousse de Secours", 150, -1 },
			{ "NVGoggles_OPFOR", "Lun. Vision Noc. (Médics)", 3000, -1 }
        };
        mags[] = {};
        accs[] = {};
    };
};
