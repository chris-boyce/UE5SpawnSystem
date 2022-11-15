// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5Gang/Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest() {}
// Cross Module References
	UE5GANG_API UClass* Z_Construct_UClass_ATest_NoRegister();
	UE5GANG_API UClass* Z_Construct_UClass_ATest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE5Gang();
// End Cross Module References
	void ATest::StaticRegisterNativesATest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATest);
	UClass* Z_Construct_UClass_ATest_NoRegister()
	{
		return ATest::StaticClass();
	}
	struct Z_Construct_UClass_ATest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5Gang,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Test.h" },
		{ "ModuleRelativePath", "Test.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATest_Statics::ClassParams = {
		&ATest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATest()
	{
		if (!Z_Registration_Info_UClass_ATest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATest.OuterSingleton, Z_Construct_UClass_ATest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATest.OuterSingleton;
	}
	template<> UE5GANG_API UClass* StaticClass<ATest>()
	{
		return ATest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATest);
	struct Z_CompiledInDeferFile_FID_UE5Gang_Source_UE5Gang_Test_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Gang_Source_UE5Gang_Test_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATest, ATest::StaticClass, TEXT("ATest"), &Z_Registration_Info_UClass_ATest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATest), 1816160723U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Gang_Source_UE5Gang_Test_h_683761956(TEXT("/Script/UE5Gang"),
		Z_CompiledInDeferFile_FID_UE5Gang_Source_UE5Gang_Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Gang_Source_UE5Gang_Test_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
