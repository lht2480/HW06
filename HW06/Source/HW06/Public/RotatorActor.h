#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatorActor.generated.h"

UCLASS()
class HW06_API ARotatorActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ARotatorActor();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MovingPlatform|Components")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "MovingPlatform|Components")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, Category = "Properties")
	float RotationSpeed;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};
