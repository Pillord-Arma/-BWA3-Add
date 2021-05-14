private ["_heli", "_sound", "_sounddata", "_oldsound"];

_heli = _this select 0;
_heli setvariable ["kyo_chatter",true,true];
_sounddata = ["radioChatter1","radioChatter2","radioChatter3","radioChatter4","radioChatter5","radioChatter6","radioChatter7","radioChatter8","radioChatter9","radioChatter10","radioChatter11","radioChatter12","radioChatter13","radioChatter14","radioChatter15","radioChatter16","radioChatter17","radioChatter18","radioChatter19"];
sleep 1;
if (isnil "kyo_chatter") then {kyo_chatter = [false, ""];};
if (isnil "kyo_chatterMinDelay") then {kyo_chatterMinDelay = 30;};
if (isnil "kyo_chatterMaxDelay") then {kyo_chatterMaxDelay = 60;};
if (isnil "kyo_chatterDisabled") then {kyo_chatterDisabled = false;};
if (isnil "_sound") then {_sound = "";};
if (isnil "_oldsound") then {_oldsound = "";};

waituntil {({alive _x} count (crew _heli)) > 0}; 

while {alive _heli && !(kyo_chatterDisabled) && (_heli getvariable ["kyo_chatter", false])} do { 
	if (isServer) then {
		if ({alive _x} count (crew _heli) > 0) then {
			sleep kyo_chatterMinDelay + (random kyo_chatterMaxDelay - kyo_chatterMinDelay);
			while {_sound == _oldsound} do {
				_sound = _sounddata select floor(random count _sounddata);
			};
			kyo_chatter = [true, _sound];
			publicVariable "kyo_chatter";
		};

	};
	
	waitUntil {kyo_chatter select 0};

	if (vehicle player == _heli) then {
		_sound = kyo_chatter select 1;
		if (cameraOn == _heli && cameraView == "External") then {
			playSound format ["%1_L", _sound];
		} else {
			if (player == driver _heli || player == gunner _heli) then {
				playSound format ["%1_H", _sound];
			} else {
				playSound format ["%1_L", _sound];
			};
		};
	};
	sleep 2;
	if (isServer) then {
		kyo_chatter set [0, false];
		publicVariable "kyo_chatter";
		_oldsound = _sound
	};
	sleep 1;
};
