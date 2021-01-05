// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Containers/Array.h"
#include "Grenade.generated.h"

UCLASS(Blueprintable, BlueprintType)
class THROWGRANADE_API AGrenade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrenade();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grenade Body")
	class UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grenade Range")
	class USphereComponent* SphereComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Grenade Targets")
	TArray<AActor*> Targets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Granade Properties")
		float CountDown = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Granade Properties")
		int Damage = 45;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	FTimerHandle ExplosionCountDown;

	void Explode();

	bool CanHit(AActor* target);
};
