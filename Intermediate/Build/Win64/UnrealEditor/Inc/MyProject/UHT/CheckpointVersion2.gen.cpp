// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CheckpointVersion2.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCheckpointVersion2() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MYPROJECT_API UClass* Z_Construct_UClass_ACheckpointVersion2();
MYPROJECT_API UClass* Z_Construct_UClass_ACheckpointVersion2_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACheckpointVersion2 Function OnOverlapStart ******************************
struct Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics
{
	struct CheckpointVersion2_eventOnOverlapStart_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//overlap start function\n" },
#endif
		{ "ModuleRelativePath", "Public/CheckpointVersion2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "overlap start function" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheckpointVersion2_eventOnOverlapStart_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheckpointVersion2_eventOnOverlapStart_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheckpointVersion2_eventOnOverlapStart_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheckpointVersion2_eventOnOverlapStart_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((CheckpointVersion2_eventOnOverlapStart_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CheckpointVersion2_eventOnOverlapStart_Parms), &Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheckpointVersion2_eventOnOverlapStart_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACheckpointVersion2, nullptr, "OnOverlapStart", Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::CheckpointVersion2_eventOnOverlapStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::CheckpointVersion2_eventOnOverlapStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACheckpointVersion2::execOnOverlapStart)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapStart(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ACheckpointVersion2 Function OnOverlapStart ********************************

// ********** Begin Class ACheckpointVersion2 ******************************************************
void ACheckpointVersion2::StaticRegisterNativesACheckpointVersion2()
{
	UClass* Class = ACheckpointVersion2::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapStart", &ACheckpointVersion2::execOnOverlapStart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACheckpointVersion2;
UClass* ACheckpointVersion2::GetPrivateStaticClass()
{
	using TClass = ACheckpointVersion2;
	if (!Z_Registration_Info_UClass_ACheckpointVersion2.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CheckpointVersion2"),
			Z_Registration_Info_UClass_ACheckpointVersion2.InnerSingleton,
			StaticRegisterNativesACheckpointVersion2,
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
	return Z_Registration_Info_UClass_ACheckpointVersion2.InnerSingleton;
}
UClass* Z_Construct_UClass_ACheckpointVersion2_NoRegister()
{
	return ACheckpointVersion2::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACheckpointVersion2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CheckpointVersion2.h" },
		{ "ModuleRelativePath", "Public/CheckpointVersion2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// box component we overlap with \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CheckpointVersion2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "box component we overlap with" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACheckpointVersion2_OnOverlapStart, "OnOverlapStart" }, // 317644303
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACheckpointVersion2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpointVersion2_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpointVersion2, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComponent_MetaData), NewProp_BoxComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACheckpointVersion2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointVersion2_Statics::NewProp_BoxComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpointVersion2_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACheckpointVersion2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpointVersion2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACheckpointVersion2_Statics::ClassParams = {
	&ACheckpointVersion2::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACheckpointVersion2_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpointVersion2_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpointVersion2_Statics::Class_MetaDataParams), Z_Construct_UClass_ACheckpointVersion2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACheckpointVersion2()
{
	if (!Z_Registration_Info_UClass_ACheckpointVersion2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACheckpointVersion2.OuterSingleton, Z_Construct_UClass_ACheckpointVersion2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACheckpointVersion2.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACheckpointVersion2);
ACheckpointVersion2::~ACheckpointVersion2() {}
// ********** End Class ACheckpointVersion2 ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_comp5276140_OneDrive___Gloucestershire_College_B1_Resub_B1_OllyHepworth_Artefact_Artefact_Programmer_Artefact_Source_MyProject_Public_CheckpointVersion2_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACheckpointVersion2, ACheckpointVersion2::StaticClass, TEXT("ACheckpointVersion2"), &Z_Registration_Info_UClass_ACheckpointVersion2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACheckpointVersion2), 2431201010U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_comp5276140_OneDrive___Gloucestershire_College_B1_Resub_B1_OllyHepworth_Artefact_Artefact_Programmer_Artefact_Source_MyProject_Public_CheckpointVersion2_h__Script_MyProject_1024608884(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_comp5276140_OneDrive___Gloucestershire_College_B1_Resub_B1_OllyHepworth_Artefact_Artefact_Programmer_Artefact_Source_MyProject_Public_CheckpointVersion2_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_comp5276140_OneDrive___Gloucestershire_College_B1_Resub_B1_OllyHepworth_Artefact_Artefact_Programmer_Artefact_Source_MyProject_Public_CheckpointVersion2_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
