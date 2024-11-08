// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class SKILLTEST_M4_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
	
	//FUNCTIONS
protected:
	virtual void BeginPlay() override;

	// VARIABLES
	UPROPERTY(EditAnywhere)
	UBehaviorTree* BehaviorTree = nullptr;
};
