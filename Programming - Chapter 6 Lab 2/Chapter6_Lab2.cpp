// Chapter6_Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>

using namespace std;
/*
Overloaded Hospital



Write a program that computes and displays the charges for a patient’s hospital

stay. First, the program should ask if the patient was admitted as an in-patient

or an out-patient. If the patient was an in-patient the following data should be

entered

	 The number of days spent in the hospital

	 The daily rate

	 Charges for hospital services (lab tests, etc.)

	 Hospital medication charges.

If the patient was an out-patient the following data should be entered:



	Charges for hospital services (lab tests, etc.)

	 Hospital medication charges.

Use a single,seperate function to validate that no input is less than zero.If it is,it should be reentered before being returned.


Once the required data has been input and validated, 
The program should use two overloaded functions to calculate the total charges.

One of the functions should accept arguments for the in-patient data, while the

other function accepts arguments for out-patient data. Both functions should

return the total charges.



	

*/

	// prototype the functions used

	double total(int, double, double, double);
	//two defferent total functions since it varies between patient type will calculate based on switch

	double total(double, double);

	void holdscreen();

	int validate_input(int );

	

	int main(){
		int    num_days;

		char   patient_type, user_selec = 'y';
		//define identifiers and characters used for selection


		double daily_rate,serv_charge,med_charge,tot_charge;
		//run program while character y is selected
		while (user_selec == 'y') {
			
				cout << "Overloaded Hospital" << endl;
				cout << "====================" << endl;
				cout << "This program computes and displays a patients hospital charges depending \non if they were an inpatient or an outpatient.\n";
				//tell what the program will do
				cout << endl;

				cout << "Was patient admitted as an in-patient or an out-patient?\n";

				cout << "Enter (1) for in-patient\nEnter (2) for out-patient\n";
				//get input from user for swtich
				cout << "selection: "; cin >> patient_type;


				switch (patient_type)
               //use input to switch data
				{



				case '1':



					cout << "How many days were spent in the hospital? ";

					cin >> num_days;


					//all input data is verified to be more than 0 by validate input function
					validate_input(num_days);





					cout << "What was the daily rate? ";

					cin >> daily_rate;
					validate_input(daily_rate);


				









				case '2':



					cout << "Enter the charges for hospital services "

						<< "(lab tests, etc.): ";

					cin >> serv_charge;


					validate_input(serv_charge);





					cout << "Enter the hospital medication charges: ";

					cin >> med_charge;

					validate_input(med_charge);






				}


				// display top of report generated
				cout << "\n             Hospital charge report\n"

					<< "========================================================\n";
				//set precision for decimal
				cout << right << fixed << showpoint << setprecision(2);





				switch (patient_type)

				{

					//total is adjusted for each type of patient.display data depending on which type of patient was selected
					//set width for output data
					cout << fixed << setw(10);
				case '1': tot_charge = total(num_days, daily_rate, serv_charge, med_charge);

					cout << "Number of days spent in the hospital  "

						<<  num_days << endl;

					cout << "Daily rate                            $"

						<< daily_rate << endl;

					break;



				case '2': tot_charge = total(serv_charge, med_charge);


				}




				//display data for the user to see.

				cout << "Charges for hospital services         $"

					 << serv_charge << endl;

				cout << "Hospital medication charges           $"

					 << med_charge << endl;

				cout << "Total charges                         $"

					 << tot_charge << endl;

				//repeat program question
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
		

	
		//define various functions used within the program

			double total(int num_days, double DailyRate, double ServChges,

				double MedChges) {

				return (num_days * DailyRate) + total(ServChges, MedChges);
				//return the calculated total
			}



			//second total function based on outpatient instead,differers by paramters used.

			double total(double ServChges, double MedChges)

	{

		return ServChges + MedChges;
		//return calculated total
	}

			//define holdscreen function
	void holdscreen() {
		cout << endl;
		cout << "Please press enter to continue" << endl;
		
		cin.ignore();
		cin.get();
		system("cls");
	}
	//define function used to check number for positive value
	int validate_input(int x) {

		while (x < 0) {
			cout << "Please enter a valid input" << endl;
			cin >> x;

		}
		
		return x;
	}




