// Fill out your copyright notice in the Description page of Project Settings.


#include "VectorToRotator.h"

FRotator UVectorToRotator::VtoRotator(FVector vec)
{
	FRotator convers = vec.Rotation();
	return convers;
}
