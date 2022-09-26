// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BlasterMapGamemode.generated.h"

namespace MatchState
{
	extern BLASTERBPCPLUS_API const FName Cooldown; // Match duration has been reached
}
/**
 * 
 */
UCLASS()
class BLASTERBPCPLUS_API ABlasterMapGamemode : public AGameMode
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "NewMatchState")
		void SetNewMatchState(FName State);
};
