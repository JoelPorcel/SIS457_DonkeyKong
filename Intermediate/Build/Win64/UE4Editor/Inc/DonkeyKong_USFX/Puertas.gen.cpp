// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/Puertas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuertas() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_APuertas_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_APuertas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APuertas::StaticRegisterNativesAPuertas()
	{
	}
	UClass* Z_Construct_UClass_APuertas_NoRegister()
	{
		return APuertas::StaticClass();
	}
	struct Z_Construct_UClass_APuertas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_puerta_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_puerta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuertas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuertas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Puertas.h" },
		{ "ModuleRelativePath", "Puertas.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuertas_Statics::NewProp_puerta_MetaData[] = {
		{ "Category", "Puertas" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Puertas.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuertas_Statics::NewProp_puerta = { "puerta", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuertas, puerta), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APuertas_Statics::NewProp_puerta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuertas_Statics::NewProp_puerta_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuertas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuertas_Statics::NewProp_puerta,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuertas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuertas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuertas_Statics::ClassParams = {
		&APuertas::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APuertas_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APuertas_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APuertas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuertas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuertas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuertas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuertas, 2152275849);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<APuertas>()
	{
		return APuertas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuertas(Z_Construct_UClass_APuertas, &APuertas::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("APuertas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuertas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
