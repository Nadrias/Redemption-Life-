#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private["_skinName"];

switch (playerSide) do {
    case civilian: {
        if (LIFE_SETTINGS(getNumber,"civ_skins") isEqualTo 1) then {
            if (uniform player isEqualTo "U_C_Poloshirt_blue") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_1.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_burgundy") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_2.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_stripped") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_3.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_tricolour") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_4.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_salmon") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_5.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_redwhite") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_6.jpg"];
            };
            if (uniform player isEqualTo "U_C_Commoner1_1") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_7.jpg"];
            };
        };
    };

    case west: {
            if(uniform player == "U_B_CTRG_1") then {player setObjectTextureGlobal [0, "textures\tenues\adt_uniform_1.jpg"];};
            if(uniform player == "U_I_CombatUniform_shortsleeve") then {player setObjectTextureGlobal [0, "textures\tenues\adt_uniform_2.jpg"];};
            if(uniform player == "U_I_CombatUniform") then {player setObjectTextureGlobal [0, "textures\tenues\secu_civil.jpg"];};
            if(uniform player == "U_I_CombatUniform_tshirt") then {player setObjectTextureGlobal [0, "textures\tenues\president.jpg"];};
            (backpackContainer player) setObjectTextureGlobal [0,""];
    };

    case independent: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            player setObjectTextureGlobal [0, "textures\medic_uniform.jpg"];
        };
        if(uniform player == "U_B_CTRG_1") then {player setObjectTextureGlobal [0, "textures\tenues\samu\medecin.paa"];};
        (backpackContainer player) setObjectTextureGlobal [0,""];
    };
};
