// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainController.generated.h"

/**
 * 
 */
UCLASS()
class SUNGWOOGAME_API AMainController : public APlayerController
{
	GENERATED_BODY()

public:
	AMainController();
protected:
	void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable)
	void MouseRotation(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable)
	void W_MoveFront();
	
	UFUNCTION(BlueprintCallable)
	void S_MoveBack();
	
	UFUNCTION(BlueprintCallable)
	void A_MoveLeft();

	UFUNCTION(BlueprintCallable)
	void D_MoveRight();

	UFUNCTION(BlueprintCallable)
	void Space_Jump();
	


};
