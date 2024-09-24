// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/Mono.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMono() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AMono_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AMono();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AProyectil_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMono::StaticRegisterNativesAMono()
	{
	}
	UClass* Z_Construct_UClass_AMono_NoRegister()
	{
		return AMono::StaticClass();
	}
	struct Z_Construct_UClass_AMono_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_puerta_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_puerta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMono_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMono_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Mono.h" },
		{ "ModuleRelativePath", "Mono.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMono_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Mono.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMono_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMono, ProjectileClass), Z_Construct_UClass_AProyectil_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMono_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMono_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMono_Statics::NewProp_puerta_MetaData[] = {
		{ "Category", "Mono" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Mono.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMono_Statics::NewProp_puerta = { "puerta", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMono, puerta), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMono_Statics::NewProp_puerta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMono_Statics::NewProp_puerta_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMono_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMono_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMono_Statics::NewProp_puerta,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMono_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMono>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMono_Statics::ClassParams = {
		&AMono::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMono_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMono_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMono_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMono_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMono()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMono_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMono, 4220336584);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<AMono>()
	{
		return AMono::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMono(Z_Construct_UClass_AMono, &AMono::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("AMono"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMono);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
