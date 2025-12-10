class CfgPatches
{
	class ZSG_SPE_Weapons
	{
		units[] = {};
		weapons[] = {"ZSG_RKM_WZ28", "ZSG_FB_WZ35_Vis", "ZSG_KBK_WZ29"};
		requiredVersion = 0.1;
		requiredAddons[] = {"WW2_SPE_Assets_c_Weapons_InfantryWeapons_c"};
		author = "[23PzD] Jpspider";
		magazines[] = {"ZSG_20Rnd_792x57_S", "ZSG_20Rnd_792x57_SC", "ZSG_20Rnd_792x57_P", "ZSG_8Rnd_9x19_FB_Vis", "ZSG_WZ24", "ZSG_WZ33"};
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

	class SPE_K98;
	class ZSG_KBK_WZ29: SPE_K98
	{
		author = "Heavy Ordnance Works + SZG Team";
		descriptionShort = "Bolt-Action Rifle<br />Caliber: 7.92x57 mm Mauser";
		displayName = "KbK Wz. 29";
	};

	class GrenadeLauncher;
	class Throw : GrenadeLauncher 
	{
		muzzles[] += {"ZSG_WZ24_Muzzle","ZSG_WZ33_Muzzle"};
		class ThrowMuzzle: GrenadeLauncher{};
		class ZSG_WZ24_Muzzle: ThrowMuzzle
		{
			magazines[] = {"ZSG_WZ24"};
		};
		class ZSG_WZ33_Muzzle: ThrowMuzzle
		{
			magazines[] = {"ZSG_WZ33"};
		};
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

	class SPE_M39;
	class ZSG_WZ24: SPE_M39
	{
		ammo = "SPE_M39";
		author = "Heavy Ordnance Works + SZG Team";
		descriptionShort = "Type: Offensive Grenade<br />Rounds: 1<br />Used in: Hand";
		displayName = "Concussion Grenade Wz. 24";
		displayNameShort = "Wz. 24 (HE)";
	};

	class NORTH_F1Grenade_mag;
	class ZSG_WZ33: NORTH_F1Grenade_mag
	{
		author = "Northern Fronts Mod + SZG Team";
		descriptionShort = "Type: Defensive Grenade, Fragmentation<br />Rounds: 1<br />Used in: Hand";
		displayName = "Fragmentation Grenade Wz. 33";
		displayNameShort = "Wz. 33 (FRAG)";
	};
};

class CfgAmmo
{

};