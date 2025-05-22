// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bloque.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABloque;
#ifdef EJ_PROTOTYPE_Bloque_generated_h
#error "Bloque.generated.h already included, missing '#pragma once' in Bloque.h"
#endif
#define EJ_PROTOTYPE_Bloque_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_EJ_Prototype_Source_EJ_Prototype_Bloque_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisplayAttributes); \
	DECLARE_FUNCTION(execClone);


#define FID_Users_samsa_Documents_Unreal_Projects_EJ_Prototype_Source_EJ_Prototype_Bloque_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABloque(); \
	friend struct Z_Construct_UClass_ABloque_Statics; \
public: \
	DECLARE_CLASS(ABloque, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/EJ_Prototype"), NO_API) \
	DECLARE_SERIALIZER(ABloque)


#define FID_Users_samsa_Documents_Unreal_Projects_EJ_Prototype_Source_EJ_Prototype_Bloque_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABloque(ABloque&&); \
	ABloque(const ABloque&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloque); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloque); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ABloque) \
	NO_API virtual ~ABloque();


#define FID_Users_samsa_Documents_Unreal_Projects_EJ_Prototype_Source_EJ_Prototype_Bloque_h_7_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_EJ_Prototype_Source_EJ_Prototype_Bloque_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_EJ_Prototype_Source_EJ_Prototype_Bloque_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_EJ_Prototype_Source_EJ_Prototype_Bloque_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_EJ_Prototype_Source_EJ_Prototype_Bloque_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EJ_PROTOTYPE_API UClass* StaticClass<class ABloque>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_EJ_Prototype_Source_EJ_Prototype_Bloque_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
