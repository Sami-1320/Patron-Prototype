// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EJ_Prototype/Bloque_Acero.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque_Acero() {}

// Begin Cross Module References
EJ_PROTOTYPE_API UClass* Z_Construct_UClass_ABloque();
EJ_PROTOTYPE_API UClass* Z_Construct_UClass_ABloque_Acero();
EJ_PROTOTYPE_API UClass* Z_Construct_UClass_ABloque_Acero_NoRegister();
UPackage* Z_Construct_UPackage__Script_EJ_Prototype();
// End Cross Module References

// Begin Class ABloque_Acero
void ABloque_Acero::StaticRegisterNativesABloque_Acero()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque_Acero);
UClass* Z_Construct_UClass_ABloque_Acero_NoRegister()
{
	return ABloque_Acero::StaticClass();
}
struct Z_Construct_UClass_ABloque_Acero_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Bloque_Acero.h" },
		{ "ModuleRelativePath", "Bloque_Acero.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque_Acero>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloque_Acero_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_EJ_Prototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Acero_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Acero_Statics::ClassParams = {
	&ABloque_Acero::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Acero_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Acero_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque_Acero()
{
	if (!Z_Registration_Info_UClass_ABloque_Acero.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque_Acero.OuterSingleton, Z_Construct_UClass_ABloque_Acero_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque_Acero.OuterSingleton;
}
template<> EJ_PROTOTYPE_API UClass* StaticClass<ABloque_Acero>()
{
	return ABloque_Acero::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque_Acero);
ABloque_Acero::~ABloque_Acero() {}
// End Class ABloque_Acero

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_EJ_Prototype_Source_EJ_Prototype_Bloque_Acero_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque_Acero, ABloque_Acero::StaticClass, TEXT("ABloque_Acero"), &Z_Registration_Info_UClass_ABloque_Acero, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque_Acero), 448011545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_EJ_Prototype_Source_EJ_Prototype_Bloque_Acero_h_659655288(TEXT("/Script/EJ_Prototype"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_EJ_Prototype_Source_EJ_Prototype_Bloque_Acero_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_EJ_Prototype_Source_EJ_Prototype_Bloque_Acero_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
