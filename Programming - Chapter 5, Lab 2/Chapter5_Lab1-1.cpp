// Chapter5_Lab1.cpp 
#include <iostream>
#include<iomanip>
#include<string>

using namespace std;

	int main()
	{

		//Separate each part using the clear screen function (see example below). Use separate program description to separate the programs. You have exactly one week to complete this lab. Please do not procrastinate. 
	//NOTE: Use a do….while loop for repetition.At the end of EACH individual challenge, your program should ask if I want to repeat that part, if yes, it should repeat.If no, it should move to the next one.At the end of the entire program, it should ask if I want to repeat the whole thing.If yes, the whole program starts over; if no, the program ends.

		//10. Calories Burned
		/*
		Running on a particular treadmill,you burn 3.9 calories per minute.Write a program that uses a loop to display the number of calories burned after 5,10,20,25,and 30 minutes
		*/

		//define user select for whole program loop while in main function
		//if classes were defined this would not be the case.
		char user_selec5;
		do
		{
			
			char user_selec = 'y';
			while (user_selec == 'y') {

				cout << endl;
				//string of random special characters that can be called for formatting in console
				string str;
				cout << "Calories Burned" << endl;
				str.assign(15, '-');
				cout << str << endl;
				//tell what the program will do
				cout << "This program displays the number of calories burned after 5,10,20,25,and 30 minutes from running on a treadmill." << endl;
				str.assign(25, '-');
				//define identifiers
				double minutes = 5, calories = 3.9, calories_burned;
				cout << endl;
				//for function incrementing value
				cout << "    Minutes   " << "Calories Burned" << endl;
				cout <<"    "<< str << endl;
				while (minutes <= 30) {

					calories_burned = minutes * calories;
					cout << setprecision(9);
					cout <<setw(9)<< minutes <<"          "<< calories_burned << endl;

					//increment
					minutes = minutes + 5;
				}
				
				cout << "Would you like to repeat this program? (y/n):";
				cin >> user_selec;
				if (user_selec == 'n')
					break;
				while (user_selec !=  'y' && user_selec != 'n') {
					cout << "Please select either y or n: ";
					cin >> user_selec;
				}
			}










			//11. Membership Fees increase
			/*

			A country club,which currently chages $3,000 per year for membership,has announced it will increase its membership fee by 3 percent each year for the next five years.
			Write a program that uses a loop to display the projected rates for the next five years.


			*/





			//set initially true so loop will happen
			char user_selec1 = 'y';
			while (user_selec1 == 'y') {
				cout << endl;

				cout << "Membership Fees Increase" << endl; //program name and random special characters
				string str1;
				string str;
				str.assign(15, '-');
				str1.assign(25, '-');
				cout << str1 << endl;
				cout << "This program displays the projected rates for the membership fee for the next 5 years." << endl;

				int year = 1;double rate = 3000;
				cout << endl;
				cout << "      Year   " << "Membership fee" << endl;
				cout << "    " << str1 << endl;
				while (year <= 5) {
					//calculations
					rate = rate+rate * 0.03;
					
					cout << setw(9) << year << "          "  << setprecision(2)<<fixed<< rate << endl;
					

					year = year + 1;
				}
				
			
				
				cout << "Would you like to repeat this program? (y/n):";
				cin >> user_selec1;
				if (user_selec1 == 'n')
					break;
				while (user_selec1 != 'y' && user_selec1 != 'n') {
					cout << "Please select either y or n: ";
					cin >> user_selec1;
					//loop again if y
				}

			}






			//12.Random Number Guessing Game
			/*
			Write a program that generates a random number between 1 and 100 and asks the user to guess what the number is.If the user's guess is higher than the random
			number,the  program should display "Too high.Try Again."If the user's guess is lower than the random number,the program should display "Too low.Try again"
			The program should use a loop that repates until the user correctly guesses the random number.Then the program should display "Congratulations.You figured out my number.


			*/string str2;
			str2.assign(27, '-');
			cout << endl;
			cout << "Random Number Guessing Game" << endl;
			cout << str2 << endl;
			//tell what the progam does
			cout << "This program generates a random number between 1 and 100 and asks the user to guess what the number is " << endl;
			char user_selec2 = 'y'; //initially true
			int a, b;
			//assign random number from 1 to 100
			b = 1 + rand() % 100;
			//while true!
			//also offsets input by one so helps validate user input on the program side not necessarily on the user side
			while (1)
			{
				do {
					cout << "Enter a number between 1 and 100 : ";
					cin >> a;
					if (a < b)
						cout << "Too Low Try again" << endl;
					else if (a > b)
						cout << "Two High Try again" << endl;
					else
					{
						cout << "Congratulations,you figured out my number!" << endl;
						cout << "The random number is also " << b << endl;
						break;
					}
				} while (a != b);
				//repeat program
				cout << "Would you like to repeat this program? (y/n):";
				cin >> user_selec2;
				if (user_selec2 == 'n')
					break;
				while (user_selec2 != 'y' && user_selec2 != 'n') {
					cout << "Please select either y or n: ";
					cin >> user_selec2;

				}
			}




			//13.Random Number Guessing Game Enhancement
			/*
				Enhance the program that you wrote for Challenge 12 so it keeps a count of the number of guesses the user makes.When the user correctly guesses the
				random number,the program should display the number of guesses along with the message of congratulations.




			*/
			cout << endl;
			string str3;
			str3.assign(40, '-');
			cout << "Random Number Guessing Game Enhancement" << endl;
			cout << str3 << endl; //tell what the program is 
			cout << "This program is an enhancement of the previous program by displaying the number of guesses as well." << endl;

			//initially true
			char user_selec3 = 'y';



				
			//define identifiers
			int c, d;
			int count = 0;
			//assign random number that is generated
			d = 1 + rand() % 100;
			//while true!
			while (1)
			{
				do {
					cout << "Enter a number between 1 and 100 : ";
					cin >> c;
					if (c < d) {
						cout << "Too Low Try again" << endl;
						count = count + 1;
					}
					else if (c > d) {
						cout << "Two High Try again" << endl;
						count = count + 1;
					}
					else
					{
						cout << "Congratulations,that is correct!" << endl;
						cout << "The random number is also " << d << endl;
						cout << "It took you " << count << " tries!" << endl;
						break;
					}
				} while (c != d);







					cout << endl;
					cout << "Would you like to repeat this program? (y/n):";
					cin >> user_selec3;
					if (user_selec3 == 'n')
						break;
					while (user_selec3 != 'y' && user_selec3 != 'n') {
						cout << "Please select either y or n: ";
						cin >> user_selec3;
					}
				} while (user_selec3 == 'y');
			

			
				
				
			



				
				//rerun all programs reused from last weeks labs
			
				cout << "Would you like to re-run all the programs? (y/n)";
				cin >> user_selec5;
				if (user_selec5 == 'n')
				break;
				while (user_selec5 != 'y' && user_selec5 != 'n') {
					cout << "Please select either y or n: ";
					cin >> user_selec5;
				}
			} while (user_selec5 == 'y');
	}



