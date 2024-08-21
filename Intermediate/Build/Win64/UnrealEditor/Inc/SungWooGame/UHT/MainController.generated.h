// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef SUNGWOOGAME_MainController_generated_h
#error "MainController.generated.h already included, missing '#pragma once' in MainController.h"
#endif
#define SUNGWOOGAME_MainController_generated_h

#define FID_SungWooGame_Source_SungWooGame_MainController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpace_Jump); \
	DECLARE_FUNCTION(execD_MoveRight); \
	DECLARE_FUNCTION(execA_MoveLeft); \
	DECLARE_FUNCTION(execS_MoveBack); \
	DECLARE_FUNCTION(execW_MoveFront); \
	DECLARE_FUNCTION(execMouseRotation);


#define FID_SungWooGame_Source_SungWooGame_MainController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainController(); \
	friend struct Z_Construct_UClass_AMainController_Statics; \
public: \
	DECLARE_CLASS(AMainController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SungWooGame"), NO_API) \
	DECLARE_SERIALIZER(AMainController)


#define FID_SungWooGame_Source_SungWooGame_MainController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainController(AMainController&&); \
	AMainController(const AMainController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainController) \
	NO_API virtual ~AMainController();


#define FID_SungWooGame_Source_SungWooGame_MainController_h_12_PROLOG
#define FID_SungWooGame_Source_SungWooGame_MainController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SungWooGame_Source_SungWooGame_MainController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SungWooGame_Source_SungWooGame_MainController_h_15_INCLASS_NO_PURE_DECLS \
	FID_SungWooGame_Source_SungWooGame_MainController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUNGWOOGAME_API UClass* StaticClass<class AMainController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SungWooGame_Source_SungWooGame_MainController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
