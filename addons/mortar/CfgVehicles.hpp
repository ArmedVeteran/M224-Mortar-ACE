class CBA_Extended_EventHandlers_base;
class CfgVehicles
{
    class NDS_M224_mortar_base;
    class NDS_M224_mortar: NDS_M224_mortar_base {
        class EventHandlers;
    };
	class avm224_M224_mortar: NDS_M224_mortar
	{
		author = "ArmedVeteran & Neddles";
		displayname = "[CSW] M224 60mm Mortar";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\z\avm224\addons\mortar\scripts\NDS_M224_init.sqf""";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class ACE_CSW {
            enabled = 1;        
            proxyWeapon = "avm224_W_M224_mortar_proxy";
            magazineLocation = "_target selectionPosition 'zbytek'";
            disassembleTo = "avm224_W_M224_mortar_carry";
			disassembleWeapon = "";
            disassembleTurret = "";
            ammoLoadTime = 2;      
            ammoUnloadTime = 2;
            desiredAmmo = 1;
        };
	};

    class B_Carryall_Base;
	class NDS_M224_B_Ammo: B_Carryall_Base
	{
		scope = 1;
		scopeCurator = 1;
    };
};