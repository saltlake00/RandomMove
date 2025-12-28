// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QFive/MyActor2.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyActor2() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
QFIVE_API UClass* Z_Construct_UClass_AMyActor2();
QFIVE_API UClass* Z_Construct_UClass_AMyActor2_NoRegister();
UPackage* Z_Construct_UPackage__Script_QFive();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyActor2 ****************************************************************
void AMyActor2::StaticRegisterNativesAMyActor2()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyActor2;
UClass* AMyActor2::GetPrivateStaticClass()
{
	using TClass = AMyActor2;
	if (!Z_Registration_Info_UClass_AMyActor2.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyActor2"),
			Z_Registration_Info_UClass_AMyActor2.InnerSingleton,
			StaticRegisterNativesAMyActor2,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMyActor2.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyActor2_NoRegister()
{
	return AMyActor2::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyActor2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor2.h" },
		{ "ModuleRelativePath", "MyActor2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyActor2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_QFive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor2_Statics::ClassParams = {
	&AMyActor2::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor2_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActor2()
{
	if (!Z_Registration_Info_UClass_AMyActor2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor2.OuterSingleton, Z_Construct_UClass_AMyActor2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActor2.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor2);
AMyActor2::~AMyActor2() {}
// ********** End Class AMyActor2 ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_QFive_Source_QFive_MyActor2_h__Script_QFive_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor2, AMyActor2::StaticClass, TEXT("AMyActor2"), &Z_Registration_Info_UClass_AMyActor2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor2), 3379381454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_QFive_Source_QFive_MyActor2_h__Script_QFive_2662073542(TEXT("/Script/QFive"),
	Z_CompiledInDeferFile_FID_QFive_Source_QFive_MyActor2_h__Script_QFive_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_QFive_Source_QFive_MyActor2_h__Script_QFive_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
