// Joseph Sanger
// 1527317
// Programming Assignment_1_Basics
// This is a program with two parts. The parts are seperated by a select case.
// The first case will prompt a user to enter a score and will output the letter grade.
// The second case will ask the user to enter a number other than a certain number based upon
// how many times the program asks the user to enter a number.
// If the user doesn't follow the directions, the program will end.
// Also if the user follows the directions 10 times, the program will end. 

#include "stdafx.h"
#include <iostream>
using namespace std;


void main()
{
	//Declare variables
	int menu = 0; // for menu selection
	int score = 0; // for users score 
	int number = 0; // users inputed number
	int counter = 0; // number game iterations

	// Main menu
	cout << "Enter Program selection" << endl;
	cout << "1. Enter your programming score" << endl;
	cout << "2. Number game" << endl;
	cin >> menu;

	switch (menu)
	{
	case 1:

		cout << "Enter a grade you scored in programming class (0-100)";
		cin >> score;
		if (score == 100)
			cout << "That is an impeccible score!" << endl;
		if (score > 89)
		{
			cout << "You got an A!" << endl;
		}
		else if (score > 79) {
			cout << "You got a B!" << endl;
		}
		else if (score > 69) {
			cout << "You got a C!" << endl;
		}
		else if (score > 59) {
			cout << "You got a D!" << endl;
		}
		else if (score < 60) {
			cout << "You got an F!" << endl;
		}
		break;
	case 2:
		
		do {
			cout << "Enter any number other than " << counter << endl;
			cin >> number;
			if (counter != number) {
				++counter;
				number = 0;
			}
		}
			while (counter != number && counter < 10);
			if (counter == number) {
				cout << "Hey! you weren't supposed to enter " << counter << "!"<< endl;
				}
			if (counter == 10) {
				cout << "Wow, you're more patient then I am, you win." << endl;
			}
	}
	}
