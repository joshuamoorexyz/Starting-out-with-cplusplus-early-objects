
#include <iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	//Ex. 10 Bank Charges
	/* A bank charges $15 per month plus the following check fees for a commercial checking
		account:

		$0.10 each for fewer than 20 checks
		$0.08 each for 20-39 checks
		$0.06 each for 40-59 checks
		$0.04 each for 60 or more checks

		Write a program that asks for the number of checks written during the past month,
		then computes and displays the bank's fees for the month.
		Input Validation: Decide how the program should handle an input of less than 0.*/


	
	int num_of_checks; //define identifiers
	double total_fees, base_fee, bank_tot;
	cout << "Bank Charges" << endl;
	cout << "=============" << endl;
	cout << "This program asks for the number of checks written during the past month then computes and displays \nthe bank's fees for the month."<<endl;
	//tell what the program is

	/*do //branching if statements if else chain
	{*/
		cout << "\nHow many checks did you write during the past month? "; cin >> num_of_checks;
		cout << showpoint << fixed << setprecision(2);
		if (num_of_checks < 20 && num_of_checks> 0)
		{
			total_fees = num_of_checks * 0.10;
			bank_tot = total_fees + 15;
			cout << "The bank fees for the month are " << total_fees << endl; //different scenarios based on input
			cout << "The total due for the month is " << bank_tot << endl;
		}
		else if (num_of_checks >= 20 && num_of_checks <= 39)
		{
			total_fees = num_of_checks * 0.08;
			bank_tot = total_fees + 15;
			cout << "The bank fees for the month are " << total_fees << endl;
			cout << "The total due for the month is " << bank_tot << endl;

		}
		else if (num_of_checks >= 40 && num_of_checks <= 59)
		{
			total_fees = num_of_checks * 0.06;
			bank_tot = total_fees + 15;
			cout << "The bank fees for the month are " << total_fees << endl;
			cout << "The total due for the month is " << bank_tot << endl;

		}
		else if (num_of_checks >= 60)
		{
			total_fees = num_of_checks * 0.04;
			bank_tot = total_fees + 15;
			cout << "The bank fees for the month are " << total_fees << endl;
			cout << "The total due for the month is " << bank_tot << endl;


		}
	/*} while (num_of_checks > 0);*/
	
	else
	{
		cout << "That is not a valid input." << endl;
		cout << "Please restart the program and enter a legal amount." << endl;
	}



	/*Ex. 11 Geometry Calculator

	Write a program that displays the following menu :



	Geometry Calculator

	1. Calculate the Area of a Circle

	2. Calculate the Area of a Rectangle

	3. Calculate the Area of a Triangle

	4. Quit



		Enter your choice(1 - 4) :



		If the user enters 1, the program should ask for the radius of the circleand then display its

		area.Use 3.14159 for π.If the user enters 2, the program should ask for the length and width of the rectangle, and then display the rectangle’s area.
		If the user enters 3, the program	should ask for the length of the triangle’s baseand its height, and then display its area.If the user enters 4, the program should end.

	Input Validation:Decide how the program should handle an illegal input for the menu choice or a negative value for any of the other inputs*/


		const float PIE = 3.14159;
	int user_choice;
	float cir_rad, cir_area, rec_length, rec_width, rec_area, tri_base, tri_height, tri_area;

	//display menu
	cout << "\nGeometry Calculator" << endl;
	cout << "======================" << endl;
	cout << endl;
	cout << "1. Calculate the Area of a Circle" << endl;
	cout << "2. Calculate the Area of a Rectangle" << endl;
	cout << "3. Calculate the Area of a Triangle" << endl;
	cout << "4. Quit" << endl;
	cout << endl;
	cout << "Please enter your chocie (1-4): "; cin >> user_choice;
	//how do I incorporate sig figs?may cin,getline???

	if (user_choice >= 1 && user_choice <= 4)
	{
		switch (user_choice) //switch with different cases
		{
		case 1: cout << "\nPlease enter the radius of the circle: "; cin >> cir_rad;
			if (cir_rad > 0)
			{
				cir_area = pow(PIE * cir_rad, 2);
				cout << "The area of the circle is: " << cir_area;
			}

			else cout << "This is not a valid radius,Please restart program and enter a positive radius" << endl;

			break;
			//break after

		case 2: cout << "\nPlease enter the length of the rectangle: "; cin >> rec_length;
			cout << "Please enter the width of the rectangle: "; cin >> rec_width;
			if (rec_length && rec_width > 0) {
				rec_area = (rec_length * rec_width);
				cout << "The area of the rectangle is: " << rec_area;
			}
			else cout << "This is not a valid length or width,Please restart the program and enter positive values.";
			break;
		case 3: cout << "\nPlease enter the length of the traingle's base: "; cin >> tri_base;
			cout << "Please enter the height of the triangle: "; cin >> tri_height;
			if (tri_base && tri_height > 0) {
				tri_area = (0.5 * tri_base * tri_height);
				cout << "The area of the triangle is: " << tri_area;
			}
			else cout << "This is noat a valid base length or height.Please restart the program and enter positive values.";
			break;

		case 4:cout << "\nYou have chosen to quit the program.";
			break;

		}
	}
	else cout << "That is not a valid menu option.Please restart and enter a valid option.";











	//Ex. 13 Running the Race

		/*Write a program that asks for the names of three runners and the time it took each of 
			them to finish a race. The program should display who came in first,second,and third place.Think about how many test cases are needed to veriy that your
			problem works correctly.(That is how many different finish orders are possible?)
			Input Validation: Only allow the program to accept positive numbers for the times.*/

	//need string for name
	string runner_1, runner_2, runner_3;
	float time_1, time_2, time_3;
	float first, second, third;

	cout << endl;
	cout << "\nRunning the Race" << endl;
	cout << "=================" << endl;

	cout << "This program asks for the names of three runners and the time it took each of \nthem to finsih a race.The program will then display who came in first,second,and third place." << endl;



	cout << "\nWhat is the name of the first runner? "; cin >> runner_1; //get input
	cout << "\nWhat is the name of the second runner? "; cin >> runner_2;
	cout << "\nWhat is the name of the third runner? ";  cin >> runner_3;
	cout << "\nHow long did it take the first runner to finish the race? "; cin >> time_1;
	cout << "\nHow long did it take the second runner to finish the race? "; cin >> time_2;
	cout << "\nHow long did it take the third runner to finish the race? "; cin >> time_3;

	if(time_1 <= 0 || time_2 <= 0 || time_3 <= 0)
	do {
		
		cout << "\nThe time must be greater than zero." << endl; 

			//validate input until legal
			cout << "\nHow long did it take the first runner to finish the race? "; cin >> time_1;
			cout << "\nHow long did it take the second runner to finish the race? "; cin >> time_2;
			cout << "\nHow long did it take the third runner to finish the race? "; cin >> time_3;

		
} while (time_1 <= 0 || time_2 <= 0 || time_3 <= 0); 

//branching if statements

	if (time_1 < time_2 && time_1 < time_3)
	{

		first = time_1;
		cout << endl;
		cout << runner_1 << " finished first with a time of " << first;
	}
	else if (time_2 < time_1 && time_2 < time_3) {

		first = time_2;
		cout << endl;
		cout << runner_2 << " finished first with a time of " << first;
	}
	else if (time_3 < time_1 && time_3 < time_2) {


		first = time_3;
		cout << endl;
		cout << runner_3 << " finished first with a time of " << first;
	}

	if (time_1>time_2 && time_1<time_3)
	{
		second = time_1;
		cout << endl;
		cout << runner_1 << " finished second with a time of " << second;
	}
	else if (time_2>time_1 && time_2<time_3)
	{
		second = time_2;
		cout << endl;
		cout << runner_2 << " finished second with a time of " << second;
	}
	else if (time_3>time_2 && time_3<time_1)
	{
		second = time_3;
		cout << endl;
		cout << runner_3 << " finished second with a time of " << second;
	}
	if (time_1 > time_2&& time_1 > time_3)
	{

		third = time_1;
		cout << endl;
		cout << runner_1 << " finished third with a time of " << third;
	}
	else if (time_2 > time_1&& time_2 > time_3)
	{

		third = time_2;
		cout << endl;
		cout << runner_2 << " finished third with a time of " << third;
	}
	else if (time_3 > time_1&& time_3 > time_2)
	{

		third = time_3;
		cout << endl;
		cout << runner_3 << " finished third with a time of " << third;
	}

	
		


	//Ex. 14 Personal Best
	/*Write a program that asks for the name of a pole vaulter and the dates and vault
		heights (in meters) of the athletes three best values. It should then report in height
		order (best first),the date on which each vault was made,and its height.*/

string name, date1, date2, date3;
long double vault_1, vault_2, vault_3, best_vault, secondb_vault, thirdb_vault;
//same as last one except backwards
cout << endl;
cout << "\nPersonal Best" << endl;
cout << "=============" << endl;

cout << "\nWhat is the name of the pole vaulter? "; cin >> name;
	cout << "What is the height (in meters) of the first vault? "; cin >> vault_1;
	cout << "What is the height (in meters) of the second vault? "; cin >> vault_2;
	cout << "What is the height (in meters) of the third vault? "; cin >> vault_3;
	cout << "Please enter the first date (mm,dd,yy): "; cin >> date1;
	
	cout << "Please enter the second date (mm,dd,yy): "; cin >> date2;
	
	cout << "Please enter the third date (mm,dd,yy): "; cin >> date3;


	

		
	if (vault_1 < 0 || vault_2 < 0 || vault_3 < 0) 

		do {

			cout << "\nVault height must be a positive value" << endl;
			cout << "\nWhat is the height (in meters) of the first vault? "; cin >> vault_1;
			cout << "What is the height (in meters) of the second vault? "; cin >> vault_2;
			cout << "What is the height (in meters) of the third vault? "; cin >> vault_3;

		
	
			}while (vault_1 < 0 || vault_2 < 0 || vault_3 < 0);

	
	
	if (vault_1 > vault_2 && vault_1 > vault_3)
			{
		cout << "\n" << name << "'s best vaults: " << endl;
				best_vault = vault_1;
				cout << endl;
				cout << "The best vault was " << best_vault << " meters on " << date1;
			}
	else if (vault_2 >vault_1&&vault_2>vault_3) {
		cout << "\n" << name << "'s best vaults: " << endl;
		best_vault = vault_2;
		cout << endl;
		cout << "The best vault was " << best_vault << " meters on " << date2;
				
			}
	else if (vault_3>vault_2&&vault_3>vault_1) {
		cout << "\n" << name << "'s best vaults: " << endl;
		
		best_vault = vault_3;
		cout << endl;
		cout << "The best vault was " << best_vault << " meters on " << date3;
			}
		
	if (vault_1>vault_2&&vault_1<vault_3) {
		secondb_vault = vault_1;
		cout << endl;
		cout << "The second best vault was " << secondb_vault << " meters on " << date1;

			}
	else if (vault_2>vault_1&&vault_2<vault_3)
			{
		secondb_vault = vault_2;
		cout << endl;
		cout << "The second best vault was " << secondb_vault << " meters on " << date2;
				
			}
	else if (vault_3>vault_2&&vault_3<vault_1)
			{
		secondb_vault = vault_3;
		cout << endl;
		cout << "The second best vault was " << secondb_vault << " meters on " << date3;

			}
	if (vault_1<vault_2&&vault_1<vault_3)
			{
		thirdb_vault = vault_1;
		cout << endl;
		cout << "The third best vault was " << thirdb_vault << " meters on " << date1;
				
			}
	else if (vault_2 < vault_1 && vault_2 < vault_3)
			{
		thirdb_vault = vault_2;
		cout << endl;
		cout << "The third best vault was " << thirdb_vault << " meters on " << date2;
				
			}
	else if (vault_3 < vault_2 && vault_3 < vault_1)
			{
		thirdb_vault = vault_3;
		cout << endl;
		cout << "The third best vault was " << thirdb_vault << " meters on " << date3;
				
			}








	//Ex. 16 Body Mass Index
	
	//Write a program that calculates and displays a person's body mass index(BMI).The BMI
	//is often used to determine wheter a person with a sedentary lifestly is overweight or
	//underweight for his height.A person's BMI is calculated with the following formula:
	//BMI=weightx703/height^2

	//where weight is measured in pounds and height is meaured in inches.
	//The program should display a message indicating wheter the person has optimal weight,is
	//underweight,or is overweight.A sedentary person's weight is considered to be optimal if his 
	//BMI is between 18.5 and 25.If the BMI is less than 18.5,the person is considered to be underweight.
	//If the BMI is greater than 25 the person is considered overweight.
	//
	
	
	
	
	
	float weight, height;
	double  bmi;
	cout << endl;
	cout << "\nBody Mass Index" << endl;
	cout << "===============" << endl;


	cout << "\nPlease enter the weight in lbs of the person: "; cin >> weight; //get input
	cout << "Please enter the height in inches of the person: "; cin >> height;

	bmi = (weight * 703) / (height*height);
	if (weight <= 0||height<=0) 
		do {
			cout << "\nThe weight and height should be positive values" << endl;
		
			cout << "\nPlease enter the weight in lbs of the person: "; cin >> weight;
			cout << "Please enter the height in inches of the person: "; cin >> height;
		} while (weight<=0||height <= 0); //calculate
		cout << "This person's BMI is "<< bmi;
	if (bmi < 18.5)
		cout << "\nThis person is considered to be underweight";
	else if (bmi > 25)
		cout << "\nThis person is consider to be overweight";
	else if (bmi >= 18.5 && bmi <= 25)
		cout << "\nThis person's BMI is considered optimal";
	


	








	//Ex. 17 Fat Gram Calculator
/*
Write a program that asks for the number of calories and fat grams in a food. The program should display the percentage of calories that come from fat.
If the calories from fat are less than 30% of the total calories of the food, it should also display a message indicating that the food is low in fat.
One gram of fat has 9 calories, so
Calories from fat= fat grams * 9
The percentage of calories from fat can be calculated as
Calories from fat 􏰅 total calories
Input Validation: Make sure the number of calories and fat grams are not less than 0. Also, the number of calories from fat cannot be greater than the total number of calories.
If that happens, display an error message indicating that either the calories or fat grams were incorrectly entered.


*/

int calories, fat,cal_from_fat,tot_calories;
double percentage{};
cout << endl;
cout << "\nFat Gram Calculator" << endl;
cout << "===================" << endl;





//a different way of looking at testing user input while using loops
while (true) {
	//use a while loop to validate the user input
	cout << "\nPlease enter number of calories in grams: ";cin >> calories;



	if (calories < 0) {
		cout << "Calories cannot be less than 0.Enter a legal value." << endl;
	}
	else {
		break;
	}
}
while (true) {
	cout << "Please enter number of fat in grams: ";cin >> fat;
	if (fat < 0) {
		cout << "Grams of fat cannot be less than 0.Enter a legal value." << endl;
	}
	else {
		break;
	}
}

//calculations on data

 cal_from_fat = (fat * 9);

 tot_calories = (calories + cal_from_fat);

if (cal_from_fat > tot_calories) 
	
	cout << "Either calories or fats were entered incorrectly" << endl;

else {

	percentage = 100 * cal_from_fat / tot_calories;



	cout << "Percentage: " << percentage <<"%"<< endl;
}
	
	if (percentage < 30) {
	
		cout << "This food is low in fat." << endl; //cout statements
	}
	else {
		
		cout << "This food is high in fat." << endl;
	}







	system("pause");
	return 0;
}


