// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AllyCharacter.h"
#include "MyraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SKILLTEST_M4_API AMyraCharacter : public AAllyCharacter
{
	GENERATED_BODY()
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
