// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/EstadoIrAOOrigen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoIrAOOrigen() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AEstadoIrAOOrigen_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AEstadoIrAOOrigen();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
// End Cross Module References
	void AEstadoIrAOOrigen::StaticRegisterNativesAEstadoIrAOOrigen()
	{
	}
	UClass* Z_Construct_UClass_AEstadoIrAOOrigen_NoRegister()
	{
		return AEstadoIrAOOrigen::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoIrAOOrigen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoIrAOOrigen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoIrAOOrigen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoIrAOOrigen.h" },
		{ "ModuleRelativePath", "EstadoIrAOOrigen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoIrAOOrigen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoIrAOOrigen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoIrAOOrigen_Statics::ClassParams = {
		&AEstadoIrAOOrigen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoIrAOOrigen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoIrAOOrigen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoIrAOOrigen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoIrAOOrigen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoIrAOOrigen, 4280772580);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<AEstadoIrAOOrigen>()
	{
		return AEstadoIrAOOrigen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoIrAOOrigen(Z_Construct_UClass_AEstadoIrAOOrigen, &AEstadoIrAOOrigen::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("AEstadoIrAOOrigen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoIrAOOrigen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
