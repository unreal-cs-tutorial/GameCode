// Fill out your copyright notice in the Description page of Project Settings.
//All initializations go in this file

#pragma once

#include "GameFramework/Pawn.h"
#include "BookPawn.generated.h"

UCLASS()
class LEVEL1_API ABookPawn : public APawn
{
	GENERATED_BODY()

public:
	//What shelf does the book belong on	
	ShelfPawn *myShelf;
	
	// Sets default values for this pawn's properties
	ABookPawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	
	//Checks if book is on the correct shelf
	//Mostly for first level
	virtual bool checkShelf();
	
	//Return 0 for shelf; 1 for pedestal; 2 for floor; 
	virtual int whereInRoom();

	
	
};
