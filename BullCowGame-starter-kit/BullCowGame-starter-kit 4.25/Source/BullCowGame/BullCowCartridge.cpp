// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine (TEXT("Welcome to Bull Cows!"));
    PrintLine(TEXT("Guess the 4 letter word!")); //remove magic number
    PrintLine (TEXT("Press enter to continue..."));
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    FString HiddenWord = TEXT("cake"); // move outside of this function
    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You have won!"));
    }
    else 
    {
        PrintLine(TEXT("You have lost!"));
    }


}