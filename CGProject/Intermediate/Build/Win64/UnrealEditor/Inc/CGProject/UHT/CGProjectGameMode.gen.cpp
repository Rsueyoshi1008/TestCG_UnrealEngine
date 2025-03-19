// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CGProject/CGProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGProjectGameMode() {}

// Begin Cross Module References
CGPROJECT_API UClass* Z_Construct_UClass_ACGProjectGameMode();
CGPROJECT_API UClass* Z_Construct_UClass_ACGProjectGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CGProject();
// End Cross Module References

// Begin Class ACGProjectGameMode
void ACGProjectGameMode::StaticRegisterNativesACGProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACGProjectGameMode);
UClass* Z_Construct_UClass_ACGProjectGameMode_NoRegister()
{
	return ACGProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_ACGProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CGProjectGameMode.h" },
		{ "ModuleRelativePath", "CGProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACGProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CGProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACGProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACGProjectGameMode_Statics::ClassParams = {
	&ACGProjectGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACGProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACGProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACGProjectGameMode()
{
	if (!Z_Registration_Info_UClass_ACGProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACGProjectGameMode.OuterSingleton, Z_Construct_UClass_ACGProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACGProjectGameMode.OuterSingleton;
}
template<> CGPROJECT_API UClass* StaticClass<ACGProjectGameMode>()
{
	return ACGProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACGProjectGameMode);
ACGProjectGameMode::~ACGProjectGameMode() {}
// End Class ACGProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_GODof_LocalRepository_TestCG_UnrealEngine_CGProject_Source_CGProject_CGProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACGProjectGameMode, ACGProjectGameMode::StaticClass, TEXT("ACGProjectGameMode"), &Z_Registration_Info_UClass_ACGProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACGProjectGameMode), 639807637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GODof_LocalRepository_TestCG_UnrealEngine_CGProject_Source_CGProject_CGProjectGameMode_h_3019826416(TEXT("/Script/CGProject"),
	Z_CompiledInDeferFile_FID_Users_GODof_LocalRepository_TestCG_UnrealEngine_CGProject_Source_CGProject_CGProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GODof_LocalRepository_TestCG_UnrealEngine_CGProject_Source_CGProject_CGProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
