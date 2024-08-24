// Fill out your copyright notice in the Description page of Project Settings.


#include "MainController.h"
#include "MainCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnhancedInputComponent.h"

AMainController::AMainController()
{
}

void AMainController::BeginPlay()
{
	Super::BeginPlay();
	int a = 0;

}

void AMainController::MouseRotation(const FInputActionValue& Value)
{
	FVector2D MouseXY = Value.Get<FVector2D>();
	AddYawInput(MouseXY.X);
	AddPitchInput(MouseXY.Y);

}

void AMainController::W_MoveFront()
{
	FVector Forward = GetPawn()->GetActorForwardVector();
	GetPawn()->AddMovementInput(Forward);

}

void AMainController::S_MoveBack()
{
	FVector Back = GetPawn()->GetActorForwardVector();
	GetPawn()->AddMovementInput(-Back);
}

void AMainController::A_MoveLeft()
{
	FVector Left = GetPawn()->GetActorRightVector();
	GetPawn()->AddMovementInput(-Left);
}

void AMainController::D_MoveRight()
{
	FVector Right = GetPawn()->GetActorRightVector();
	GetPawn()->AddMovementInput(Right);
}

void AMainController::Space_Jump()
{
	ACharacter* JCharacter = Cast<ACharacter>(GetPawn());
	JCharacter->Jump();
}

void AMainController::E_PickedUp()
{
	AMainCharacter* Ch = GetPawn<AMainCharacter>();
	if (nullptr == Ch)
	{
		return;
	}
}

void AMainController::MouseLeft_AttackStart()
{
	//AMainCharacter* Ch = GetPawn<AMainCharacter>();
	//if (nullptr == Ch)
	//{
	//	return;
	//}
	//Ch->AttackCheck();


}

void AMainController::MouseLeft_AttackTick(float _DeltaTime)
{
	//AMainCharacter* Ch = GetPawn<AMainCharacter>();
	//if (nullptr == Ch)
	//{
	//	return;
	//}

}

