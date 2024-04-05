class CfgRecoils {
    class recoil_default;
    class ARK_MMG_recoil: recoil_default {
        kickBack[] = {0.019, 0.028};
        muzzleOuter[] = {0.35, 0.75, 0.5, 0.2};
        permanent = 0.2;
        temporary = 0.005;
    };
    class ARK_MMG_recoil_prone: ARK_MMG_recoil {
        kickBack[] = {0.005,0.02};
        muzzleOuter[] = {0.2,0.6,0.2,0.2};
        permanent = 0.005;
    };
};