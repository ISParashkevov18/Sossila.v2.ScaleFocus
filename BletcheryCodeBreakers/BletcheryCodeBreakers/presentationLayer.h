#include <iostream>

using namespace std;

#pragma once

// --------------------------------------------------------------------PRESENTATION LAYER----------------------------------------------------------
void inputGuessNumbers(int userNumbers[]);
void outputVector(vector<int> guessedNumAndPos[], int numberOfGuesses, vector<int> arrayOfGuesses[], vector<int> guessedNumbers[]);
int GameOver();
void levelMenu(int numbers[], int userNumbers[], int numberOfGuesses, int& wins, int& loses);
void mainMenu(int numbers[], int userNumbers[], int numberOfGuesses, int& wins, int& loses);

// --------------------------------------------------------------------PRESENTATION LAYER----------------------------------------------------------