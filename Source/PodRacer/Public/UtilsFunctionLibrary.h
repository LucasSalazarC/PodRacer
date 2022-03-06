// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilsFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PODRACER_API UUtilsFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


	/** Rotates the rotator quaternion delta degrees over the given axis */
	UFUNCTION(BlueprintPure, Category = "Yoy Utils")
	static FRotator RotateQuaternionOverAxis(FRotator rotator, FVector axis, float delta);

	/** Rotates the rotator quaternion delta degrees over the given axis. Inverts the multiplication order */
	UFUNCTION(BlueprintPure, Category = "Yoy Utils")
	static FRotator RotateQuaternionOverLocalAxis(FRotator rotator, FVector axis, float delta);
	
};
