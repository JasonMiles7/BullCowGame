#include "FBullCowGame.h"

using int32 = int;

FBullCowGame::FBullCowGame() {Reset(); }

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries;}
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }


FBullCowGame::FBullCowGame()
{
	Reset();
}

int FBullCowGame::GetMaxTries() const
{
	return MyMaxTries;
}

int FBullCowGame::GetCurrentTry() const
{
	return MyCurrentTry;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(FString)
{
	return false;
}
