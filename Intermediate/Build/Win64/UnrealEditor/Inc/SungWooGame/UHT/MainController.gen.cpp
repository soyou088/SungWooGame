// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SungWooGame/MainController.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
SUNGWOOGAME_API UClass* Z_Construct_UClass_AMainController();
SUNGWOOGAME_API UClass* Z_Construct_UClass_AMainController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SungWooGame();
// End Cross Module References

// Begin Class AMainController Function A_MoveLeft
struct Z_Construct_UFunction_AMainController_A_MoveLeft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainController_A_MoveLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainController, nullptr, "A_MoveLeft", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainController_A_MoveLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainController_A_MoveLeft_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainController_A_MoveLeft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainController_A_MoveLeft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainController::execA_MoveLeft)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->A_MoveLeft();
	P_NATIVE_END;
}
// End Class AMainController Function A_MoveLeft

// Begin Class AMainController Function D_MoveRight
struct Z_Construct_UFunction_AMainController_D_MoveRight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainController_D_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainController, nullptr, "D_MoveRight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainController_D_MoveRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainController_D_MoveRight_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainController_D_MoveRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainController_D_MoveRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainController::execD_MoveRight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->D_MoveRight();
	P_NATIVE_END;
}
// End Class AMainController Function D_MoveRight

// Begin Class AMainController Function MouseRotation
struct Z_Construct_UFunction_AMainController_MouseRotation_Statics
{
	struct MainController_eventMouseRotation_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainController_MouseRotation_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainController_eventMouseRotation_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainController_MouseRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainController_MouseRotation_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainController_MouseRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainController_MouseRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainController, nullptr, "MouseRotation", nullptr, nullptr, Z_Construct_UFunction_AMainController_MouseRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainController_MouseRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainController_MouseRotation_Statics::MainController_eventMouseRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainController_MouseRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainController_MouseRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainController_MouseRotation_Statics::MainController_eventMouseRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainController_MouseRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainController_MouseRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainController::execMouseRotation)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MouseRotation(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class AMainController Function MouseRotation

// Begin Class AMainController Function S_MoveBack
struct Z_Construct_UFunction_AMainController_S_MoveBack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainController_S_MoveBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainController, nullptr, "S_MoveBack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainController_S_MoveBack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainController_S_MoveBack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainController_S_MoveBack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainController_S_MoveBack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainController::execS_MoveBack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->S_MoveBack();
	P_NATIVE_END;
}
// End Class AMainController Function S_MoveBack

// Begin Class AMainController Function Space_Jump
struct Z_Construct_UFunction_AMainController_Space_Jump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainController_Space_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainController, nullptr, "Space_Jump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainController_Space_Jump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainController_Space_Jump_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainController_Space_Jump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainController_Space_Jump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainController::execSpace_Jump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Space_Jump();
	P_NATIVE_END;
}
// End Class AMainController Function Space_Jump

// Begin Class AMainController Function W_MoveFront
struct Z_Construct_UFunction_AMainController_W_MoveFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainController_W_MoveFront_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainController, nullptr, "W_MoveFront", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainController_W_MoveFront_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainController_W_MoveFront_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainController_W_MoveFront()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainController_W_MoveFront_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainController::execW_MoveFront)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->W_MoveFront();
	P_NATIVE_END;
}
// End Class AMainController Function W_MoveFront

// Begin Class AMainController
void AMainController::StaticRegisterNativesAMainController()
{
	UClass* Class = AMainController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "A_MoveLeft", &AMainController::execA_MoveLeft },
		{ "D_MoveRight", &AMainController::execD_MoveRight },
		{ "MouseRotation", &AMainController::execMouseRotation },
		{ "S_MoveBack", &AMainController::execS_MoveBack },
		{ "Space_Jump", &AMainController::execSpace_Jump },
		{ "W_MoveFront", &AMainController::execW_MoveFront },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainController);
UClass* Z_Construct_UClass_AMainController_NoRegister()
{
	return AMainController::StaticClass();
}
struct Z_Construct_UClass_AMainController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MainController.h" },
		{ "ModuleRelativePath", "MainController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainController_A_MoveLeft, "A_MoveLeft" }, // 1406227364
		{ &Z_Construct_UFunction_AMainController_D_MoveRight, "D_MoveRight" }, // 434420290
		{ &Z_Construct_UFunction_AMainController_MouseRotation, "MouseRotation" }, // 301817147
		{ &Z_Construct_UFunction_AMainController_S_MoveBack, "S_MoveBack" }, // 2280391400
		{ &Z_Construct_UFunction_AMainController_Space_Jump, "Space_Jump" }, // 4144667196
		{ &Z_Construct_UFunction_AMainController_W_MoveFront, "W_MoveFront" }, // 3111119848
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMainController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SungWooGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainController_Statics::ClassParams = {
	&AMainController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainController()
{
	if (!Z_Registration_Info_UClass_AMainController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainController.OuterSingleton, Z_Construct_UClass_AMainController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainController.OuterSingleton;
}
template<> SUNGWOOGAME_API UClass* StaticClass<AMainController>()
{
	return AMainController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainController);
AMainController::~AMainController() {}
// End Class AMainController

// Begin Registration
struct Z_CompiledInDeferFile_FID_SungWooGame_Source_SungWooGame_MainController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainController, AMainController::StaticClass, TEXT("AMainController"), &Z_Registration_Info_UClass_AMainController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainController), 810121485U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SungWooGame_Source_SungWooGame_MainController_h_2060090700(TEXT("/Script/SungWooGame"),
	Z_CompiledInDeferFile_FID_SungWooGame_Source_SungWooGame_MainController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SungWooGame_Source_SungWooGame_MainController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
