// Chapter_3_Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/* Challenge 1
	Write a program that calculates a car's gas mileage.The program should ask the user to enter the number of gallons of gas the car can hold and the number of miles
	it can be driven on a full tank.It should then calculate and display the number of miles per gallon the car gets.
	
	
	
	*/
	double num_of_gal, num_of_miles; //define variables to be used
	cout << "This program will calculate a car's gas mileage" << endl;
	cout << "How many gallons of gas can the car hold? "; //output and input from the user
	cin >> num_of_gal;
	cout << "How many miles can the car drive on a full tank? ";
	cin >> num_of_miles;
	cout << "\nThe mpg of the car is " << num_of_miles / num_of_gal<<"mpg"<<endl; //calculate the total mpg

	system("pause");




	/* Challenge 2
	There are three seating categories at a stadium.For a softball game,Class A seats cost $15,Class B seats cost $12,and Class C seats cost $9.Write a program that asks how many tickets for each class of
	seats were sold,then displays the amount of income generated from ticket sales.Format your dollar amount in a fixed-point notation with two decimal points and make sure the decimal point is always displayed.

	*/

	const float CLASS_A = 15.00, CLASS_B = 12.00, CLASS_C = 9.00; //set constant since these values are not changing
	int a_sold,b_sold,c_sold; //identifiers to be used
	cout << "This program will display the amount of income generated from different classes of ticket sales" << endl;
	cout << "How many Class A tickets were sold? " ; //collect sales data from the user to use in calculating the total
	cin >> a_sold;
	cout << "How many Class B tickets were sold? ";
	cin >> b_sold;
	cout << "How many Class C tickets were sold? ";
	cin >> c_sold;
	cout << fixed;
	cout << "The amount generated from ticket sales was $" <<setprecision(2)<< a_sold * CLASS_A + b_sold * CLASS_B + c_sold * CLASS_C<<endl; //find total made from ticket sales

	system("pause");




	/* Challenge 3
	Write a program that asks the user to enter their monthly costs for each of the following housting-related expenses:
	Rent or mortgage payment
	utilities
	phones
	cable
	The program should then display the total monthly cost of these expenses and the total annual cost of these expenses.
	*/
	double rent_or_mortgage, utitilies, phones, cable,monthly_total; //define identifiers to be used

	cout << "What is your monthly cost for your rent or morgage payment? $"; //collect data from the user
	cin >> rent_or_mortgage;
	cout << "What is your monthly cost for your utilies? $";
	cin >> utitilies;
	cout << "What is your monthly cost for your phones? $";
	cin >> phones;
	cout << "What is your monthly cost for your cable? $";
	cin >> cable;
	cout << fixed;
	cout << "The total monthly cost of your expenses is $" << setprecision(2) << rent_or_mortgage + utitilies + phones + cable << endl; //calculate monthly cost by summing data
	cout << "The total annual cost of your expenses is $" << (rent_or_mortgage + utitilies + phones + cable) * 12 << endl;//sum data then multiply by 12 months
	system("pause");
	/*Challenge 4
	Many financial eperts advise property owners to insure their homes or buildings for at least 80 percent of the amount it would cost to replace the structure.
	Write a program that asks the user to enter the replacement cost of a building and then displays the minimum amount of insurance that should be purchased for the property.
	
	
	*/

	double cost; //define identifiers
	 const float ins = 0.8; //define constant for percentage not changing between inputs from the user
	 cout << "Many financial eperts advise property owners to insure their homes or buildings for at least 80 percent\nof the amount it would cost to replace the structure." << endl;
	cout << "\nWhat is the replacement cost of the home or building? $"; //tell the user the use of the program and get data from the user for calculations
	cin >> cost;
	cout << fixed;
	cout << "The minimum amount of insurance that should be purchased for the property is $" <<setprecision(2)<< cost * ins <<endl; //display the result in a dollar amount for the user with 2 decimal places




	system("pause");


	/*Challenge 5
	Write a program to find a baseball player's batting average.The program should ask the user to enter the number of times the player was at bat and the number of hits earned.
	It should then display the batting average to four decimal places.
	
	
	*/

	int times_at_bat, num_of_hits; //define identifiers
	cout << "This program will calculate a baseball player's batting average" << endl; //tell what the program does
	cout << "How many times was the player at bat? " ;
	cin >> times_at_bat;
	cout << "How many hits did the player get? ";
	cin >> num_of_hits;
	cout << fixed;
	cout << "\nThe batting average for the player is " <<setprecision(4)<< times_at_bat / num_of_hits<<endl; //set precision of calculation
	system("pause");



	/* Challenge 6
	Write a program that asks for five test scores.The program should calculate the average test score and display it.The number displayed should be formatted in fixed-point
	notation,with one decimal point of precision.
	
	*/
	int test_1, test_2, test_3, test_4, test_5; //define identifiers
	float average_score;
	
	cout << "This program ask for five test scores and returns the average test score." << endl; //tell the user what the program does
	cout << "What is the score of the first test? ";
		cin >> test_1;
		cout << "What is the score of the second test? "; //get input from the user
		cin >> test_2;
		cout << "What is the score of the third test? ";
		cin >> test_3;
		cout << "What is the score of the fourth test? ";
		cin >> test_4;
		cout << "What is the score of the fifth test? ";
		cin >> test_5;
		cout << fixed;
		average_score = (test_1 + test_2 + test_3 + test_4 + test_5) / 5; //calculates average score
			cout << "The average test score is " << setprecision(1) << average_score << endl; //prints average
	
		system("pause");




	 //Challenge 7
	//Write a program that calculates the average monthly rainfall for tthree months.The program should ask the user to enter the name of each month,such as June or July,and the amount of rain
	//(in inches) that fell that month.The program should display a message similar to the following:
	//The average monthly rainfall for June,July,and Auguest was 6.72 inches.
	
	 string month_1, month_2, month_3; //allow the user to define strings "names of months"
 double rain_amt_1, rain_amt_2, rain_amt_3; //define other identifiers used in the program
 double average_rain;
 cout << "This program calculates the average monthly rainfall for three user defined months." << endl;
 cout << "Enter the name of the month: ";
 cin >> month_1;
 cout << "Enter the amount of rainfall in inches ";
 cin >> rain_amt_1;
 cout << "Enter the name of the month: ";
 cin >> month_2;
 cout << "Enter the amount of rainfall in inches ";
 cin >> rain_amt_2;
 cout << "Enter the name of the month: ";
 cin >> month_3;
 cout << "Enter the amount of rainfall in inches ";
 cin >> rain_amt_3;

 average_rain = (rain_amt_1 + rain_amt_2 + rain_amt_3) / 3; //calculate average
 cout << fixed;
 cout << "The average rainfall for " << setprecision(2) << month_1 << ","
	 << month_2 << ", and " << month_3 << " is: " << average_rain<< " inches" << endl; //print calculations

 system("pause");
	
	
	
	

	return(0);
}


