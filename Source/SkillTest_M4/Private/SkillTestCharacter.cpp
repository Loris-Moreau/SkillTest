// Fill out your copyright notice in the Description page of Project Settings.

#include "SkillTestCharacter.h"

// Sets default values
ASkillTestCharacter::ASkillTestCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASkillTestCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASkillTestCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

float ASkillTestCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator,
                                      AActor* DamageCauser)
{
	if (Affinity != Cast<ASkillTestCharacter>(DamageCauser)->Affinity)
	{
		Health -= DamageAmount;
		UE_LOG(LogTemp, Warning, TEXT("%s received damages : %f"), *this->GetName(), Health);
	}

	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}
