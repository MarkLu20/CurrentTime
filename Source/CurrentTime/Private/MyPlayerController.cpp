// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayerController.h"
#include "windows.h"
#include "stdio.h"

void AMyPlayerController::Time(int & year, int &Moth, int & DayWeek, int & Day, int & Hour, int & Minute, int & Second, int & MillisSecond)
{
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	year = sys.wYear;
	Moth = sys.wMonth;
	DayWeek = sys.wDayOfWeek;
	Day = sys.wDay;
	Hour = sys.wHour;
	Minute = sys.wMinute;
	Second = sys.wSecond;
	MillisSecond = sys.wMilliseconds;
	}
