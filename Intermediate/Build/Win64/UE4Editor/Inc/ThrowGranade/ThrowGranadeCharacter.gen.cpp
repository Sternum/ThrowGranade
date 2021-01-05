// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThrowGranade/ThrowGranadeCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowGranadeCharacter() {}
// Cross Module References
	THROWGRANADE_API UClass* Z_Construct_UClass_AThrowGranadeCharacter_NoRegister();
	THROWGRANADE_API UClass* Z_Construct_UClass_AThrowGranadeCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ThrowGranade();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THROWGRANADE_API UClass* Z_Construct_UClass_AGrenade_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AThrowGranadeCharacter::execThrow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Throw_Validate())
		{
			RPC_ValidateFailed(TEXT("Throw_Validate"));
			return;
		}
		P_THIS->Throw_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThrowGranadeCharacter::execDoDamage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoDamage(Z_Param_Damage);
		P_NATIVE_END;
	}
	static FName NAME_AThrowGranadeCharacter_Throw = FName(TEXT("Throw"));
	void AThrowGranadeCharacter::Throw()
	{
		ProcessEvent(FindFunctionChecked(NAME_AThrowGranadeCharacter_Throw),NULL);
	}
	void AThrowGranadeCharacter::StaticRegisterNativesAThrowGranadeCharacter()
	{
		UClass* Class = AThrowGranadeCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoDamage", &AThrowGranadeCharacter::execDoDamage },
			{ "Throw", &AThrowGranadeCharacter::execThrow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AThrowGranadeCharacter_DoDamage_Statics
	{
		struct ThrowGranadeCharacter_eventDoDamage_Parms
		{
			int32 Damage;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AThrowGranadeCharacter_DoDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowGranadeCharacter_eventDoDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowGranadeCharacter_DoDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowGranadeCharacter_DoDamage_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowGranadeCharacter_DoDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThrowGranadeCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowGranadeCharacter_DoDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowGranadeCharacter, nullptr, "DoDamage", nullptr, nullptr, sizeof(ThrowGranadeCharacter_eventDoDamage_Parms), Z_Construct_UFunction_AThrowGranadeCharacter_DoDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowGranadeCharacter_DoDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowGranadeCharacter_DoDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowGranadeCharacter_DoDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowGranadeCharacter_DoDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowGranadeCharacter_DoDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowGranadeCharacter_Throw_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowGranadeCharacter_Throw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThrowGranadeCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowGranadeCharacter_Throw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowGranadeCharacter, nullptr, "Throw", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowGranadeCharacter_Throw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowGranadeCharacter_Throw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowGranadeCharacter_Throw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowGranadeCharacter_Throw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AThrowGranadeCharacter_NoRegister()
	{
		return AThrowGranadeCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AThrowGranadeCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsThrowing_MetaData[];
#endif
		static void NewProp_IsThrowing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsThrowing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrenadePrefab_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GrenadePrefab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThrowGranadeCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ThrowGranade,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AThrowGranadeCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThrowGranadeCharacter_DoDamage, "DoDamage" }, // 1682605101
		{ &Z_Construct_UFunction_AThrowGranadeCharacter_Throw, "Throw" }, // 3333889138
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowGranadeCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ThrowGranadeCharacter.h" },
		{ "ModuleRelativePath", "ThrowGranadeCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_IsThrowing_MetaData[] = {
		{ "Category", "ThrowGranadeCharacter" },
		{ "ModuleRelativePath", "ThrowGranadeCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_IsThrowing_SetBit(void* Obj)
	{
		((AThrowGranadeCharacter*)Obj)->IsThrowing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_IsThrowing = { "IsThrowing", nullptr, (EPropertyFlags)0x0010000000020025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AThrowGranadeCharacter), &Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_IsThrowing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_IsThrowing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_IsThrowing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_GrenadePrefab_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "ThrowGranadeCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_GrenadePrefab = { "GrenadePrefab", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowGranadeCharacter, GrenadePrefab), Z_Construct_UClass_AGrenade_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_GrenadePrefab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_GrenadePrefab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ThrowGranadeCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowGranadeCharacter, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ThrowGranadeCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowGranadeCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "ThrowGranadeCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowGranadeCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "ThrowGranadeCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowGranadeCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThrowGranadeCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowGranadeCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThrowGranadeCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowGranadeCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThrowGranadeCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_IsThrowing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_GrenadePrefab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowGranadeCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThrowGranadeCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowGranadeCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThrowGranadeCharacter_Statics::ClassParams = {
		&AThrowGranadeCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AThrowGranadeCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AThrowGranadeCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThrowGranadeCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowGranadeCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThrowGranadeCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThrowGranadeCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThrowGranadeCharacter, 544816876);
	template<> THROWGRANADE_API UClass* StaticClass<AThrowGranadeCharacter>()
	{
		return AThrowGranadeCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThrowGranadeCharacter(Z_Construct_UClass_AThrowGranadeCharacter, &AThrowGranadeCharacter::StaticClass, TEXT("/Script/ThrowGranade"), TEXT("AThrowGranadeCharacter"), false, nullptr, nullptr, nullptr);

	void AThrowGranadeCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_IsThrowing(TEXT("IsThrowing"));

		const bool bIsValid = true
			&& Name_IsThrowing == ClassReps[(int32)ENetFields_Private::IsThrowing].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AThrowGranadeCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowGranadeCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
