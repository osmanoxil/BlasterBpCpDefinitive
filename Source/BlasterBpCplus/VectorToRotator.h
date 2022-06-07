// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Character.h"
#include "TimerManager.h"
#include "VectorToRotator.generated.h"


/**
 * 
 */
UCLASS()
class BLASTERBPCPLUS_API UVectorToRotator : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "Conversion")
		static FRotator VtoRotator(FVector vec);
		UFUNCTION(BlueprintCallable, Category = "Conversion")
		static float VecSize(FVector vect);
		UFUNCTION(BlueprintCallable, Category = "HitResultChange")
		void SetImpactPointHit(FHitResult res, FVector impactPoint) { res.ImpactPoint = impactPoint; }

		UFUNCTION(BlueprintCallable, Category = "ResetActor")

		static void ResetPlayer(AActor* Player);

};
