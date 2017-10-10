// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class CURRENTTIME_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()


		UFUNCTION(BlueprintCallable, category = "Time")
	void Time(int &year,int &Moth,int &DayWeek,int &Day,int &Hour,int &Minute,int &Second,int &MillisSecond);
	
};
