// Chapter 8 Labs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//•	Programming Challenge 1 – Perfect Scores    
//•	Programming Challenge 2 – Larger Than n
//•	Programming Challenge 3 – Roman Numeral Converter
//•	Programming Challenge 4 – Chips and Salsa


#include <iostream>
#include <iomanip>
#include<string>

using namespace std;


//prototype functions

//functions for number one
int count_perfect(int[], int);

//functions for number two
void array_func(int[], int size, int n);


//hold screen function prototype
void hold_screen();






int main()
{
	/*  1. Perfect Scores
		  Write a modular program that accepts up to 20 integer test scores in the range of 0 to 100
		  from the user and stores them in an array.Then main should report how many perferct scores
		  were entered (i.e. scores of 100), using a value-returning countPerfect function to help it.*/
	char user_selec = 'y';

	while (user_selec == 'y') {
		cout << "Perfect Scores" << endl;
		cout << "===============" << endl;
		cout << endl;
		//tell what the program will do
		cout << "This program accepts up to 20 integer test scores in the range of 0 to 100 \nfrom the user and stores them in an array.It then reports how many perfect scores were entered." << endl;
		cout << endl;
		const int num_scores = 20;
		int test[num_scores];
		//identifiers and const number desired
		int perfect_score;

		//enter score
		for (int i = 0; i < num_scores; i++)
		{
			int score;


			cout << "Please enter score number " << (i + 1) << " ";
			cin >> score;
			//validate the input
			if (score < 0 || score>100)
			{
				do
				{
					cout << "That is not a valid input" << endl;
					cout << "Please enter score " << (i + 1) << " ";
					cin >> score;
				} while (score < 0 || score>100);
			}

			test[i] = score;
		}
		//store the score after it has been tested
		perfect_score = count_perfect(test, num_scores);

		cout << "Perfect scores: " << perfect_score << endl;
		//repeat program question
		cout << "Would you like to repeat this program? (y/n): " << endl;
		cin >> user_selec;
		if (user_selec == 'n') {

			hold_screen();
		}
		//validate character input
		while (user_selec != 'y' && user_selec != 'n') {
			cout << "Please select either y or no: ";
			cin >> user_selec;
		}

	}


	char user_selec1 = 'y';
	while (user_selec1 == 'y') {
		/*2. Larger than n
			Create a program with a function that accepts three arguements: an integer array, an integer
			size that indicates how many elements are in the array,and an integer n.The function
			should display all of the numbers in the array that are greater than the number n.*/
		cout << "Larger than n" << endl;
		cout << "===============" << endl;
		cout << endl;
		//tell what the program will do
		cout << "This program accepts three arguements (integer array,integer size,and an integer n) then displays \nall of the numbers in the array that are greater than the number" << endl;
		int n; // Initialize user inputted value "n"

		cout << endl;
		cout << "Enter Value to be tested between 1 and 10: ";
		cin >> n;
		if (n < 0 || n>10)
		{
			do
			{
				cout << "That is not a valid input" << endl;
				cout << "Enter Value to be tested between 1 and 10: ";
				cin >> n;
			} while (n < 0 || n>10);
		}
		const int size = 10;
		//1 through 10 in the array for comparison of entered amount
		int arrayN[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		cout << endl;
		cout << "The numbers in the array that are larger are: ";
		array_func(arrayN, size, n); // Call function
		cout << endl;
		cout << "Would you like to repeat this program? (y/n): " << endl;
		cin >> user_selec1;
		if (user_selec1 == 'n') {

			hold_screen();

		}
		while (user_selec1 != 'y' && user_selec1 != 'n') {
			cout << "Please select either y or no: ";
			cin >> user_selec1;

		}

	}
	/*3. Roman Numeral Converter
		Write a program that displays the Roman numeral equivalent of any decimal number between 1 and 20 that the user enters.
		The Roman numerals should be stored in an array of strings, and the decimal number that the user enters should be used to locate the array element holding the Roman numeral equivalent.
		The program should have a loop that allows the user to continue entering numbers until an end sentinel of 0 is entered.*/

	char user_selec2 = 'y';
	while (user_selec2 == 'y') {
		cout << "Roman Numeral Converter" << endl;
		cout << "=======================" << endl;
		cout << endl;
		//tell what the program will do
		cout << "This program displays the Roman numeral equivalent of any number between 1 and 20 that the user enters." << endl;
		//always subtract 1 from the list
		string roman_numeral[21] = { " ", "I",   "II",   "III",  "IV",  "V",

							 "VI",  "VII",  "VIII",  "IX",  "X",

							  "XI",  "XII",  "XIII", "XIV", "XV",

			 "XVI", "XVII", "XVIII", "XIX", "XX" };

		int input;





		cout << endl;

		cout << "Enter a number between 1 and 20 ";

		cin >> input;




		//validate the input
		if (input < 0 || input>20)
		{
			do
			{
				cout << "That is not a valid input" << endl;
				cout << "Enter a number between 1 and 20 ";
				cin >> input;
			} while (input < 0 || input>20);

		}



		//print out the corresponding numeral to the integer provided by the user
		cout << endl;
		cout << "The corresponding numeral for " << input << " is " << roman_numeral[input] << endl;






		cout << "Would you like to repeat this program? (y/n): " << endl;
		cin >> user_selec2;
		if (user_selec2 == 'n') {

			hold_screen();

		}
		while (user_selec2 != 'y' && user_selec2 != 'n') {
			cout << "Please select either y or no: ";
			cin >> user_selec2;
		}
	}

	/*4. Chips and Salsa
		Write a program that lets a maker of chips and salsa keep track of their sales for five different types of salsa they produce: mild,medium,sweet,hot,and zesty.
		It should use two parallel five-element arrays: an array of strings that holds the five salsa names and an array of integers that holds the number of jars
		sold during the past month for each salsa type.The salsa names should be stored using an initilization list at the time the name array is created.The
		program should prompt the user to enter the number of jars sold for each type.Once this sales data has been entered, the program should produce a report that displays sales for each salsa type,
		total sales,and the names of the highest selling and lowest selling products.*/
		
//these arrays will be connected by their index number
//parrallel arrays can have relational data about data stored in different arrays as long as the index number is the same?
//check this information in the book to make sure correct
	char user_selec3 = 'y';
	while (user_selec3 == 'y') {
		cout << "Chips and Salsa" << endl;
		cout << "================" << endl;
		cout << endl;
		//tell what the program will do
		cout << "This program lets a maker of chips and salsa keep track of their sales for five different types of salsa they \nproduce: mild,medium,sweet,hot,and zesty." << endl;
		const int jars = 5;
		//each type of salsa offered
		string salsa[5] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
		//pass jars size used for several logics


		//define salsa sales
		int salsa_sales[jars];



		// Prompt user to enter the number of jars sold of each type
		cout << endl;

		cout << "Enter the number of jars sold for each type of salsa.\n";
		cout << endl;
		//get input until all have data 
		for (int i = 0; i < jars; i++)

		{

			int number_sold;

			do

			{
				//get information of different types of salsa sold
				cout << salsa[i] << " ";
				
				cin >> number_sold;


				//validate the input
				//can be zero so do not include zero in the validation
				if (number_sold < 0)

					cout << "Invalid input" << endl;;



			} while (number_sold < 0);

			salsa_sales[i] = number_sold;

		}



		
		//define identifiers used to hold certain data
		int high;
		int low;
		int total = 0;
		//interesting logic
		high = low = salsa_sales[0];


		//display report
		cout << "\n     Sales Report\n"

			<< "============================" << endl;

			

		

		for (int i = 0; i < jars; i++)

		{

			cout << salsa[i] <<"  " << salsa_sales[i] << " jars" << endl;
			//save total in total identifier
			//ie sum every one
			total += salsa_sales[i];


			//determine highest and low
			if (salsa_sales[i] > high)

			{
				//set high
				high = salsa_sales[i];

			}

			else if (salsa_sales[i] < low)

			{
				//set low
				low = salsa_sales[i];

			}

		}



		cout << endl;
		cout << "============================" << endl;
		cout << "Highest ";



		for (int i = 0; i < jars; i++)

		{

			if (salsa_sales[i] == high)

				cout << salsa[i] << " ";

		}



		cout << endl;
		
		cout << "Lowest ";
		
		


		for (int i = 0; i < jars; i++)

		{
			//display the lowest
			if (salsa_sales[i] == low)

				cout << salsa[i] << " ";
			
		}
		cout << endl;
		cout << "============================" << endl;
		cout << endl;
		cout << "Total sales " << total << " jars" << endl;
		cout << "============================" << endl;
		cout << endl;




		cout << "Would you like to repeat this program? (y/n): " << endl;
		cin >> user_selec3;
		if (user_selec3 == 'n') {

			hold_screen();

		}


		while (user_selec3 != 'y' && user_selec3 != 'n') {
			cout << "Please select either y or no: ";
			cin >> user_selec3;
		}



	}

}




//hold screen function
void hold_screen()
{
	
	cout << "Press return to continue";
	cin.ignore();
	cin.get();
	system("cls");
}
//definition for function ex 1
int count_perfect(int test[], int scores)
{
	int p = 0;
	for (int i = 0; i < scores; i++)
	{
		if (test[i] == 100)
			p++;
	}
	return p;
}


//arrayfunction definition for number 2
void array_func(int arrayN[], int arrayS, int number)
{
	for (int i = 0; i < arrayS; i++)
	{

		if(arrayN[i]>number)
		{
			cout << arrayN[i] << "  ";
			
		}
	}





}