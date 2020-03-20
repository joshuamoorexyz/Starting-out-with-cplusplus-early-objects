

#include <iostream>
#include <string>
#include<iomanip>


using namespace std;

// 5. Winning Division
/*
Write a program that determines which of a company's four divisions (Northeast,Souteast,Northwest,and Southwest) had the greatest sales for a quarter.
It should include the following two functions,which are called by main.

double getSales() is passed the name of a division.It asks the user for a division's quarterly sales figure,validates that the input is not less than 0,then returns it.
It should be called once for each division.

void findHighest() is passed the four sales totals.It determines which is the largest and prints the name of the high grossing division,along with its sales figure.


*/


//prototype functions
double getsales(string);
void findHighest(double,double,double,double);
void holdscreen();


int main() 
{
	//initially true so that the program will run
	char user_selec5 = 'y';






	
	//loop to repeat program if char y is returned
	while (user_selec5 == 'y'){

		//define identifiers used
		double Northeast, Southeast, Northwest, Southwest;
		cout << "Winning Division" << endl;
		cout <<"=================" << endl;
		cout << endl;
		cout << "This program determines which of a company's four divisions had the greatest sales for a quarter. "; cout << endl << endl;
		//tell what the program does to the user
		Northeast = getsales("Northeast");
		Southeast = getsales("Southeast");
		Southwest = getsales("Southwest");
		Northwest = getsales("Northwest");
		//different division names for the function getsales


		//call highest function to find highest sales
		findHighest(Northeast, Southeast, Southwest, Northwest);

		//prompt the user to repeat the program
		cout << "Would you like to repeat this program? (y/n):";
		cin >> user_selec5;
		if (user_selec5 == 'n') 
			break;
		//validate the input of the loop
		while (user_selec5 != 'y' && user_selec5 != 'n') {
			cout << "Please select either y or n: ";
			cin >> user_selec5;
		}}
	holdscreen();
	//exit program
	return(0);
}
//getsales function definition
double getsales(string Division_name) {
				double quart_sales;





				cout << "What is the " << Division_name << " division's quarterly sales figure? ";

				cin >> quart_sales;


				//validate the input for quarterly sales
				if (quart_sales < 0.00)

					cout << "Error! Invaid sales figure.\n"

					<< "Quarterly sales must be greater than $0.00\n";



			 while (!(quart_sales > 0.00));

			return quart_sales;
		}

//define the function that finds the highest grossing division
		void findHighest(double Northeast, double Southeast, double Northwest, double Southwest) {
			//define identifier
			double high;
			cout << "\nThe Hightest grossing division is the ";



			if (Northeast > Southeast&& Northeast > Northwest&& Northeast > Southwest)

			{

				high = Northeast;

				cout << "Northeast ";

			}

			else if (Southeast > Northeast&& Southeast > Northwest&& Southeast > Southwest)

			{

				high = Southeast;

				cout << "Southeast ";

			}

			else if (Northwest > Southeast&& Northwest > Northeast&& Northwest > Southwest)

			{

				high = Northwest;

				cout << "Northwest ";

			}

			else

			{

				high = Southwest;

				cout << "Southwest ";

			}



			//format output
			cout << fixed << showpoint << setprecision(2);

			cout << "division with $" << high << " in sales.\n";
		}
	
		//function to hold the screen
		void holdscreen() {
			cout << endl;
			cout << "Please press enter to continue" << endl;
			cin.ignore();
			cin.get();
			


		}

	




