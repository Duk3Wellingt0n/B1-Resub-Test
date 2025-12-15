// Fill out your copyright notice in the Description page of Project Settings.


#include "DeathboxVersion2.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"

// Sets default values
ADeathboxVersion2::ADeathboxVersion2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BOX COMP"));

	// makes the box the root component and sets the size of the box 
	RootComponent = BoxComponent;
	BoxComponent->InitBoxExtent(FVector(10.f, 10.f, 10.f));

	// on box begin overlap call the function inside of this cpp file
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ADeathboxVersion2::OnOverlapStart);





}

// Called when the game starts or when spawned
void ADeathboxVersion2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADeathboxVersion2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
// this function is the one that i called ealier to bind to box overlap
void ADeathboxVersion2::OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{



	// get a pointer to the main character class cast to other actor which is the overlapped actor and if so make it the variable
	AMainCharacter* MainCharacter = Cast<AMainCharacter>(OtherActor);
	if(MainCharacter != nullptr)
	{
		MainCharacter->Teleport(); // get the function
		
	}


}

