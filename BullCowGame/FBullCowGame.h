#pragma once
#include <string>

using FString = std::string;

class FBullCowGame {
public:
	FBullCowGame(); // constructor

	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); // TODO make a more rich return value.
	bool CheckGuessValidity(FString); // TODO make a more rich return value.
	// provide a method for counting bulls and cows, and increasing try #


// ^^ Please try and ignore this and focus on the interface above ^^
private:
	// see constructor for initialisation
	int MyCurrentTry;
	int MyMaxTries;
};