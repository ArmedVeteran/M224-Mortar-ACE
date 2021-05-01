class CfgAmmo
{
	class Flare_82mm_AMOS_White;
	class NDS_A_60mm_ILLUM: Flare_82mm_AMOS_White{
		intensity = 2000000;
	};
	class avm224_A_60mm_ILLUM_IR: NDS_A_60mm_ILLUM
	{
		intensity = 750000;
		nvgOnly=1;
	};
};