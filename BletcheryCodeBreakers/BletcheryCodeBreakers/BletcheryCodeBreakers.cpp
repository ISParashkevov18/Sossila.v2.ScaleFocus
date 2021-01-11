#include <iostream>
#include <string> 
#include <time.h>  
#include <iomanip>   
#include <vector>
#include <stdlib.h>
#include "dataLayer.h";
#include "presentationLayer.h";

using namespace std;

int main()
{
	int numbers[4];          // the 4-digit secret code
	int userNumbers[4];      // the numbers inputed by the user in their guesses
	int numberOfGuesses = 0; // times the user has tried to guess the 4 numbers
	int wins = 0;            // times the program ahs ended with a win
	int loses = 0;            // times the program ahs ended with a lose
	mainMenu(numbers, userNumbers, numberOfGuesses, wins, loses);
}
