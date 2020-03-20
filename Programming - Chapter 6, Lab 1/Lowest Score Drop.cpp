// Lowest Score Drop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
using namespace std;

   

	// 8. Lowest Score Drop
/*
Write a program that calculates the average of a group of test scores,where the lowest score in the group is dropped.It should use the following functions:

void getScore() should ask the user for a test score,store it in a reference parameter variable,and validate that it is not lower than 0 or higher than 100.This funciton
should be called by main once for each of the five scores to be entered.

void calcaverage() should calculate and display the average of the four highest scores.This function should be called just once by main and should be passed the five scores.

int findLowest() should find and return the lowest of the five scores passed to it.It should be called by calcaverage,which uses the function to determine which one of the five
scores to drop.
*/

//prototype for all of the functions
	void getScore(int&);
	//reference variable
	void calcAverage(int, int, int, int, int, int);

	int findLowest(int, int, int, int, int, int);
	//function to hold the screen until enter is pressed
	void holdscreen();

int main() {
	//define identifiers
		int test_1,test_2,test_3,test_4,test_5,test_6;
		char user_selec5 = 'y';
		//loop to repeat program if char y is returned
		while (user_selec5 == 'y') {
			cout << "Lowest Score Drop" << endl;
			cout << "==================" << endl;
			cout << endl;
			cout << "This program calculates the average of a group of test scores,where the lowest score in the group is dropped	" << endl;
			//for loop to get the scores of the 6 test
			//increment each time up till you get 6 inputs
			for (int i = 0; i < 6; i++) {

				if (i == 0) {
					//call the getscore function every iteration
					getScore(test_1);

				}

				else if (i == 1) {

					getScore(test_2);

				}

				else if (i == 2) {

					getScore(test_3);

				}

				else if (i == 3) {

					getScore(test_4);

				}

				else if (i == 4) {

					getScore(test_5);

				}

				else if (i == 5) {

					getScore(test_6);

				}

			} // end of for loop


			//pass the calcaverage function the test scores
			calcAverage(test_1, test_2, test_3, test_4, test_5, test_6);

			cout << "Would you like to repeat this program? (y/n):";
			cin >> user_selec5;
			if (user_selec5 == 'n')
				break;
			//validate the input of the loop
			while (user_selec5 != 'y' && user_selec5 != 'n') {
				cout << "Please select either y or n: ";
				cin >> user_selec5;
			}
		}
		holdscreen();

		return 0;

	}

//define the function to get the test scores

	void getScore(int& score) {

		int test_score;
		//ask the user to enter the test score
		cout << endl;
		cout << "Please enter the test score: ";

		cin >>test_score;

		// validate the test score ie cannot be lower than 0 or higher than 100

		while ((test_score < 0) || (test_score > 100)) {

			cout << "That is not a valid option" << endl

				<< "Please enter the test score: ";

			cin >> test_score;

		}

		score = test_score;

	}


	//define the calcaverage function
	void calcAverage(int score_1, int score_2, int score_3, int score_4, int score_5, int score_6) {

		

		int drop_score = findLowest(score_1, score_2, score_3, score_4, score_5, score_6);
		//calculate average
		int sum = score_1 + score_2 + score_3 + score_4 + score_5 + score_6 - drop_score;
		//divide by 5 since the lowest is dropped
		double avg = sum / 5.0;
		//store in avg identifier

		//make sure that it is displayed correctly
		cout << setprecision(2) << fixed << showpoint;
		cout << endl;
		cout << "The average score is: " << avg << endl;

	}
	//instructions
	//int findLowest() should find and return the lowest of the five scores passed to it.It should be called by calcaverage,which uses the function to determine which one of the five
	//scores to drop.
	//define findLowest function
	int findLowest(int score1, int score2, int score3, int score4, int score5, int score6) {

		int lowest;
		//just like last exercise just pass different scores in
		//have to have one for each score
		if (score1 <= score2) { //if else tree to find lowest score logic tree

			lowest = score1;

		}

		else {

			lowest = score2;

		}

		if (score3 < lowest) {

			lowest = score3;

		}

		if (score4 < lowest) {

			lowest = score4;

		}

		if (score5 < lowest) {

			lowest = score5;

		}

		if (score6 < lowest) {

			lowest = score6;

		}
		//return the lowest score
		return lowest;

	}
	//define holdscreen function so that you can call the function to hold the screen.
	void holdscreen() {
		cout << endl;
		cout << "Please press enter to continue" << endl;
		cin.ignore();
		cin.get();



	}






