#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {"NDS_M224_B_Ammo"};
        weapons[] = { "avm224_W_M224_mortar_carry"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Static_F","A3_Weapons_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Data_F","A3_Ui_F","A3_Data_F_ParticleEffects","A3_Weapons_F_Ammoboxes", "NDS_M224_mortar", "ace_csw", "ace_apl"};
        author = "ArmedVeteran"
        VERSION_CONFIG;
        magazines[] = {"avm224_M_6Rnd_60mm_HE_csw", "avm224_M_6Rnd_60mm_HE_0_csw", "avm224_M_6Rnd_60mm_ILLUM_csw", "avm224_M_6Rnd_60mm_ILLUM_IR", "avm224_M_6Rnd_60mm_ILLUM_IR_csw", "avm224_M_6Rnd_60mm_SMOKE_csw"};
        ammo[] = {"NDS_A_60mm_ILLUM", "avm224_A_60mm_ILLUM_IR"};
    };
};


#include "CfgWeapons.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineGroups.hpp"
#include "CfgVehicles.hpp"