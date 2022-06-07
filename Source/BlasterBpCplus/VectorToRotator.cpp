// Fill out your copyright notice in the Description page of Project Settings.


#include "VectorToRotator.h"

FRotator UVectorToRotator::VtoRotator(FVector vec)
{
	FRotator convers = vec.Rotation();
	return convers;
}

float UVectorToRotator::VecSize(FVector vect)
{
	float Vectorr = vect.Size();
	return Vectorr ;
}

void UVectorToRotator::ResetPlayer(AActor* Player)
{
	Player->Reset();
	Player->Destroy();
}


