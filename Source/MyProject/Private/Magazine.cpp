// Fill out your copyright notice in the Description page of Project Settings.


#include "Magazine.h"
#include "MainCharacter.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "Target.h"
// Sets default values

AMagazine::AMagazine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BOX COMP"));

	// makes the box the root component and setts the size of the box 
	RootComponent = BoxComp;
	BoxComp->InitBoxExtent(FVector(10.f, 10.f, 10.f));
	
	// on box begin overlap call the function iside of this cpp 
	BoxComp->OnComponentBeginOverlap.AddDynamic(this, &AMagazine::OnOverlapStart);
}

// Called when the game starts or when spawned
void AMagazine::BeginPlay()
{
	Super::BeginPlay();



	
}

// Called every frame
void AMagazine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMagazine::OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// casts the main character to check if its the other actor if it is it assigns itself to main character 
	AMainCharacter* MainCharacter = Cast<AMainCharacter>(OtherActor);
	// if the maincharacter has a value we call the pickup magazine funtion and destory the magazine
	if (MainCharacter != nullptr)
	{
		MainCharacter->PickUpMagazine();
		Destroy();
	}

}

