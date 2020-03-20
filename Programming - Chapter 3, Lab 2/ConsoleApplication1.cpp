#include <iostream>
#include <iomanip>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
	//17. Property Tax
	/*
	Madison County collects property taxes on the assessed value of property,which is 60 percent of its actual value.
	For example,if a house is valued at $158,000, its assessed value is $94,800.This is the amount the homeowner pays tax on.
	At last year's tax rate of $2.64 for each $100 of assessed value,the annual property tax for this house would be $2502.72.
	Write a program that asks the user to input the actual value of a piece of property and the current tax rate for each $100 of assessed value.
	The program should then calculate and report how much annual property tax the homeowner will be charged for this property.

	*/
	//initail price 158,000
	//value 60% =94,800
	//annual property tax =2502.72
	//values given(used to check formula for calculations)
	

	cout << "This program takes the actual value of a piece of property and the current tax rate for each $100.00 of" << endl << "assessed value then displays how much annual property tax the homeowner will be charged."<< endl;
	double property_value,tax_rate,an_prop_tax,as_value; //define identifiers
	cout << endl;
	cout << "How much is the value of the property? $"; //get data from the user to use in calculations
	cin >> property_value;
	cout << "What is the current tax rate for each $100 of assesed value? $";
	cin >> tax_rate;
	cout << fixed;
	as_value = property_value * .60;
	an_prop_tax = (as_value/100)* tax_rate; //perform calculations on the data
	cout << setprecision(2)<<"The annual property tax the homeowner will be charged for this property is $" << an_prop_tax << endl; //print calculations to the screen for the user

	system("pause");





	//18. Senior Citizen Property Tax
	/*Madison County provides a $5000 homeowner exemption for senior citizens.For example, if their house is valued at $158,000 its assessed value
	would be $94,800 as explained above.However they would only pay tax on $89,800.At last year's tax rate of $2.64 for each $100 of assessed value,
	their property tax would be $2370.72.In addition to the tax break,senior citizens are allowed to pay their property tax in four equal payments.The quarterly payment due on this property would
	be $592.68.Write a program that asks the user to input the actual value of a piece of property and the current tax rate for each $100 of assessed value.The program should then calculate
	and report how much annual property tax a senior homeowner will be charged for this property and what their quarterly tax bill will be.


	*/
	
	cout << "This program will take the value of a piece of property and apply a $5000 tax break with the current tax"<<endl<< "rate for each $100 of assessed value returing the annual property tax for the property and the quarterly tax bill" << endl;
	double property_value1, tax_rate1, an_prop_tax1, as_value1, quart_bill;
	cout << endl;
	cout << "How much is the value of the property? $";
	cin >> property_value1;
	cout << "What is the current tax rate for each $100 of assesed value? $";
	cin >> tax_rate1;
	cout << fixed;
	as_value1 = (property_value1 * .60) - 5000;
	an_prop_tax1 = as_value1 / 100 * tax_rate1;

	quart_bill = an_prop_tax1 / 4;
	cout << setprecision(2) << "The annual property tax the homeowner will be charged for this property is $" << an_prop_tax1 << endl;
	cout << "The quarterly tax bill will be $" << quart_bill<<endl;

	system("pause");

	

	//19. Math Tutor
	/*Write a program that can be used as a math tutor for a young student.The program should display two random numbers between 1 and 9 to be added,such as

	 2
	+1
	---
	After the student has entered an answer and pressed the enter key,the program should display the correct answer so the student can see if his or her answer is correct.

	*/

	//generate and print two random numbers
	
	cout << "This program will print two random numbers to the screen to be added.\nThe user will input an answer,and the computer will check it."<<endl;
	unsigned seed;
	int number1,number2,user_input;
	const int MIN_NUM = 1;
		const int MAX_NUM = 9 ;
	seed = time(0);
	srand(seed);
	number1 = rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM;
	number2 = rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM;
	cout << number1 << "        " << endl;
	cout << number2 << "+        " << endl;
	cout << "---" << endl;
	cin >> user_input;
	if (user_input == number1 + number2)
		cout << "Correct!"<<endl;
	else 
		cout << "Incorrect";



	system("pause");

	//20. Interest Earned
	/*
	Assuming there are no deposits other than the original investment,the balance in a savings account after one year may be calculated as

	Amount = Principal *(1+  Rate/T)^T

	Where principal is the balance in the account
	Rate is the annual interest rate,
	T is the number of times the interest is compounded during a year (e.g. T is 4 if the interest is compounded quarterly)

	Write a program that asks for the principal, the interest rate,and the number of times the interest is compounded.It should display
	a report similar to the following:

	Interest Rate:...........4.25%
	Times Compounded:.......12
	Principal: .............$1000.00
	Interest:...............$43.34
	Final Balance...........$1043.34

	*/


	cout << "This program asks the user for the principal,interest rate,and number of times the" << endl << "interest is compounded.It then displays this information for the user in addition to the interest and final balance." << endl;
	double principal,final_balance,interest,interest_rate,interest_rate_100;
	int times_compounded;
	cout << endl;
	cout << "What is the principal investment? $";
	cin >> principal;
	cout << "What is the interest rate? ";
	cin >> interest_rate;
	cout <<"How many times is the interest compounded? ";
	cin >> times_compounded;

	interest_rate_100 =interest_rate/100;
	final_balance = principal * pow((1.0 + interest_rate_100 / times_compounded),times_compounded);
	interest = final_balance - principal;
	
	cout << endl;
	cout << setprecision(2) << fixed;
	cout << "Interest rate:.......................... "<< interest_rate<<"%" << endl;
	cout << "Times Compounded:....................... " <<times_compounded<< endl;
	cout << "Principal:.............................. $" <<principal<< endl;
	cout << "Interest:............................... $" <<interest<<endl;
	cout << "Final Balance:.......................... $" <<final_balance<< endl;

	system("pause");




	return(0);
}
