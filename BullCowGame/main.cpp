#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

// the entry point for our application
int main()
{
	bool bPlayAgain = false;
	do {
	PrintIntro();
	PlayGame();
	bPlayAgain = AskToPlayAgain();
	} 
	while (bPlayAgain);
	return 0; // exit the application
}



 

void PrintIntro() {
	// introduce the game
	constexpr int WORD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
	}

void PlayGame()
{
	FBullCowGame BCGame; // instantiate a new game
	int MaxTries = BCGame.GetMaxTries();
	std::cout << MaxTries << std::endl;

	// loop for the number of turns asking for guesses
	for (int count = 1; count <= MaxTries; count++) {
		std::string Guess = GetGuess();
		std::cout << "Your guess was: " << Guess << std::endl;
		std::cout << std::endl;
	}
}

// get a guess from the player
std::string GetGuess() {
	int CurrentTry = BCGame.GetCurrentTry();

	std::cout << "Try " << CurrentTry << ". Enter your guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n)? ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] =='y') || (Response[0] == 'Y');
}
