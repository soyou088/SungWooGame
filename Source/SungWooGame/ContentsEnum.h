// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ContentsEnum.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EPlayerState : uint8
{
	Idle UMETA(DisplayName ="Idle"),
	Walk UMETA(DisplayName = "Walk"),
	Run UMETA(DisplayName = "Run"),
	Jump UMETA(DisplayName = "Jump"),
	Attack UMETA(DisplayName = "Attack")
};





UCLASS()
class SUNGWOOGAME_API UContentsEnum : public UObject
{
	GENERATED_BODY()
	
};
