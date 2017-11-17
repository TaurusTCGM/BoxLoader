params [["_veh",objNull,[objNull]],["_player",objNull,[objNull]],["_cargo",false,[true]]];
if (isNull _veh || isNull _player) exitWith {["Vehicle or player passed was null!"] call bis_fnc_error; false};
if (!(_veh isKindOf "Truck_02_transport_Base_F") && !(typeOf _veh in ["O_Truck_02_covered_F","I_Truck_02_covered_F","C_Truck_02_covered_F","C_IDAP_Truck_02_F"])) exitWith {["That's not an acceptable kamaz!"] call bis_fnc_error; false};
if ((_player distance _veh)>20) exitWith {false};
if (_cargo && ((({!(isNull (_x select 0))} count fullCrew [_veh, 'turret',true])>0) || (({!(isNull (_x select 0)) && (_x select 2)>1} count fullCrew [_veh, 'cargo',true])>0))) exitWith {false};
if (!_cargo && ((count getVehicleCargo (_veh getVariable ["boxloader_rack0",objNull]))>0)) exitWith {false};
(_veh getVariable ['boxloader_rack0',objNull]) setVariable ["boxloader_dontload",!_cargo,true];
for "_x" from 2 to 15 do {_veh lockCargo [_x,_cargo];};
true
