// Fill out your copyright notice in the Description page of Project Settings.

//All functionality goes in this files

#include "Level1.h"
#include "BookPawn.h"


// Sets default values
ABookPawn::ABookPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABookPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABookPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ABookPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

