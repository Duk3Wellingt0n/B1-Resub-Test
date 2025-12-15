// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Target.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTarget() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_ATarget();
MYPROJECT_API UClass* Z_Construct_UClass_ATarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATarget ******************************************************************
void ATarget::StaticRegisterNativesATarget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATarget;
UClass* ATarget::GetPrivateStaticClass()
{
	using TClass = ATarget;
	if (!Z_Registration_Info_UClass_ATarget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Target"),
			Z_Registration_Info_UClass_ATarget.InnerSingleton,
			StaticRegisterNativesATarget,
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
	return Z_Registration_Info_UClass_ATarget.InnerSingleton;
}
UClass* Z_Construct_UClass_ATarget_NoRegister()
{
	return ATarget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Target.h" },
		{ "ModuleRelativePath", "Public/Target.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "StaticMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Target.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATarget, Target), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATarget_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATarget_Statics::ClassParams = {
	&ATarget::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::Class_MetaDataParams), Z_Construct_UClass_ATarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATarget()
{
	if (!Z_Registration_Info_UClass_ATarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATarget.OuterSingleton, Z_Construct_UClass_ATarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATarget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATarget);
ATarget::~ATarget() {}
// ********** End Class ATarget ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_comp5276140_OneDrive___Gloucestershire_College_B1_Resub_B1_OllyHepworth_Artefact_Artefact_Programmer_Artefact_Source_MyProject_Public_Target_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATarget, ATarget::StaticClass, TEXT("ATarget"), &Z_Registration_Info_UClass_ATarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATarget), 1084214676U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_comp5276140_OneDrive___Gloucestershire_College_B1_Resub_B1_OllyHepworth_Artefact_Artefact_Programmer_Artefact_Source_MyProject_Public_Target_h__Script_MyProject_828307002(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_comp5276140_OneDrive___Gloucestershire_College_B1_Resub_B1_OllyHepworth_Artefact_Artefact_Programmer_Artefact_Source_MyProject_Public_Target_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_comp5276140_OneDrive___Gloucestershire_College_B1_Resub_B1_OllyHepworth_Artefact_Artefact_Programmer_Artefact_Source_MyProject_Public_Target_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
