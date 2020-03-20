// Chapter6_Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>

using namespace std;
/*
Population

In a population, the birth rate is the percentage increase of the population due to births, and the death rate is the percentage decrease of the population due to deaths. Write a program that asks for the following:
The starting size of a population (minimum 2) (Prompt Enter starting size:)
The annual birth rate (Prompt Enter annual birth rate:)
The annual death rate (Prompt Enter annual death rate:)
The number of years to display (minimum 1) (Prompt Enter years to display:)
The program should then display the starting population and the projected population at the end of each year. It should use a function that calculates and returns the projected new size of the population after a year. The formula is
N = P(1 + B)(1 - D)
where N is the new population size, 
P is the previous population size, B is the birth rate, 
and D is the death rate. 
Annual birth rate and death rate are the typical numbers of births and deaths in a year per 1000 people, expressed as a decimal.
So, for example, if there are normally about 32 births and 26 deaths per 1000 people in a given population, the birth rate would be .032 and the death rate would be .026.


*/

// prototype the functions used

void info(int&, double&, double&, int&);

int projected(int x , double y , double z);

void holdscreen();
//validate input for each 
int validate_input(int);

int validate_input1(int);

int validate_input2(int);
//start of the main function
int main() {
	

	char    user_selec = 'y';
	//define identifiers and characters used for selection


	
	//run program while character y is selected
	//initially true
	while (user_selec == 'y') {
		//replace with generated string of special characters
		cout << "Population" << endl;
		cout << "===========" << endl;
		cout << "This program displays the starting population and the projected population at the end of each year\n";
		//tell what the program will do
		cout << endl;
		//define identifiers used
		int 	start,	num_years,	p_pop;	
        double b, d;



	



		//call info function

		info(start, b, d, num_years);



		//display results

		cout << "\n           Population projection \n";
			cout <<  endl;


			cout << "       Year    starting      projected \n";

			cout<< "     =================================\n";



		//for loop iterating year and projected calculations

		for (int year = 1; year <= num_years; year++)

		{
			//call projected and store in variable
			 p_pop = projected(start,  b,  d);

			

			cout << setw(10) << year << "      " << setw(5) << start;

			cout << "             " << setw(-2) << p_pop << endl;

			start =p_pop;

			

		}

		//restart program
		cout << "Would you like to repeat this program? (y/n): " << endl;
		cin >> user_selec;
		if (user_selec == 'n')
			return(0);
		//validate character input
		while (user_selec != 'y' && user_selec != 'n') {
			cout << "Please select either y or no: ";
			cin >> user_selec;

			//call hold screen function
		}holdscreen();
		
	}	
}
//projected function
	int projected(int x, double y, double z)

	{
		//formula given
		 x=x * (1.0 + y) * (1.0 - z);
		 return x;

	}



	//info function
	void info(int& start, double& b, double& d, int& num_years)

	{

		
		//validate all inputs
			cout << "What is the starting size of the population? ";

			cin >> start;

			validate_input1(start);
			//could have validated with loops for cleaner code but wanted to continue the use of functions being called to validate the input
		



		

			cout << "What is the annual birth rate? ";

			cin >> b;
			b = b / 1000;

			validate_input(b);

		



	

			cout << "What is the annual death rate? ";

			cin >> d;
			d = d / 1000;
			validate_input(d);

		



		

			cout << "How many year to display? ";

			cin >> num_years;

			validate_input2(num_years);

		

	}


	//hold screen function
	void holdscreen() {


		cout << endl;
		cout << "Please press enter to continue" << endl;

		cin.ignore();
		cin.get();
		system("cls");
	}
	//each type of validation function
	int validate_input(int x) {

		while (x < 0) {
			cout << "Please enter a valid input" << endl;
			cin >> x;

		}
		
			return x;
	}



	int validate_input1(int x) {

		while (x < 2) {
			cout << "Please enter a valid input" << endl;
			cin >> x;

		}
		
			return x;
	}

	int validate_input2(int x) {

		while (x < 1) {
			cout << "Please enter a valid input" << endl;
			cin >> x;

		}
		
			return x;
	}












