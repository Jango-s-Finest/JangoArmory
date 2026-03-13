private["_escap_1"];
_escap_1 = _this select 0;
[_escap_1, [ 0,100,0 ]] remoteExec ["setVelocityModelSpace"];
[_escap_1] remoteExec ["removeAllActions"];
sleep 0.5;
[_escap_1, 0] remoteExec ["setDamage"];