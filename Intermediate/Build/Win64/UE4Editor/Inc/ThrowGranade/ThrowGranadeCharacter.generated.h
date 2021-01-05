// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THROWGRANADE_ThrowGranadeCharacter_generated_h
#error "ThrowGranadeCharacter.generated.h already included, missing '#pragma once' in ThrowGranadeCharacter.h"
#endif
#define THROWGRANADE_ThrowGranadeCharacter_generated_h

#define ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_SPARSE_DATA
#define ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_RPC_WRAPPERS \
	virtual bool Throw_Validate(); \
	virtual void Throw_Implementation(); \
 \
	DECLARE_FUNCTION(execThrow); \
	DECLARE_FUNCTION(execDoDamage);


#define ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Throw_Validate(); \
	virtual void Throw_Implementation(); \
 \
	DECLARE_FUNCTION(execThrow); \
	DECLARE_FUNCTION(execDoDamage);


#define ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_EVENT_PARMS
#define ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_CALLBACK_WRAPPERS
#define ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThrowGranadeCharacter(); \
	friend struct Z_Construct_UClass_AThrowGranadeCharacter_Statics; \
public: \
	DECLARE_CLASS(AThrowGranadeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThrowGranade"), NO_API) \
	DECLARE_SERIALIZER(AThrowGranadeCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsThrowing=NETFIELD_REP_START, \
		NETFIELD_REP_END=IsThrowing	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAThrowGranadeCharacter(); \
	friend struct Z_Construct_UClass_AThrowGranadeCharacter_Statics; \
public: \
	DECLARE_CLASS(AThrowGranadeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThrowGranade"), NO_API) \
	DECLARE_SERIALIZER(AThrowGranadeCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsThrowing=NETFIELD_REP_START, \
		NETFIELD_REP_END=IsThrowing	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThrowGranadeCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThrowGranadeCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThrowGranadeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThrowGranadeCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThrowGranadeCharacter(AThrowGranadeCharacter&&); \
	NO_API AThrowGranadeCharacter(const AThrowGranadeCharacter&); \
public:


#define ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThrowGranadeCharacter(AThrowGranadeCharacter&&); \
	NO_API AThrowGranadeCharacter(const AThrowGranadeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThrowGranadeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThrowGranadeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThrowGranadeCharacter)


#define ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AThrowGranadeCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AThrowGranadeCharacter, FollowCamera); }


#define ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_9_PROLOG \
	ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_EVENT_PARMS


#define ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_SPARSE_DATA \
	ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_RPC_WRAPPERS \
	ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_CALLBACK_WRAPPERS \
	ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_INCLASS \
	ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_SPARSE_DATA \
	ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_CALLBACK_WRAPPERS \
	ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THROWGRANADE_API UClass* StaticClass<class AThrowGranadeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ThrowGranade_Source_ThrowGranade_ThrowGranadeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
