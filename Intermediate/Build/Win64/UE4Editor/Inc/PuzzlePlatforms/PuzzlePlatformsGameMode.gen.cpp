// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PuzzlePlatformsGameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzlePlatformsGameMode() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_APuzzlePlatformsGameMode_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_APuzzlePlatformsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
// End Cross Module References
	void APuzzlePlatformsGameMode::StaticRegisterNativesAPuzzlePlatformsGameMode()
	{
	}
	UClass* Z_Construct_UClass_APuzzlePlatformsGameMode_NoRegister()
	{
		return APuzzlePlatformsGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_APuzzlePlatformsGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_PuzzlePlatforms();
			OuterClass = APuzzlePlatformsGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<APuzzlePlatformsGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PuzzlePlatformsGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PuzzlePlatformsGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzlePlatformsGameMode, 742764281);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzlePlatformsGameMode(Z_Construct_UClass_APuzzlePlatformsGameMode, &APuzzlePlatformsGameMode::StaticClass, TEXT("/Script/PuzzlePlatforms"), TEXT("APuzzlePlatformsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzlePlatformsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
