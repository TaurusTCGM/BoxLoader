_par = params [["_veh",objNull,[objNull]],["_rack",[],[[]]],["_rackVar","",[""]]];
if (!_par) exitWith {["Malformed params!"] call bis_fnc_error;false};
if (isNull _veh) exitWith {["Vehicle passed was null!"] call bis_fnc_error; false};
_val = _rack call boxloader_fnc_racks_validate;
if (!(_val select 0)) exitWith {["Variable name passed is not rack data!"] call bis_fnc_error; false};
_rack = (_val select 1);
if (typeName (_rack select 0)!=typeName "") exitWith {["Rack object must be a string here."] call bis_fnc_error;false};
_expUse = "(vehicle _this == _this) && (isNull (_this getVariable ['boxloader_tgt',objNull]))";
if (_rack select 5) then {
	_expUse = _expUse + "&& !((_target getVariable ['"+_rackVar+"',[objNull]] select 0) getVariable ['boxloader_dontload',true])";
	_expOn = "(vehicle _this == _this) && ((_target getVariable ['"+_rackVar+"',[objNull]] select 0) getVariable ['boxloader_dontload',false])";
	if (count (_rack select 6 select 3)>0) then {
		_expOn = _expOn +" && (({!(isNull (_x select 0)) && (_x select 2) in "+(str (_rack select 6 select 3))+"} count fullCrew [_target, 'cargo',true])==0)";
	};
	if (count (_rack select 6 select 4)>0) then {
		_expOn = _expOn +" && (({!(isNull (_x select 0)) && (_x select 2) in "+(str (_rack select 6 select 4))+"} count fullCrew [_target, 'turret',true])==0)";
	};
	if (count (_rack select 7)>0) then {
		_expOn = _expOn + "&& (_target animationSourcePhase '"+(_rack select 7 select 0)+"')=="+(str (_rack select 7 select 1));
	};
	_expOff = "(vehicle _this == _this) && !((_target getVariable ['"+_rackVar+"',[objNull]] select 0) getVariable ['boxloader_dontload',true]) && ((count getVehicleCargo (_target getVariable ['"+_rackVar+"',[objNull]] select 0))==0)";
	_veh addAction [(_rack select 6 select 0),{[(_this select 0),(_this select 3 select 0),true] remoteExecCall ["boxloader_fnc_racks_switch",(_this select 0)]},[_rackVar],0,false,true,"",_expOn];
	_veh addAction [(_rack select 6 select 1),{[(_this select 0),(_this select 3 select 0),false] remoteExecCall ["boxloader_fnc_racks_switch",(_this select 0)]},[_rackVar],0,false,true,"",_expOff];
};
_veh addAction [(_rack select 3),{(_this select 1) setVariable ["boxloader_tgt",(((_this select 0) getVariable [(_this select 3 select 0),[objNull]]) select 0),true]},[_rackVar],0,false,true,"",_expUse];
_veh addAction [(_rack select 4),{((_this select 0) getVariable [(_this select 3 select 0),[objNull]] select 0) setVehicleCargo objNull;},[_rackVar],0,false,true,"","(driver _target == _this) && ((count getVehicleCargo (_target getVariable ['"+_rackVar+"',[objNull]] select 0))>0)"];
if (!isServer) exitWith {true};

_obj = (_rack select 0) createVehicle position _veh;
_obj attachTo [_veh,(_rack select 1)];
_obj setDir (_rack select 2);
_obj setPos getPos _obj;
_veh addEventHandler ["Deleted",compile ("deleteVehicle (((_this select 0) getVariable['"+_rackVar+"',[objNull]]) select 0)")];

if (_rack select 5) then {
	_obj setVariable ["boxloader_dontload",true,true];
	if (_rack select 6 select 2) then {
		_obj hideObjectGlobal true;
	};
};
_rack set [0,_obj];
_veh setVariable [_rackVar,_rack,true];
true 