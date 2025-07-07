// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class HW06_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MovingPlatform|Components")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "MovingPlatform|Components")
	UStaticMeshComponent* StaticMeshComp;

	FVector StartLocation;

	UPROPERTY(EditAnywhere, Category = "Movement")
	FVector MoveDirection = FVector(1.0f, 0.0f, 0.0f);

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MoveSpeed = 150.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MaxRange = 500.0f;

	bool bIsMoving = true;
	virtual void BeginPlay() override;
};
