
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    //define constants
	const int AIR = 1100;
	const int WATER = 4900;
	const int STEEL = 16400;

	//define identifiers
	int choice;
	double distance, time;
	string A = "Air";
	string B = "Water";
	string C = "Steel";
	
	//Display the menu and get the choice

	cout << "Select a medium" << endl;
	cout << " 1. Air" << endl;
	cout << " 2. Water" << endl;
	cout << " 3. Steel" << endl;
	cout << "\nEnter your choice: ";
	cin >> choice;
	
	
	//choices for the user
	//manipulate data for user
	switch (choice)
	{
	case 1:  

		cout << "Enter the distance: ";
		cin >> distance;
		if (distance <= 0)
			cout << "That is not a valid distance " << endl;
		
		
		else if (distance >0)
		time = distance / AIR;
		cout << fixed << showpoint << setprecision(2);
		cout << "A sound wave takes " << time << " seconds to travel " << distance << " feet through " << A << endl;
		break;
	case 2: 
		cout << "Enter the distance: ";
		cin >> distance;
		if (distance <= 0)
			cout << "That is not a valid distance " << endl;
		
		else if (distance > 0)
		time = distance / WATER;
		cout << "A sound wave takes " << time << " seconds to travel " << distance << " feet through " << B << endl;
		break;
	case 3: 
		cout << "Enter the distance: ";
		cin >> distance;
		if (distance <= 0)
			cout << "That is not a valid distance " << endl;
		
		else if (distance > 0)
		time = distance / STEEL;
		cout << "A sound wave takes " << time << " seconds to travel " << distance << " feet through " << C << endl;
		break;

	default: (choice < 1 || choice >3);
		cout << "The valid choices are 1 through 3." << endl;
		cout << "Run the program again and select one of those.";
		return(0);


	}
		

	system("pause");



	return(0);
}

