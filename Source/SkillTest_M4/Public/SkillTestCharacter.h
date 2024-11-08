// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SkillTestCharacter.generated.h"

UENUM()
enum ECharacterAffinity
{
	Undefined,
	Ally,
	Enemy
};

UCLASS()
class SKILLTEST_M4_API ASkillTestCharacter : public ACharacter
{
	GENERATED_BODY()

	// FUNCTIONS
public:
	// Sets default values for this character's properties
	ASkillTestCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//VARIABLES
public:
	UPROPERTY(BlueprintReadOnly)
	TEnumAsByte<ECharacterAffinity> Affinity;

	UPROPERTY(BlueprintReadWrite)
	float Health = 100.f;
};
