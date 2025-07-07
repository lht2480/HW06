// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	PrimaryActorTick.bCanEverTick = true;

}

void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
	MoveDirection = MoveDirection.GetSafeNormal();
	bIsMoving = true;
}

//FVector MoveDirection = FVector(1.0f, 0.0f, 0.0f);
//
//UPROPERTY(EditAnywhere, Category = "Movement")
//float MoveSpeed = 100.0f;
//
//UPROPERTY(EditAnywhere, Category = "Movement")
//float MaxRange = 500.0f;
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsMoving)
	{
		MoveDirection *= -1;
		StartLocation = GetActorLocation();
		bIsMoving = true;
	}

	FVector CurrentLocation = GetActorLocation();
	FVector NewLocation = CurrentLocation + MoveDirection * MoveSpeed * DeltaTime;
	SetActorLocation(NewLocation);

	float TravelDistance = FVector::Dist(StartLocation, NewLocation);
	if (TravelDistance >= MaxRange)
	{
		SetActorLocation(StartLocation + MoveDirection * MaxRange);
		bIsMoving = false;
	}
}

