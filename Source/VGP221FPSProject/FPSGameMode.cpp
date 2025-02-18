// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameMode.h"

void AFPSGameMode::StartPlay()
{
    Super::StartPlay();

    check(GEngine != nullptr);

    // Display a debug message for five seconds. 
    // The -1 "Key" value argument prevents the message from being updated or refreshed.
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameMode!"));

    //Debugging in the console
    UE_LOG(LogTemp, Warning, TEXT("Hello World, this is FPSGameMode!"));
    int test = 10;
    bool boolTest = true;
    UE_LOG(LogTemp, Warning, TEXT("Test: %i, TestBool: %d"), test, boolTest);

}