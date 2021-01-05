// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThrowGranade/ThrowGranadeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowGranadeGameMode() {}
// Cross Module References
	THROWGRANADE_API UClass* Z_Construct_UClass_AThrowGranadeGameMode_NoRegister();
	THROWGRANADE_API UClass* Z_Construct_UClass_AThrowGranadeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ThrowGranade();
// End Cross Module References
	void AThrowGranadeGameMode::StaticRegisterNativesAThrowGranadeGameMode()
	{
	}
	UClass* Z_Construct_UClass_AThrowGranadeGameMode_NoRegister()
	{
		return AThrowGranadeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AThrowGranadeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThrowGranadeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ThrowGranade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowGranadeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ThrowGranadeGameMode.h" },
		{ "ModuleRelativePath", "ThrowGranadeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThrowGranadeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowGranadeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThrowGranadeGameMode_Statics::ClassParams = {
		&AThrowGranadeGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AThrowGranadeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowGranadeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThrowGranadeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThrowGranadeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThrowGranadeGameMode, 3602096113);
	template<> THROWGRANADE_API UClass* StaticClass<AThrowGranadeGameMode>()
	{
		return AThrowGranadeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThrowGranadeGameMode(Z_Construct_UClass_AThrowGranadeGameMode, &AThrowGranadeGameMode::StaticClass, TEXT("/Script/ThrowGranade"), TEXT("AThrowGranadeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowGranadeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
