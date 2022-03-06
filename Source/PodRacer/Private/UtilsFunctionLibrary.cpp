// Fill out your copyright notice in the Description page of Project Settings.


#include "UtilsFunctionLibrary.h"


FRotator UUtilsFunctionLibrary::RotateQuaternionOverAxis(FRotator rotator, FVector axis, float delta) {
	FQuat newRot = FQuat::Identity;
	axis.Normalize();

	FQuat quatDelta(axis, FMath::DegreesToRadians(delta));
	newRot = quatDelta * rotator.Quaternion();

	return newRot.Rotator();
}

FRotator UUtilsFunctionLibrary::RotateQuaternionOverLocalAxis(FRotator rotator, FVector axis, float delta) {
	FQuat newRot = FQuat::Identity;
	axis.Normalize();

	FQuat quatDelta(axis, FMath::DegreesToRadians(delta));
	newRot = rotator.Quaternion() * quatDelta;

	return newRot.Rotator();
}