// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SungWooGame/ContentsEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentsEnum() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SUNGWOOGAME_API UClass* Z_Construct_UClass_UContentsEnum();
SUNGWOOGAME_API UClass* Z_Construct_UClass_UContentsEnum_NoRegister();
SUNGWOOGAME_API UEnum* Z_Construct_UEnum_SungWooGame_EPlayerState();
UPackage* Z_Construct_UPackage__Script_SungWooGame();
// End Cross Module References

// Begin Enum EPlayerState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerState;
static UEnum* EPlayerState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SungWooGame_EPlayerState, (UObject*)Z_Construct_UPackage__Script_SungWooGame(), TEXT("EPlayerState"));
	}
	return Z_Registration_Info_UEnum_EPlayerState.OuterSingleton;
}
template<> SUNGWOOGAME_API UEnum* StaticEnum<EPlayerState>()
{
	return EPlayerState_StaticEnum();
}
struct Z_Construct_UEnum_SungWooGame_EPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.Comment", "/**\n * \n */" },
		{ "Attack.DisplayName", "Attack" },
		{ "Attack.Name", "EPlayerState::Attack" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "Idle.Comment", "/**\n * \n */" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EPlayerState::Idle" },
		{ "Jump.Comment", "/**\n * \n */" },
		{ "Jump.DisplayName", "Jump" },
		{ "Jump.Name", "EPlayerState::Jump" },
		{ "ModuleRelativePath", "ContentsEnum.h" },
		{ "Run.Comment", "/**\n * \n */" },
		{ "Run.DisplayName", "Run" },
		{ "Run.Name", "EPlayerState::Run" },
		{ "Walk.Comment", "/**\n * \n */" },
		{ "Walk.DisplayName", "Walk" },
		{ "Walk.Name", "EPlayerState::Walk" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayerState::Idle", (int64)EPlayerState::Idle },
		{ "EPlayerState::Walk", (int64)EPlayerState::Walk },
		{ "EPlayerState::Run", (int64)EPlayerState::Run },
		{ "EPlayerState::Jump", (int64)EPlayerState::Jump },
		{ "EPlayerState::Attack", (int64)EPlayerState::Attack },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SungWooGame_EPlayerState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SungWooGame,
	nullptr,
	"EPlayerState",
	"EPlayerState",
	Z_Construct_UEnum_SungWooGame_EPlayerState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SungWooGame_EPlayerState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SungWooGame_EPlayerState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SungWooGame_EPlayerState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SungWooGame_EPlayerState()
{
	if (!Z_Registration_Info_UEnum_EPlayerState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerState.InnerSingleton, Z_Construct_UEnum_SungWooGame_EPlayerState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerState.InnerSingleton;
}
// End Enum EPlayerState

// Begin Class UContentsEnum
void UContentsEnum::StaticRegisterNativesUContentsEnum()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentsEnum);
UClass* Z_Construct_UClass_UContentsEnum_NoRegister()
{
	return UContentsEnum::StaticClass();
}
struct Z_Construct_UClass_UContentsEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ContentsEnum.h" },
		{ "ModuleRelativePath", "ContentsEnum.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentsEnum>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UContentsEnum_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SungWooGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentsEnum_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentsEnum_Statics::ClassParams = {
	&UContentsEnum::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContentsEnum_Statics::Class_MetaDataParams), Z_Construct_UClass_UContentsEnum_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UContentsEnum()
{
	if (!Z_Registration_Info_UClass_UContentsEnum.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentsEnum.OuterSingleton, Z_Construct_UClass_UContentsEnum_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UContentsEnum.OuterSingleton;
}
template<> SUNGWOOGAME_API UClass* StaticClass<UContentsEnum>()
{
	return UContentsEnum::StaticClass();
}
UContentsEnum::UContentsEnum(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UContentsEnum);
UContentsEnum::~UContentsEnum() {}
// End Class UContentsEnum

// Begin Registration
struct Z_CompiledInDeferFile_FID_SungWooGame_Source_SungWooGame_ContentsEnum_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayerState_StaticEnum, TEXT("EPlayerState"), &Z_Registration_Info_UEnum_EPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4256014931U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UContentsEnum, UContentsEnum::StaticClass, TEXT("UContentsEnum"), &Z_Registration_Info_UClass_UContentsEnum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentsEnum), 2213760554U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SungWooGame_Source_SungWooGame_ContentsEnum_h_299886492(TEXT("/Script/SungWooGame"),
	Z_CompiledInDeferFile_FID_SungWooGame_Source_SungWooGame_ContentsEnum_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SungWooGame_Source_SungWooGame_ContentsEnum_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SungWooGame_Source_SungWooGame_ContentsEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SungWooGame_Source_SungWooGame_ContentsEnum_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
