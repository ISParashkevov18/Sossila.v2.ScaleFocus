#include <iostream>

using namespace std;
#pragma once

// --------------------------------------------------------------------DATA LAYER----------------------------------------------------------
void createVector(vector<int> arrayOfGuesses[], int userNumbers[], int numberOfGuesses, int vectorSize);
void generateNumNoDuplicates(int numbers[]);
void generateNumWithDuplicates(int numbers[]);
bool checkInteger(string str);
bool areEqual(int numbers[], int finalNumbers[]);
void compareNumbers(int numbers[], int userNumbers[], int  numberOfGuesses, int& wins, int& loses);
void setNumWithDuplicates(int numbers[]);
void setNumNoDuplicates(int numbers[]);
// --------------------------------------------------------------------PRESENTATION LAYER----------------------------------------------------------