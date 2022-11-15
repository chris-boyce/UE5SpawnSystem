// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5Gang/UE5GangGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5GangGameModeBase() {}
// Cross Module References
	UE5GANG_API UClass* Z_Construct_UClass_AUE5GangGameModeBase_NoRegister();
	UE5GANG_API UClass* Z_Construct_UClass_AUE5GangGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE5Gang();
// End Cross Module References
	void AUE5GangGameModeBase::StaticRegisterNativesAUE5GangGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5GangGameModeBase);
	UClass* Z_Construct_UClass_AUE5GangGameModeBase_NoRegister()
	{
		return AUE5GangGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE5GangGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5GangGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5Gang,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5GangGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5GangGameModeBase.h" },
		{ "ModuleRelativePath", "UE5GangGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5GangGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5GangGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5GangGameModeBase_Statics::ClassParams = {
		&AUE5GangGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUE5GangGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE5GangGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE5GangGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUE5GangGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5GangGameModeBase.OuterSingleton, Z_Construct_UClass_AUE5GangGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5GangGameModeBase.OuterSingleton;
	}
	template<> UE5GANG_API UClass* StaticClass<AUE5GangGameModeBase>()
	{
		return AUE5GangGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5GangGameModeBase);
	struct Z_CompiledInDeferFile_FID_UE5Gang_Source_UE5Gang_UE5GangGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Gang_Source_UE5Gang_UE5GangGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5GangGameModeBase, AUE5GangGameModeBase::StaticClass, TEXT("AUE5GangGameModeBase"), &Z_Registration_Info_UClass_AUE5GangGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5GangGameModeBase), 1514907277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Gang_Source_UE5Gang_UE5GangGameModeBase_h_236523823(TEXT("/Script/UE5Gang"),
		Z_CompiledInDeferFile_FID_UE5Gang_Source_UE5Gang_UE5GangGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Gang_Source_UE5Gang_UE5GangGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
