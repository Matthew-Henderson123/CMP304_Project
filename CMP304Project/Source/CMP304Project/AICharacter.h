// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Components/CapsuleComponent.h"
#include "AIController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AICharacter.generated.h"

UCLASS()
class CMP304PROJECT_API AAICharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAICharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly)
	class UBehaviorTree* BT;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	//Creates the meshes to be used
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* SphereMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ConeMesh;

	//Creates the locations and rotations for the new AI to spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawner", meta = (AllowPrivateAccess = "true"))
	FVector SpawnLocation1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawner", meta = (AllowPrivateAccess = "true"))
	FVector SpawnLocation2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawner", meta = (AllowPrivateAccess = "true"))
	FRotator  SpawnRotation1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawner", meta = (AllowPrivateAccess = "true"))
	FRotator  SpawnRotation2;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<AAICharacter> AIToSpawn;

	bool BSpawn = false;
};
