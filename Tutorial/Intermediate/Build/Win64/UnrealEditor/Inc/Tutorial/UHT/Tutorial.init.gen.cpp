// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorial_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Tutorial;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Tutorial()
	{
		if (!Z_Registration_Info_UPackage__Script_Tutorial.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Tutorial",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF9125177,
				0x5F3E193A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Tutorial.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Tutorial.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Tutorial(Z_Construct_UPackage__Script_Tutorial, TEXT("/Script/Tutorial"), Z_Registration_Info_UPackage__Script_Tutorial, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF9125177, 0x5F3E193A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
