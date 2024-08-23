// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "ContentsEnum.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


AMainCharacter::AMainCharacter()
{
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->TargetArmLength = 400.0f;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CAmeraComponent"));
	CameraComponent->SetupAttachment(SpringArmComponent);

}

void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
}

//void AMainCharacter::AttackCheck()
//{
//	//switch (IdleDefault)
//	//{
//	//case EPlayerState::Idle:
//	//	
//	//default:
//	//	break;
//	//}
//}
