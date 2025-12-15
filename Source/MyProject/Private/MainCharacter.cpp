// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// setting up a c++ camera specfically 
	
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	
	CameraComponent->SetupAttachment(RootComponent);
	
	CameraComponent->bUsePawnControlRotation = true;

	GetCharacterMovement()->MaxWalkSpeed = DefaultSpeed;

	

	// setting Up Gun 

	Gun = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GUN")); 

	Gun->SetupAttachment(CameraComponent);


	// gave magazine a hard coded default can always change 
	Magazine = 7;

}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
/// Setup The player input components axis for movement and actions for true/false pressed/released 
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// setting up player input component 


	// axis input binding 
	PlayerInputComponent->BindAxis("MoveForward", this, &AMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &AMainCharacter::LookUp);
	PlayerInputComponent->BindAxis("LookRight", this, &AMainCharacter::LookRight);


	// Action input binding 
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMainCharacter::StartJump);
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &AMainCharacter::Shoot); 
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AMainCharacter::Sprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AMainCharacter::StopSprinting);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AMainCharacter::Reload);

}
// simple input controls
void AMainCharacter::MoveForward(float AxisValue) 
{
	AddMovementInput(GetActorForwardVector() * AxisValue );


}
void AMainCharacter::MoveRight(float AxisValue) 
{
	AddMovementInput(GetActorRightVector() * AxisValue );

}
void AMainCharacter::LookUp(float AxisValue) 
{
	AddControllerPitchInput(AxisValue );

}
void AMainCharacter::LookRight(float AxisValue)
{
	AddControllerYawInput(AxisValue );
}
void AMainCharacter::StartJump()
{
	Jump();
}
void AMainCharacter::Shoot()
{


	if (Ammo > 0 && Magazine >=0) {
		// storing what we have hit in a variable and getting the start point for our line trace
		FHitResult OutHit;
		// we are getting the camera component postion as our start position and could always change it  
		FVector StartPoint = CameraComponent->GetComponentLocation();

		// Get the fowawrd Vector of the camera component as we will need it for the line trace endpoint 
		FVector ForwardVector = CameraComponent->GetForwardVector();

		// get the endpoint by geting the forward Vector multiply it by the range you want the 
		FVector EndPoint = ((ForwardVector * GunRange) + StartPoint);


		// We give our collision parameters a varaible and we add ourself to the ignore list because we dont want to hit the player itself
		FCollisionQueryParams CollisionsParams;
		CollisionsParams.AddIgnoredActor(this);

		/*
			Here is where we perform the line trace we give it the start point , end point outhit and collsion channel and collision params
		*/

		GetWorld()->LineTraceSingleByChannel(OutHit, StartPoint, EndPoint, ECC_WorldStatic, CollisionsParams);


		// We have a Actor class called hit Actor which is the outhit actor 

		AActor* HitActor = OutHit.GetActor();


		// draw a debug line to visualise our line trace

		DrawDebugLine(GetWorld(), StartPoint, EndPoint, FColor::Red, true, 0, 2.0f);

		// if statement in 
		

		// we check the hit actor for it existing 
		if (HitActor != NULL )
		{
			
			// create a bool to check if hit actor has tag 		
			bool RightActor = HitActor->ActorHasTag(FName("Enemy"));


			// destory hit actor if it has correct tag 

			if (RightActor)
			{

				
				
				HitActor->Destroy();
				 
				
			}
		
		
		}
		
		// we deincriment the ammo so when you shoot you lose ammo . 
		--Ammo;

	}
}
void AMainCharacter::PickUpMagazine()
{
	Magazine = Magazine + 1;



}
void AMainCharacter::Teleport()
{
		
	SetActorLocation(LastCheckpoint);

}

void AMainCharacter::Reload()
{
	
	
	if (Magazine > 0) {
		
		Ammo = 30;
		Magazine = Magazine - 1;
	}
}
void AMainCharacter::Sprint()
{
	

	GetCharacterMovement()->MaxWalkSpeed = MaxSpeed;
}
void AMainCharacter::StopSprinting()
{
	 if (GetCharacterMovement()->MaxWalkSpeed > DefaultSpeed) 
	{
		 GetCharacterMovement()->MaxWalkSpeed = DefaultSpeed;
	}
}




