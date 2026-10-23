class HTL_CiP_DeployStand: Default {
    file = "htl_cip_quad_cannon\anim\gesture_deploy_stand.rtm";
    looped = 0;
    speed = 0.285714;
    mask = "HTL_CiP_SwingMask";
    interpolationSpeed = 4;
    disableWeapons = 1;
    disableWeaponsLong = 1;
    enableOptics = 0;
    canPullTrigger = 0;
    showWeaponAim = 0;
    leftHandIKCurve[] = {0.0000, 0, 0.8286, 0, 0.8714, 1};
    rightHandIKCurve[] = {0.0000, 0, 0.8286, 0, 0.8714, 1};
};
class HTL_CiP_DeployCrouch: HTL_CiP_DeployStand {
    file = "htl_cip_quad_cannon\anim\gesture_deploy_crouch.rtm";
};
class HTL_CiP_StowStand: HTL_CiP_DeployStand {
    file = "htl_cip_quad_cannon\anim\gesture_stow_stand.rtm";
    leftHandIKCurve[] = {0.0000, 1, 0.1429, 1, 0.1857, 0};
    rightHandIKCurve[] = {0.0000, 1, 0.1429, 1, 0.1857, 0};
};
class HTL_CiP_StowCrouch: HTL_CiP_StowStand {
    file = "htl_cip_quad_cannon\anim\gesture_stow_crouch.rtm";
};
