// Fill out your copyright notice in the Description page of Project Settings.

#include "Level1.h"
#include "PedestalPawn.h"


// Sets default values
APedestalPawn::APedestalPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APedestalPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APedestalPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void APedestalPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

