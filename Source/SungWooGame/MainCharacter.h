// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterBase.h"
#include "ContentsEnum.h"
#include "MainCharacter.generated.h"



/**
 * 
 */
UCLASS()
class SUNGWOOGAME_API AMainCharacter : public ACharacterBase
{
	GENERATED_BODY()
	
public:
	AMainCharacter();

	virtual void Tick(float DeltaTime) override;

protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(Category = "Contents", EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArmComponent = nullptr;

	UPROPERTY(Category = "Contents", EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent = nullptr;

	//UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	//EPlayerState IdleDefault = EPlayerState::Idle;

public:


	/*UFUNCTION()
	void AttackCheck();*/





};
