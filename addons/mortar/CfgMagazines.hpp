class CfgMagazines
{
	class 8Rnd_82mm_Mo_shells;
	class 8Rnd_82mm_Mo_Flare_white;
	class 8Rnd_82mm_Mo_Smoke_white;
	class CA_Magazine;

	class NDS_M_6Rnd_60mm_HE: CA_Magazine {};
    class avm224_M_6Rnd_60mm_HE_csw: NDS_M_6Rnd_60mm_HE {
        displayName = "[CSW] M768 60mm HE Charge 1 ";
		displayNameShort = "[CSW] M768 HE Chg 1";
        author = "ArmedVeteran & Neddles";
        scopeCurator = 2;
		scopeArsenal = 2;
        scope = 2;
        type = 256;
        ACE_isBelt = 1;
        count = 1;
        mass = 10;
    };

    class NDS_M_6Rnd_60mm_HE_0: NDS_M_6Rnd_60mm_HE {};
    class avm224_M_6Rnd_60mm_HE_0_csw: NDS_M_6Rnd_60mm_HE_0 {
        displayName = "[CSW] M768 60mm HE Charge 0";
		displayNameShort = "[CSW] M768 HE Chg 0";
        author = "ArmedVeteran & Neddles";
        scopeCurator = 2;
		scopeArsenal = 2;
        scope = 2;
        type = 256;
        ACE_isBelt = 1;
        count = 1;
        mass = 10;
    };

    class NDS_M_6Rnd_60mm_ILLUM: CA_Magazine {};
    class avm224_M_6Rnd_60mm_ILLUM_csw: NDS_M_6Rnd_60mm_ILLUM {
        displayName = "[CSW] M761 60mm ILLUM";
		displayNameShort = "[CSW] ILLUM";
        author = "ArmedVeteran & Neddles";
        scopeCurator = 2;
		scopeArsenal = 2;
        scope = 2;
        type = 256;
        ACE_isBelt = 1;
        count = 1;
        mass = 10;
    };

    class avm224_M_6Rnd_60mm_ILLUM_IR: NDS_M_6Rnd_60mm_ILLUM
    {
        displayName = "M761 60mm ILLUM IR";
		displayNameShort = "ILLUM IR";
        author = "ArmedVeteran & Neddles";
        scopeCurator = 2;
		scopeArsenal = 2;
        scope = 2;
        ammo = "avm224_A_60mm_ILLUM_IR";
    };

    class avm224_M_6Rnd_60mm_ILLUM_IR_csw: avm224_M_6Rnd_60mm_ILLUM_IR
    {
        displayName = "[CSW] M761 60mm ILLUM IR";
		displayNameShort = "[CSW] ILLUM IR";
        type = 256;
        ACE_isBelt = 1;
        count = 1;
        mass = 10;
    };

    class NDS_M_6Rnd_60mm_SMOKE: CA_Magazine {};
    class avm224_M_6Rnd_60mm_SMOKE_csw: NDS_M_6Rnd_60mm_SMOKE {
        displayName = "[CSW] M722 60mm WP Charge 1";
		displayNameShort = "[CSW] M722 WP Chg 1";
        author = "ArmedVeteran & Neddles";
        scopeCurator = 2;
		scopeArsenal = 2;
        scope = 2;
        type = 256;
        ACE_isBelt = 1;
        count = 1;
        mass = 10;
    };
};