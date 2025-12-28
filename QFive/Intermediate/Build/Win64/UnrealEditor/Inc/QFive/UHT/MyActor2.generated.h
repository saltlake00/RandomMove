// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyActor2.h"

#ifdef QFIVE_MyActor2_generated_h
#error "MyActor2.generated.h already included, missing '#pragma once' in MyActor2.h"
#endif
#define QFIVE_MyActor2_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMyActor2 ****************************************************************
QFIVE_API UClass* Z_Construct_UClass_AMyActor2_NoRegister();

#define FID_QFive_Source_QFive_MyActor2_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor2(); \
	friend struct Z_Construct_UClass_AMyActor2_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QFIVE_API UClass* Z_Construct_UClass_AMyActor2_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyActor2, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QFive"), Z_Construct_UClass_AMyActor2_NoRegister) \
	DECLARE_SERIALIZER(AMyActor2)


#define FID_QFive_Source_QFive_MyActor2_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyActor2(AMyActor2&&) = delete; \
	AMyActor2(const AMyActor2&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor2); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor2) \
	NO_API virtual ~AMyActor2();


#define FID_QFive_Source_QFive_MyActor2_h_9_PROLOG
#define FID_QFive_Source_QFive_MyActor2_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_QFive_Source_QFive_MyActor2_h_12_INCLASS_NO_PURE_DECLS \
	FID_QFive_Source_QFive_MyActor2_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyActor2;

// ********** End Class AMyActor2 ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_QFive_Source_QFive_MyActor2_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
