/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "core\scripts\fn_statusBar.sqf";
[] execVM "core\scripts\fn_disableSnakes.sqf";

MAC_fnc_switchMove = {
 private["_object","_anim"];
 _object = _this select 0;
 _anim = _this select 1;
 _object switchMove _anim;
};

StartProgress = true;