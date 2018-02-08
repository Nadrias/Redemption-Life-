/*
##################### DYNAMIC MARKET SCRIPT #####################
### AUTHOR: RYAN TT.                                          ###
### STEAM: www.steamcommunity.com/id/ryanthett                ###
###                                                           ###
### DISCLAIMER: THIS SCRIPT CAN BE USED ON EVERY SERVER ONLY  ###
###             WITH THIS HEADER / NOTIFICATION               ###
#################################################################
*/

// ███████████████████████████████████████████████████████████████████████
// █████████████████ DYNAMIC MARKET BASIC CONFIGURATION ██████████████████
// ███████████████████████████████████████████████████████████████████████

DYNMARKET_Serveruptime         = 05;   // Serveruptime after restart in hours
DYNMARKET_UseExternalDatabase  = true; // Should the script use the External Database?
DYNMARKET_PriceUpdateInterval  = 01;   // After how many minutes should the price be updated?
DYNMARKET_CreateBackups        = true; // Should the server save write the prices regulary into the Database? If false, it will save the prices before Server-restart?
DYNMARKET_CreateBackupInterval = 03;   // After how many updates (PriceUpdateIntervals) should the prices be saved into the Database?
DYNMARKET_UserNotification     = false; // Should the user be informed with a hint whenever the prices got updated?

// █████████████████ USER NOTIFICATION TEXTS  █████████████████

DYNMARKET_UserNotification_Text = 
[
	"Your prices have been updated!",
	"The new prices are being calculated by the server..."
];

// █████████████████ ITEM GROUP CONFIGURATION █████████████████

DYNMARKET_Items_Groups =
[
	["Legal",
		[
			["apple",1,100,150],
			["peach",1,90,190],
			["rabbit_raw",1,150,150],
			["rabbit",1,170,180],
			["ornate_raw",1,190,190],
			["ornate",1,190,190],
			["mackerel_raw",1,190,190],
			["mackerel",1,190,190],
			["tuna_raw",1,190,190],
			["tuna",1,190,190],
			["mullet_raw",1,190,190],
			["mullet",1,200,230],
			["catshark_raw",1,200,200],
			["catshark",1,200,200],
			["hen_raw",1,200,200],
			["hen",1,200,200],
			["rooster_raw",1,210,200],
			["sheep_raw",1,210,210],
			["sheep",1,155,200],
			["goat_raw",1,155,200],
			["goat",1,300,400],
			["oil_processed",1,1200,4000],
			["copper_refined",1,1700,2000],
			["iron_refined",1,1650,2500],
			["salt_refined",1,1850,3000],
			["glass",1,1450,3000],
			["diamond_cut",1,2530,5500],
			["cement",1,2350,4000]
		],
		0.5
	],
	["Illegal", 
		[
			["heroin_processed",-1,4000,7000],
			["marijuana",-1,3250,6000],
			["cocaine_processed",-1,5300,8500],
			["turtle_raw",1,9000,11000],  
			["goldbar",1,85000,105000]
		],
		0.5
	]
];

// █████████████████    ALL SELLABLE ITEMS    █████████████████

DYNMARKET_Items_ToTrack        = 
[

	["apple",100],
	["peach",100],
	["rabbit_raw",150],
	["rabbit",170],
	["ornate_raw",190],
	["ornate",190],
	["mackerel_raw",190],
	["mackerel",190],
	["tuna_raw",190],
	["tuna",190],
	["mullet_raw",190],
	["mullet",200],
	["catshark_raw",200],
	["catshark",200],
	["turtle_soup",200],
	["hen_raw",200],
	["hen",200],
	["rooster_raw",210],
	["sheep_raw",210],
	["sheep",155],
	["goat_raw",155],
	["goat",300],
	["goldbar",95000],
	["oil_processed",2500],
	["copper_refined",1800],
	["iron_refined",2000],
	["salt_refined",2500],
	["glass",2000],
	["diamond_cut",4000],
	["cement",3000],
	["heroin_processed",6000],
	["marijuana",5000],
	["turtle_raw",10000],
	["cocaine_processed",7000]
	
	

];

//███████████████████████████████████████████████████████████████████████
//██████████████████ DO NOT MODIFY THE FOLLOWING CODE! ██████████████████
//███████████████████████████████████████████████████████████████████████

DYNMARKET_Items_CurrentPriceArr = [];
DYNMARKET_sellarraycopy = DYNMARKET_Items_ToTrack;
DYNMARKET_Serveruptime = (DYNMARKET_Serveruptime * 3600) - 300;
{
	_currentArray = _x;
	DYNMARKET_Items_CurrentPriceArr pushBack [_currentArray select 0,_currentArray select 1,0];
} forEach DYNMARKET_Items_ToTrack;
publicVariable "DYNMARKET_UserNotification";
publicVariable "DYNMARKET_UserNotification_Text";
if (DYNMARKET_UseExternalDatabase) then {[1] call TON_fnc_HandleDB;};
DYNMARKET_UpdateCount = 0;
if (DYNMARKET_UseExternalDatabase) then {
	[] spawn {
		sleep DYNMARKET_Serveruptime;
		diag_log "### DYNMARKET >> CURRENT PRICES ARE BEING WRITTEN TO THE DATABASE    ###";
		diag_log "### DYNMARKET >> AS PLANNED, AWAITING RESULT...                      ###";
		[0] call TON_fnc_HandleDB;
	};
};
sleep 5;
[] call TON_fnc_sleeper;
