// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterMapGamemode.h"

namespace MatchState
{
	const FName Cooldown = FName("Cooldown");
}

void ABlasterMapGamemode::SetNewMatchState(FName State)
{
	SetMatchState(State);
}
