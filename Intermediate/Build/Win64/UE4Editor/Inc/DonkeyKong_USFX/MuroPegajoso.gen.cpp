// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/MuroPegajoso.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroPegajoso() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AMuroPegajoso_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AMuroPegajoso();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
// End Cross Module References
	void AMuroPegajoso::StaticRegisterNativesAMuroPegajoso()
	{
	}
	UClass* Z_Construct_UClass_AMuroPegajoso_NoRegister()
	{
		return AMuroPegajoso::StaticClass();
	}
	struct Z_Construct_UClass_AMuroPegajoso_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroPegajoso_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroPegajoso_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MuroPegajoso.h" },
		{ "ModuleRelativePath", "MuroPegajoso.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroPegajoso_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroPegajoso>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroPegajoso_Statics::ClassParams = {
		&AMuroPegajoso::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMuroPegajoso_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroPegajoso_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroPegajoso()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroPegajoso_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroPegajoso, 3575543965);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<AMuroPegajoso>()
	{
		return AMuroPegajoso::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroPegajoso(Z_Construct_UClass_AMuroPegajoso, &AMuroPegajoso::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("AMuroPegajoso"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroPegajoso);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
