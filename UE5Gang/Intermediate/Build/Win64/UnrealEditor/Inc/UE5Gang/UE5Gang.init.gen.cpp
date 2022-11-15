// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5Gang_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UE5Gang;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UE5Gang()
	{
		if (!Z_Registration_Info_UPackage__Script_UE5Gang.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UE5Gang",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE3E5E51C,
				0x42F7DAAD,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UE5Gang.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UE5Gang.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UE5Gang(Z_Construct_UPackage__Script_UE5Gang, TEXT("/Script/UE5Gang"), Z_Registration_Info_UPackage__Script_UE5Gang, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE3E5E51C, 0x42F7DAAD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
