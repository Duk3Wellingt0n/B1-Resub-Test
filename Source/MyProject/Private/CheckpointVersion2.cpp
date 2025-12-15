// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckpointVersion2.h"
#include "Components/BoxComponent.h"
#include "MainCharacter.h"
#include "Engine/Engine.h"

// Sets default values
ACheckpointVersion2::ACheckpointVersion2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BOX COMP"));

	// makes the box the root component and setts the size of the box 
	RootComponent = BoxComponent;
	BoxComponent->InitBoxExtent(FVector(10.f, 10.f, 10.f));

	// on box begin overlap call the function iside of this cpp 
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ACheckpointVersion2::OnOverlapStart);
}

// Called when the game starts or when spawned
void ACheckpointVersion2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACheckpointVersion2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
// called early in this file to bind to box overlap
void ACheckpointVersion2::OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// get a pointer to the main character class cast to other actor which is the overlapped actor and if so make it the variable
	AMainCharacter* MainCharacter = Cast<AMainCharacter>(OtherActor);
	
	if (MainCharacter != nullptr) 
	{
		// set the last checkpoint location
		MainCharacter->LastCheckpoint = GetActorLocation();
	}


}

