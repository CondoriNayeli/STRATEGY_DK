// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/EstadoCaer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoCaer() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AEstadoCaer_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AEstadoCaer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
// End Cross Module References
	void AEstadoCaer::StaticRegisterNativesAEstadoCaer()
	{
	}
	UClass* Z_Construct_UClass_AEstadoCaer_NoRegister()
	{
		return AEstadoCaer::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoCaer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoCaer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoCaer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoCaer.h" },
		{ "ModuleRelativePath", "EstadoCaer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoCaer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoCaer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoCaer_Statics::ClassParams = {
		&AEstadoCaer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoCaer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoCaer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoCaer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoCaer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoCaer, 2447498285);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<AEstadoCaer>()
	{
		return AEstadoCaer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoCaer(Z_Construct_UClass_AEstadoCaer, &AEstadoCaer::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("AEstadoCaer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoCaer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
