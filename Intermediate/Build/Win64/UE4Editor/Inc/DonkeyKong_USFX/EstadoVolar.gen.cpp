// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/EstadoVolar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoVolar() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AEstadoVolar_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AEstadoVolar();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
// End Cross Module References
	void AEstadoVolar::StaticRegisterNativesAEstadoVolar()
	{
	}
	UClass* Z_Construct_UClass_AEstadoVolar_NoRegister()
	{
		return AEstadoVolar::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoVolar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoVolar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoVolar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoVolar.h" },
		{ "ModuleRelativePath", "EstadoVolar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoVolar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoVolar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoVolar_Statics::ClassParams = {
		&AEstadoVolar::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoVolar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoVolar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoVolar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoVolar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoVolar, 3104987883);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<AEstadoVolar>()
	{
		return AEstadoVolar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoVolar(Z_Construct_UClass_AEstadoVolar, &AEstadoVolar::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("AEstadoVolar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoVolar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
