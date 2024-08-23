// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContentsEnum.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUNGWOOGAME_ContentsEnum_generated_h
#error "ContentsEnum.generated.h already included, missing '#pragma once' in ContentsEnum.h"
#endif
#define SUNGWOOGAME_ContentsEnum_generated_h

#define FID_SungWooGame_Source_SungWooGame_ContentsEnum_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentsEnum(); \
	friend struct Z_Construct_UClass_UContentsEnum_Statics; \
public: \
	DECLARE_CLASS(UContentsEnum, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SungWooGame"), NO_API) \
	DECLARE_SERIALIZER(UContentsEnum)


#define FID_SungWooGame_Source_SungWooGame_ContentsEnum_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContentsEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UContentsEnum(UContentsEnum&&); \
	UContentsEnum(const UContentsEnum&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentsEnum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentsEnum); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentsEnum) \
	NO_API virtual ~UContentsEnum();


#define FID_SungWooGame_Source_SungWooGame_ContentsEnum_h_27_PROLOG
#define FID_SungWooGame_Source_SungWooGame_ContentsEnum_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SungWooGame_Source_SungWooGame_ContentsEnum_h_30_INCLASS_NO_PURE_DECLS \
	FID_SungWooGame_Source_SungWooGame_ContentsEnum_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUNGWOOGAME_API UClass* StaticClass<class UContentsEnum>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SungWooGame_Source_SungWooGame_ContentsEnum_h


#define FOREACH_ENUM_EPLAYERSTATE(op) \
	op(EPlayerState::Idle) \
	op(EPlayerState::Walk) \
	op(EPlayerState::Run) \
	op(EPlayerState::Jump) \
	op(EPlayerState::Attack) 

enum class EPlayerState : uint8;
template<> struct TIsUEnumClass<EPlayerState> { enum { Value = true }; };
template<> SUNGWOOGAME_API UEnum* StaticEnum<EPlayerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
