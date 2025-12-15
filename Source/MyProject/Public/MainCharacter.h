

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Components/ArrowComponent.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "DrawDebugHelpers.h"
#include "Target.h"
#include "MainCharacter.generated.h"



UCLASS()
class MYPROJECT_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;




public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera");
	UCameraComponent* CameraComponent;
	
	
	


public:
	UPROPERTY(EditAnywhere , BlueprintReadWrite , Category = "StaticMesh")
	UStaticMeshComponent* Gun;



protected:

	// movement input
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void LookUp(float AxisValue);
	void LookRight(float AxisValue);
	void StartJump();


	// dont need a bool to the function for it to work 
	void StopSprinting();
	void Reload(); 
	void Shoot();
	void Sprint();

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My Variables")
	int Ammo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My Variables")
	int Magazine;

	void PickUpMagazine();

	float DefaultSpeed = 600.0f;

	float MaxSpeed = 10000.0f;
	
	float GunRange = 10000.0f;

	void Teleport();

	UPROPERTY(BluePrintReadWrite, EditAnywhere, Category = "My Variables");
	FVector LastCheckpoint;
private:
};
