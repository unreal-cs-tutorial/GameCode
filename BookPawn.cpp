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
	myShelf = -1; //Need to add a counter to keep track of shelf number the book belongs to
		      //Look at 345 code for inspiration
	myBook = -1;	      
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

bool ABookPawn::checkShelf() //Probably don't need this. Have GameMode check if books are on the right shelves
{
	if (myShelf == myBook)
	{
		return true;
	}else{
		return false;
	}
}
int ABookPawn::whereInRoom(){
	int place = -1;
	//Insert logic here
	return place;
}
