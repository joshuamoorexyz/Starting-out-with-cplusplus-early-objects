// Chapter5_Lab1.cpp 
#include <iostream>
#include<iomanip>
#include<string>

using namespace std;

	int main()
	{

		//Separate each part using the clear screen function (see example below). Use separate program description to separate the programs. You have exactly one week to complete this lab. Please do not procrastinate. 
	//NOTE: Use a do….while loop for repetition.At the end of EACH individual challenge, your program should ask if I want to repeat that part, if yes, it should repeat.If no, it should move to the next one.At the end of the entire program, it should ask if I want to repeat the whole thing.If yes, the whole program starts over; if no, the program ends.

		//2. Sum of Numbers
		/*
		Write a program that asks the user for a positive integer value and that uses a loop to validate the input.The program should then use a second loop to compute the sum of
		all the integers from 1 up to the number entered.For example,if the user enters 50,the loop will find the sum of 1,2,3,4,...50.
		*/

		//define user select for whole program loop while in main function
		//if classes were defined this would not be the case.
		char user_selec5;
		do
		{
			
			char user_selec = 'y';
			while (user_selec == 'y') {


				//string of random special characters that can be called for formatting in console
				string str;
				cout << "Sum of Numbers" << endl;
				str.assign(15, '-');
				cout << str << endl;
				//tell what the program will do
				cout << "This program asks the user for a positive integer and then computes the sum of all integers from 1 up to the number entered." << endl;
				cout << "For example if the user enters 50,the program will find the sum of 1,2,3,4,5,6,....50" << endl;
				//define identifiers
				int number, sum_of_nums = 0;
				cout << endl;
				cout << "Enter a positive number: ";
				cin >> number;
				//while function for validation
				while (number <= 0)
				{
					cout << "Please enter a positive number: ";
					cin >> number;

				}
				//for function incrementing value
				for (int i = 1; i < number; i++)
				{
					sum_of_nums += i;
				}
				//print calculations to the screen
				cout << "The sum of all numbers from 1 up to " << number << " is " << sum_of_nums << endl;
				//repeat program used in each program just changing user selec variable everytime
				cout << "Would you like to repeat this program? (y/n):";
				cin >> user_selec;
				if (user_selec == 'n')
					break;
				while (user_selec !=  'y' && user_selec != 'n') {
					cout << "Please select either y or n: ";
					cin >> user_selec;
				}
			}










			//3.Distance Traveled
			/*The distance a vehicle travels can be calculated as follows:
			distance =speed*time

			For example, if a train travels 40 miles per hour for 3 hours,the distance traveled is 120 miles

			Write a program that asks the user for the speed of a vehicle(in mph) and how many hours it has traveled.It should then use a loop to display the total
			distance traveled at the end of each hour of that time period.Here is an example of the output:

			What is the speed of the vehicle in mph? 40
			How many hours has it traveled? 3
			Hour				Miles Traveled
			----------------------------------
			1						40
			2						80
			3						120
			*/





			//set initially true so loop will happen
			char user_selec1 = 'y';
			while (user_selec1 == 'y') {
				cout << endl;
				cout << "Distance Traveled" << endl; //program name and random special characters
				string str1;
				str1.assign(16, '-');
				cout << str1 << endl;
				float s, t, d = 0;
				//define identifiers and asks user for input
				cout << "What is the speed of the vehicle in miles per hour? ";
				cin >> s;
				cout << "How many hours has it traveled: ";
				cin >> t; //accumulator
				//nested if statement for validation and calculation
				if (s >= 1)
				{
					if (t > 1)
					{
						cout << endl;
						cout << "Hour         Miles Traveled\n";
						cout << "----------------------------" << endl;
						for (int hour = 1; hour <= t; hour++)
						{
							d = s * hour;
							cout << setw(2) << hour << setw(15) << d << endl;
						}

					}
					else
						cout << "Time can't be less than 1" << endl;
				}
				else //user validation
					cout << "Speed can't be negative" << endl;
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






			//5. Speed Conversion Chart
			/*
			Write a program that displays a table of speeds in kilometers per hour with their values converted to mph.The table should display the speeds from
			40 kilometers per hour through 120 kilometers per hour,in increments of 10 kilometers per hour.(In other words,it should display 40 kph,50kph,60kph
			and so forth,up to 120 kph.)

			MPH=KPH X 0.6214



			*/string str2;
			str2.assign(16, '-');
			cout << endl;
			cout << "Speed Conversion Chart" << endl;
			cout << str2 << endl;
			//tell what the progam does
			cout << "This program displays a table of speeds in kilometers per hour with their \nvalues converted to mph from 40kph to 120kph " << endl;
			char user_selec2 = 'y'; //initially true
			while (user_selec2 == 'y') {
				double kph = 40, mph; //print table
				cout << "          Kph    " << "Mph" << endl;
				cout << "        " << str2 << endl;



				while (kph <= 120)
				{
					mph = kph * 0.6214; //calculate mph
					cout << setprecision(3) << fixed << setw(15) << kph << " " << mph << endl;
					kph = kph + 10;


				}
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




			//8. Pennies for Pay
			/*
			Write a program that calculates how much a person earns in a month if the salary is one penny the first day,two pennies the second day,four pennies the third day,and so on with the daily
			pay doubling each day the employee works. The program should ask the user for the number of days the employee worked during the month, validate that the user for the number of days the employee
			worked during the month,validate that it is between 1 and 31,and then display a table showing how much the salary was for each day worked,as well as the total pay earned for the month.The output should be
			displayed in dollars with two decimal points,not in pennies.




			*/
			string str3;
			str3.assign(15, '-');
			cout << "Pennies for Pay" << endl;
			cout << str3 << endl;
			cout << "This program calculates how much a person earns in a month if the salary is one penny the first day,\ntwo pennies the second day,etc..The daily pay doubles each day the employee works." << endl;

			//initially true
			char user_selec3 = 'y';



				
			//define identifiers
				int tot_days;
				double pay;
				double tot_pay = 0;
				do //loop
				{
					cout << endl;
					cout << "How many days did the employee work? ";
					cin >> tot_days;

					if (tot_days < 0 || tot_days>31) {
						cout << "Invalid Input: Number must be" << "greater than zero or " << "less than or equal to 31" << endl;
						break;
					}
				 while (tot_days < 0 || tot_days>31);

					cout << "---------------------" << endl;
					cout << "DAY\t $SALARY" << endl;
					cout << "---------------------" << endl;
					pay = .01;

					cout << fixed << showpoint << setprecision(2);




					//increment for each day
					for (int i = .01; i <= tot_days; i++)
					{
						
						cout << i << "\t $" << pay << endl;
						tot_pay += pay;
						pay += pay;
					}
					cout << endl;
					cout << "Total pay for " << tot_days << " days is $" << tot_pay << endl;







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
			

			
				
				
			



				
				//rerun all programs
			
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



