// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CGProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CGProject()
	{
		if (!Z_Registration_Info_UPackage__Script_CGProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CGProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xFA0B9537,
				0x800C3408,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CGProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CGProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CGProject(Z_Construct_UPackage__Script_CGProject, TEXT("/Script/CGProject"), Z_Registration_Info_UPackage__Script_CGProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFA0B9537, 0x800C3408));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
