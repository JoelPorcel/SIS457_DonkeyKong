// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DONKEYKONG_USFX_Mono_generated_h
#error "Mono.generated.h already included, missing '#pragma once' in Mono.h"
#endif
#define DONKEYKONG_USFX_Mono_generated_h

#define joelP_Source_DonkeyKong_USFX_Mono_h_14_SPARSE_DATA
#define joelP_Source_DonkeyKong_USFX_Mono_h_14_RPC_WRAPPERS
#define joelP_Source_DonkeyKong_USFX_Mono_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define joelP_Source_DonkeyKong_USFX_Mono_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMono(); \
	friend struct Z_Construct_UClass_AMono_Statics; \
public: \
	DECLARE_CLASS(AMono, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong_USFX"), NO_API) \
	DECLARE_SERIALIZER(AMono)


#define joelP_Source_DonkeyKong_USFX_Mono_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMono(); \
	friend struct Z_Construct_UClass_AMono_Statics; \
public: \
	DECLARE_CLASS(AMono, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong_USFX"), NO_API) \
	DECLARE_SERIALIZER(AMono)


#define joelP_Source_DonkeyKong_USFX_Mono_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMono(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMono) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMono); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMono); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMono(AMono&&); \
	NO_API AMono(const AMono&); \
public:


#define joelP_Source_DonkeyKong_USFX_Mono_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMono(AMono&&); \
	NO_API AMono(const AMono&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMono); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMono); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMono)


#define joelP_Source_DonkeyKong_USFX_Mono_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(AMono, ProjectileClass); }


#define joelP_Source_DonkeyKong_USFX_Mono_h_11_PROLOG
#define joelP_Source_DonkeyKong_USFX_Mono_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	joelP_Source_DonkeyKong_USFX_Mono_h_14_PRIVATE_PROPERTY_OFFSET \
	joelP_Source_DonkeyKong_USFX_Mono_h_14_SPARSE_DATA \
	joelP_Source_DonkeyKong_USFX_Mono_h_14_RPC_WRAPPERS \
	joelP_Source_DonkeyKong_USFX_Mono_h_14_INCLASS \
	joelP_Source_DonkeyKong_USFX_Mono_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define joelP_Source_DonkeyKong_USFX_Mono_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	joelP_Source_DonkeyKong_USFX_Mono_h_14_PRIVATE_PROPERTY_OFFSET \
	joelP_Source_DonkeyKong_USFX_Mono_h_14_SPARSE_DATA \
	joelP_Source_DonkeyKong_USFX_Mono_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	joelP_Source_DonkeyKong_USFX_Mono_h_14_INCLASS_NO_PURE_DECLS \
	joelP_Source_DonkeyKong_USFX_Mono_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONKEYKONG_USFX_API UClass* StaticClass<class AMono>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID joelP_Source_DonkeyKong_USFX_Mono_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
