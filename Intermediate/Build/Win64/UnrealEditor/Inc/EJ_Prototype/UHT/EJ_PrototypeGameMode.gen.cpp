// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EJ_Prototype/EJ_PrototypeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEJ_PrototypeGameMode() {}

// Begin Cross Module References
EJ_PROTOTYPE_API UClass* Z_Construct_UClass_AEJ_PrototypeGameMode();
EJ_PROTOTYPE_API UClass* Z_Construct_UClass_AEJ_PrototypeGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_EJ_Prototype();
// End Cross Module References

// Begin Class AEJ_PrototypeGameMode
void AEJ_PrototypeGameMode::StaticRegisterNativesAEJ_PrototypeGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEJ_PrototypeGameMode);
UClass* Z_Construct_UClass_AEJ_PrototypeGameMode_NoRegister()
{
	return AEJ_PrototypeGameMode::StaticClass();
}
struct Z_Construct_UClass_AEJ_PrototypeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EJ_PrototypeGameMode.h" },
		{ "ModuleRelativePath", "EJ_PrototypeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEJ_PrototypeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEJ_PrototypeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EJ_Prototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEJ_PrototypeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEJ_PrototypeGameMode_Statics::ClassParams = {
	&AEJ_PrototypeGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEJ_PrototypeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AEJ_PrototypeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEJ_PrototypeGameMode()
{
	if (!Z_Registration_Info_UClass_AEJ_PrototypeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEJ_PrototypeGameMode.OuterSingleton, Z_Construct_UClass_AEJ_PrototypeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEJ_PrototypeGameMode.OuterSingleton;
}
template<> EJ_PROTOTYPE_API UClass* StaticClass<AEJ_PrototypeGameMode>()
{
	return AEJ_PrototypeGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEJ_PrototypeGameMode);
AEJ_PrototypeGameMode::~AEJ_PrototypeGameMode() {}
// End Class AEJ_PrototypeGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_EJ_Prototype_Source_EJ_Prototype_EJ_PrototypeGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEJ_PrototypeGameMode, AEJ_PrototypeGameMode::StaticClass, TEXT("AEJ_PrototypeGameMode"), &Z_Registration_Info_UClass_AEJ_PrototypeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEJ_PrototypeGameMode), 2946425692U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_EJ_Prototype_Source_EJ_Prototype_EJ_PrototypeGameMode_h_3055617618(TEXT("/Script/EJ_Prototype"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_EJ_Prototype_Source_EJ_Prototype_EJ_PrototypeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_EJ_Prototype_Source_EJ_Prototype_EJ_PrototypeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
