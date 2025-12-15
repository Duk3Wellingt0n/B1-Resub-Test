// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainCharacter.h"
#include "GameFramework/Actor.h"
#include "DeathboxVersion2.generated.h"

UCLASS()
class MYPROJECT_API ADeathboxVersion2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADeathboxVersion2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// overlap start function
	UFUNCTION() void OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// box compoent for overlap
	UPROPERTY(BlueprintReadWrite , VisibleAnywhere, Category = "Collision")
	class UBoxComponent* BoxComponent;
	








};
