// Fill out your copyright notice in the Description page of Project Settings.


#include "Target.h"
#include "Magazine.h"
// Sets default values
ATarget::ATarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// setting up target
	Target = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Target"));

	Target->SetupAttachment(RootComponent);

	// set the max health 
	MaxHealth();


	
}

// Called when the game starts or when spawned
void ATarget::BeginPlay()
{
	Super::BeginPlay();
	Tags.Add(FName("Enemy"));




	


}

// Called every frame
void ATarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	// if health is too low die
}

void ATarget::SubtractHealth()
{

	// code isnt functional yet . 
	Health = Health - 50; 

}
void ATarget::MaxHealth()
{

	// code isnt functional yet . 
	Health = 100;
	// code for max health depedning on level and other things 

}

