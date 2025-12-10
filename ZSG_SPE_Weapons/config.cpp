class CfgPatches
{
	class ZSG_SPE_Weapons
	{
		units[] = {};
		weapons[] = {"ZSG_RKM_WZ28", "ZSG_FB_WZ35_Vis"};
		requiredVersion = 0.1;
		requiredAddons[] = {"WW2_SPE_Assets_c_Weapons_InfantryWeapons_c"};
		author = "[23PzD] Jpspider";
		magazines[] = {"ZSG_20Rnd_792x57_S", "ZSG_20Rnd_792x57_SC", "ZSG_20Rnd_792x57_P", "ZSG_8Rnd_9x19_FB_Vis"};
		ammo[] = {};
	};
};

class CfgWeapons
{
	class SPE_M1918A2_BAR;
	class ZSG_RKM_WZ28: SPE_M1918A2_BAR
	{
		author = "Heavy Ordnance Works + SZG Team";
		descriptionShort = "Automatic Rifle <br/>Caliber: 7.92x57 mm Mauser";
		displayName = "Rkm Wz. 28";
		magazines[] = {"ZSG_20Rnd_792x57_S","ZSG_20Rnd_792x57_SC","ZSG_20Rnd_792x57_P"};
		magazineWell[] = {""};
	};

	class SPE_M1911;
	class ZSG_FB_WZ35_Vis: SPE_M1911
	{
		author = "Heavy Ordnance Works + SZG Team";
		descriptionShort = "Handgun <br/>Caliber: 9x19 mm";
		displayName = "FB Wz. 35 Vis";
		magazines[] = {"ZSG_8Rnd_9x19_FB_Vis"};
		magazineWell[] = {""};
	};
};

class cfgMagazines
{
	class SPE_20Rnd_762x63;
	class ZSG_20Rnd_792x57_S: SPE_20Rnd_762x63
	{
		ammo = "SPE_B_792x57_Ball_NoCartridge";
		author = "Heavy Ordnance Works + SZG Team";
		descriptionShort = "Caliber: 7.92x57 mm Mauser <br />Projectile: S Pointed Ball projectile<br />Rounds: 20<br />Type: Box Magazine<br />Used in: Rkm Wz. 28";
		displayName = "7.92x57 20Rnd Mag (S/Ball)";
	};

	class SPE_20Rnd_762x63_M1;
	class ZSG_20Rnd_792x57_SC: SPE_20Rnd_762x63_M1
	{
		ammo = "SPE_B_792x57_Ball_sS";
		author = "Heavy Ordnance Works + SZG Team";
		descriptionShort = "Caliber: 7.92x57 mm Mauser <br />Projectile: SC Pointed, Heavy Ball projectile<br />Rounds: 20<br />Type: Box Magazine<br />Used in: Rkm Wz. 28";
		displayName = "7.92x57 20Rnd Mag (SC/Ball)";
	};

	class SPE_20Rnd_762x63_M2_AP;
	class ZSG_20Rnd_792x57_P: SPE_20Rnd_762x63_M2_AP
	{
		ammo = "SPE_B_792x57_Ball_SMK";
		author = "Heavy Ordnance Works + SZG Team";
		descriptionShort = "Caliber: 7.92x57 mm Mauser <br />Projectile: P Armor-Piercing projectile<br />Rounds: 20<br />Type: Box Magazine<br />Used in: Rkm Wz. 28";
		displayName = "7.92x57 20Rnd Mag (P)";
	};

	class SPE_7Rnd_45ACP_1911;
	class ZSG_8Rnd_9x19_FB_Vis: SPE_7Rnd_45ACP_1911
	{
		ammo = "SPE_B_9x19_Ball";
		author = "Heavy Ordnance Works + SZG Team";
		descriptionShort = "Caliber: 9x19 mm <br />Projectile: 9x19 Ball projectile<br />Rounds: 8<br />Type: Box Magazine<br />Used in: FB Vis";
		displayName = "9x19 8Rnd Mag";
	};
};

class CfgAmmo
{

};