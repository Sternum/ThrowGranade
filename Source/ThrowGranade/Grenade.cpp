// Fill out your copyright notice in the Description page of Project Settings.


#include "Grenade.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "ThrowGranadeCharacter.h"

// Sets default values
AGrenade::AGrenade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Granade Range"));
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	RootComponent = Mesh;
	SphereComponent->AttachTo(RootComponent);
	SphereComponent->SetSphereRadius(350.0f);

	bReplicates = true;
}

// Called when the game starts or when spawned
void AGrenade::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(ExplosionCountDown, this, &AGrenade::Explode, CountDown, false);
	
}

// Called every frame
void AGrenade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGrenade::Explode() {
	
	 SphereComponent->GetOverlappingActors(Targets, AThrowGranadeCharacter::StaticClass());
	 for (AActor* character : Targets) {
		 AThrowGranadeCharacter* target = Cast<AThrowGranadeCharacter>(character);
		 if (target != nullptr) {
			 //GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));
			 target->DoDamage(Damage);
		 }
	 }

	 GetWorld()->DestroyActor(this);
}

bool AGrenade::CanHit(AActor* target) {
	return true;
}
