class CfgWeapons
{
    class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };
    
	class mortar_82mm;
	class NDS_W_M224_mortar: mortar_82mm {
		magazines[] = 
		{
			"NDS_M_6Rnd_60mm_HE",
			"NDS_M_6Rnd_60mm_HE_0",
			"NDS_M_6Rnd_60mm_ILLUM",
			"avm224_M_6Rnd_60mm_ILLUM_IR",
			"NDS_M_6Rnd_60mm_SMOKE"
		};
	};

    class avm224_W_M224_mortar_proxy: NDS_W_M224_mortar {
        magazineReloadTime = 0.5;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
			1,
			1,
			20
		};
    };

    class avm224_W_M224_mortar_carry: Launcher_Base_F {
        scopeCurator = 2;
		scopeArsenal = 2;
        scope = 2;
        modes[] = {};
        displayName = "[CSW] M224 60mm Mortar";
        author = "ArmedVeteran & Neddles";
		model = "\z\ace\addons\apl\ACE_CSW_Bag.p3d";
		picture = "NDS_M224_mortar\cannon\data\ui\NDS_M224_icon_ca.paa";

        class ACE_CSW {
            type = "mount";
            deployTime = 2;  
            pickupTime = 2;
            deploy = "avm224_M224_mortar";
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
            mass = 463;
        };
    };
};