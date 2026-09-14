params ["_entity"];
sleep 0.01;
private _shieldhitsound =  selectRandom ["ShieldHit0","ShieldHit1","ShieldHit2","ShieldHit3","ShieldHit4"];
[_entity, [_shieldhitsound, 500, 1, 1]] remoteExec ["say3D"];
sleep 2;
deleteVehicle _entity;
