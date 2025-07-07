// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW06/Public/RotatorActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatorActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
HW06_API UClass* Z_Construct_UClass_ARotatorActor();
HW06_API UClass* Z_Construct_UClass_ARotatorActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW06();
// End Cross Module References

// Begin Class ARotatorActor
void ARotatorActor::StaticRegisterNativesARotatorActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotatorActor);
UClass* Z_Construct_UClass_ARotatorActor_NoRegister()
{
	return ARotatorActor::StaticClass();
}
struct Z_Construct_UClass_ARotatorActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RotatorActor.h" },
		{ "ModuleRelativePath", "Public/RotatorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "MovingPlatform|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotatorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "MovingPlatform|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotatorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/RotatorActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotatorActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotatorActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatorActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotatorActor_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatorActor, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotatorActor_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatorActor, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotatorActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatorActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatorActor_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatorActor_Statics::NewProp_RotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatorActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARotatorActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HW06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatorActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotatorActor_Statics::ClassParams = {
	&ARotatorActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARotatorActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARotatorActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatorActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotatorActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotatorActor()
{
	if (!Z_Registration_Info_UClass_ARotatorActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotatorActor.OuterSingleton, Z_Construct_UClass_ARotatorActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotatorActor.OuterSingleton;
}
template<> HW06_API UClass* StaticClass<ARotatorActor>()
{
	return ARotatorActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotatorActor);
ARotatorActor::~ARotatorActor() {}
// End Class ARotatorActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitClone_HW06_HW06_Source_HW06_Public_RotatorActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotatorActor, ARotatorActor::StaticClass, TEXT("ARotatorActor"), &Z_Registration_Info_UClass_ARotatorActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotatorActor), 1530298357U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitClone_HW06_HW06_Source_HW06_Public_RotatorActor_h_2502114744(TEXT("/Script/HW06"),
	Z_CompiledInDeferFile_FID_GitClone_HW06_HW06_Source_HW06_Public_RotatorActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitClone_HW06_HW06_Source_HW06_Public_RotatorActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
