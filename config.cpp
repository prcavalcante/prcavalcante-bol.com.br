class CfgPatches {
	
	class TMP_Gear{
		units[] = {
			"TMP_Combat_Uniform_Empty",
			"TMP_Combat_UniformR_Empty"
			
		};
		weapons[] = {

			"TMP_Combat_Uniform",
			"TMP_Combat_UniformR"
			
		};
		requiredVersion = 0.1;
		requiredAddons[]= {
			"A3_Characters_F"
			
		};
	};
	
};

class cfgWeapons {
	
	class Uniform_Base;
	class UniformItem;
	
	class TMP_Combat_Uniform: Uniform_Base {
		_generalMacro="TMP_Combat_Uniform";
		author="-=FerMoX=-";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Uniforme de combate";
		picture="\A3\characters_f_exp\syndikat\data\ui\icon_U_I_C_Soldier_Para_3_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={"camo","insignia"};
		hiddenSelectionsTextures[]={"\TMP_Gear\Textures\Uniforms\TMP_combat_uniform_co.paa"};
		class ItemInfo: UniformItem {
			uniformmodel="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
			uniformClass="TMP_Combat_Uniform_Empty";
			containerClass="Supply60";
			mass=40;
		};
	};
	class TMP_Combat_UniformR: Uniform_Base {
		_generalMacro="TMP_Combat_UniformR";
		author="-=FerMoX=-";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Uniforme de combate (R)";
		picture="\A3\characters_f_exp\syndikat\data\ui\icon_U_I_C_Soldier_Para_3_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={"camo","insignia"};
		hiddenSelectionsTextures[]={"\TMP_Gear\Textures\Uniforms\TMP_combat_uniform_co.paa"};
		class ItemInfo: UniformItem {
			uniformmodel="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
			uniformClass="TMP_Combat_UniformR_Empty";
			containerClass="Supply60";
			mass=40;
		};
	};

};

class CfgVehicles {

	class B_Soldier_F;
	class B_Soldier_TL_F;

	class TMP_Combat_Uniform_Empty : B_Soldier_F {
		scope = 1;
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[]={"camo","insignia"};
		hiddenSelectionsTextures[]={"\TMP_Gear\Textures\Uniforms\TMP_combat_uniform_co.paa"};
		hiddenSelectionsMaterials[] = {"\TMP_Gear\Textures\Uniforms\TMP_combat_uniform.rvmat"};
	};
	class TMP_Combat_UniformR_Empty : B_Soldier_TL_F {
		scope = 1;
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		hiddenSelections[]={"camo","insignia"};
		hiddenSelectionsTextures[]={"\TMP_Gear\Textures\Uniforms\TMP_combat_uniform_co.paa"};
		hiddenSelectionsMaterials[] = {"\TMP_Gear\Textures\Uniforms\TMP_combat_uniform.rvmat"};
	};

};
