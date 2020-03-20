// RefresherLab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include<string>
#include "Refresher_Lab.h"



using namespace std;

/*
Refresher Lab

Part 1
Write a program that asks the user to enter an item's wholesale cost and its markup percentage.It should then display the item's retail price. For example.
If an item's wholesale cost is 5.00 and its markup percentage is 100 percent,then the item's retail price is 10.00
If an item's wholesale cost is 5.00 and its markup percentage is 50 percent, then the item's retail price is 7.50

The program should have a function named calculateRetail that recieves the wholesale cost and the markup percentage as arguments and returns the retail price of the item.

If the user enters a value less than 0 for the wholesale cost or the percentage,your program should prompt them to enter a positive number.Your program should not move forward
until the correct values are entered.

Part 2.

Write a program that takes as input any change expressed in cents.It should then compute the number of half-dollars,quarters,dimes,nickels,and pennies to be returned returning as many
half-dollars as possible,then quarters,dimes,nickels,and pennies in that order.For example 483 cents should be returned as 9 half dollars,1 quarter,1 nickel,and 3 pennies.
Input change in cents
Output Equivalent t change in half-dollars,quarters,dimes,nickels,and pennies.

Other rules:

Please use a menu for selection and a do..while loop for repetition of your program (so that I can run it as many times as I want and choose the program that i want to run).

Example: Enter 1 to run the markup program or 2 to run the Make Change program:

Example: Would you like to run the program again? Enter Y for yes,or N for no:


*/


//const identifiers that will be used in the second program
const int HALF = 50;
const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;
const int PENNIES = 1;


int main()
{



	//prototype the functions that will be used

	int menu();
	double calculate_retail();
	void make_change();
	void hold_screen();
	void menu_information();
	string str;
	
	str.assign(30, '=');
	//use a loop that will run until the user quits the program themself.

	char user_selec = 'y';

	do
	{

		int user_choice;
		
		user_choice = menu();
		//switch tree for menu driven program
		switch (user_choice)
		{
		case 1:
			//since we are dealing with double show decimal point so we get exact retail cost
			cout << fixed << showpoint << setprecision(2);

			//include brackets to limit the scope to this case instead of all of the different switch cases
		{char rerun = 'y';
		//while this is true run this program if it is not true then go back to the menu
		while (rerun == 'y') {
			system("cls");
			cout << "       Markup Program" << endl;
			cout << str;
			cout << endl;
			double retail_price;
			retail_price = calculate_retail();

			

			cout << "The retail price is $" << retail_price << endl;
			cout << endl;
			cout << "Would you like to re-run this program? (y/n)"; cin >> rerun;


			while (rerun != 'y' && rerun != 'n') {
			cout << "Please enter (y/n)" << endl;
			cout << "Would you like to re-run this program? (y/n)"; cin >> rerun;
		}
			
			
		}
		if (rerun == 'n') {
			hold_screen();
			break;
		}
		}






		case 2: {char rerun = 'y';

			while (rerun == 'y') {
				system("cls");
				cout << "       Make-Change Program" << endl;
				cout  << str;
				cout << endl;
				make_change();

				cout << "Would you like to re-run this program? (y/n)"; cin >> rerun;
				while (rerun != 'y' && rerun != 'n') {
					cout << "Please enter (y/n)" << endl;
					cout << "Would you like to re-run this program? (y/n)"; cin >> rerun;
				}
			}
			if (rerun == 'n') {
				hold_screen();
				break;
			}
			}
		case 3: {

			 menu_information();
			 hold_screen();
			 break;
		}

			  break;
		case 4:return(0);
			break;
		default: {cout << endl;
			cout << "That is not a valid selection" << endl;
			hold_screen();
			break;
		}



		}


	} while (user_selec == 'y');
}
		

int menu() {
	string str;
	str.assign(30, '=');
	int user_choice;
	cout << "       Main Menu" << endl;

	cout << str;
	cout << endl;
	cout << "1. ... Markup Program " << endl;
	cout << "2. ... Make-Change Program" << endl;
	cout << "3. ... Information" << endl;
	cout << "4. ... Quit" << endl;
	cout << endl;
	cout << "Enter Chocie: "; cin >> user_choice;

	return user_choice;

}
	

double calculate_retail()

{

	double cost, markup, retail;


	//could also pass cost and markup as reference variables using the same logic.Retail cost is returned and displayed for the user either way


	cost = -1;
	markup = -1;
	//validate the users input
	//additional information of validation can be found in program information ie selection 3
	while (cost < 0) {

	cout << "What is the wholesale cost? $";

	cin >> cost;
}
		 

	

	while (markup < 0) {

		cout << "What is the markup? %";

		cin >> markup;

	}
		
	

	//divide by 100 because it is a percentage

	markup = markup/100;
	//store amount in variable named retail and return it
	retail= cost * (1+ markup);
	return retail;
}
//dont need to return anything
	void make_change() {

		int cent;
		int half, quarter, dime, nickel, pennies;
		cout << endl;
		cout << "Enter change in cents: ";
		cin >> cent;
		cout << endl;

		
		cout << "The number of half-dollars to be returned is " << cent / HALF;
		//store in cent variable so that it can be further figured into smaller inetervals
		//use modulus to return what was not divisible
		cent = cent % HALF;
		cout << endl;
		cout << "The number of quarters to be returned is " << cent / QUARTER;
		cent = cent % QUARTER;
		cout << endl;
		cout << "The number of dimes to be returned is " << cent / DIME;
		cent = cent % DIME;
		cout << endl;
		cout << "The number of nickels to be returned is " << cent / NICKEL;
		cent = cent % NICKEL;
		cout << endl;
		cout << "The number of pennies to be returned is " << cent / PENNIES;
		cout << endl;
		cout << endl;
	}









	void hold_screen() {


		cout << endl;
		cout << "Please press enter to continue:";
		cin.ignore();
		cin.get();
		system("cls");
	}
	void menu_information() {
		system("cls");
		string str, str1;
		
		str.assign(30, '=');
		cout << "       Information" << endl;
		cout << str << endl;
		cout << "When the menu is displayed the user will enter their selection using numbers between 1 and 4." << endl;
		cout << endl;
		cout << " ****EXAMPLE MAIN MENU****" << endl;
		
			cout << "       Main Menu" << endl;

		cout << str;
		cout << endl;
		cout << "1. ... Markup Program " << endl;
		cout << "2. ... Make-Change Program" << endl;
		cout << "3. ... Information" << endl;
		cout << "4. ... Quit" << endl;
		cout << endl;
		cout << "The first option in the menu will run a program that calculates and displays the retail price of an item" << endl;
		cout << endl;
		cout << "*The user input will not proceed unless a positive cost and markup value is entered*" << endl;
		cout << endl;
		cout <<"The second option in the menu will run a program that calculates and displays the amount of the number of\nhalf-dollars,quarters,dimes,nickels,and pennies to be returned when the user inputs an amount in cents" << endl; 
		cout << endl;
		cout << "The third option in the menu will run this program giving information to the user" << endl;
		cout << endl;
		cout << "The fourth option in the menu will quit the entire program" << endl;
		

		


		
	}



