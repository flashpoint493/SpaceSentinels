// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "Resettable.h"


// Sets default values
AResettable::AResettable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AResettable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AResettable::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void AResettable::reset()
{

}
