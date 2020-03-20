

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	//Challenge 2 Roman Numeral Converter*/
	 /*
	 Write a program that asks the user to enter a number within the range of 1 through 10.Use a switch statement to display the Roman numeral version of that number.
	 Input Validation: Decide how the program should handle an input that is less than 1 or greater than 10.

	 define roman numerals
	 get input in the range of 1 through 10 from the user
	 use a switch statement to display the corresponding roman numeral of that number
	 print to the screen
	 if user enters a number that is not within that range display an error
	 */
	cout << "This program asks the user to enter a number from 1 to 10 and displays the corresponding Roman Numeral" << endl;
	int number; //define identifier

	cout << "Enter a number within the range of 1 through 10: ";
	cin >> number;

	if (number < 1 || number>10) {

		cout << "This is not within the specified range." << endl;
		cout << "Please restart the program and choose a valid number." << endl; //validate user input
	}

	switch (number) //switch cases for user input
	{

	case 1: number = 1, cout << "\nThe corresponding Roman Numeral is I" << endl;
		break;

	case 2: number = 2, cout << "\nThe corresponding Roman Numeral is II" << endl;
		break;
	case 3: number = 3, cout << "\nThe corresponding Roman Numeral is III" << endl;
		break;
	case 4: number = 4, cout << "\nThe corresponding Roman Numeral is IV" << endl;
		break;
	case 5: number = 5, cout << "\nThe corresponding Roman Numeral is V" << endl;
		break;
	case 6: number = 6, cout << "\nThe corresponding Roman Numeral is VI" << endl;
		break;
	case 7: number = 7, cout << "\nThe corresponding Roman Numeral is VII" << endl;
		break;
	case 8: number = 8, cout << "\nThe corresponding Roman Numeral is VIII" << endl;
		break;
	case 9: number = 9, cout << "\nThe corresponding Roman Numeral is IX" << endl;
		break;
	case 10: number = 10, cout << "\nThe corresponding Roman Numeral is X" << endl;
		break;

	}
	system("pause");







	/*Challenge 3 Magic Dates*/
	/*
		The date June 10,1960, is special because when we write it in the following format,the month times the day equals the year
	6/10/60
	Write a program that asks the user to enter a month(in numeric form), a day,and a two-digit year.The program should then determine whtere the month times the day is equal to the year.
	If so it should display a message saying the date is magic.
	Otherwise it should display a message saying the date is not magic.
	Input Validation: Think about what legal values the program should accept for month and day.
	*/

	cout << "\nThis program asks the user to enter a month,day,and a two-digit year." << endl << "The program will then determine whtere the month times the day is equal to the year." << endl;
	cout << "If so it should display a message saying the date is magic\nOtherwise it should display a message saying the date is not magic." << endl;



	int month, day, year; //define identifiers

	//get data and set conditions
	cout << "\nEnter a month: ";
	cin >> month; 

	if (month <= 0 || month > 12) {
		cout << "That is not a valid month";
		cout << "\nPlease restart the program" << endl;
	}
	cout << "Enter a day: ";
	cin >> day;

	if (day <= 0 || day > 31) {
		cout << "That is not a valid day";
		cout << "\nPlease restart the program" << endl;
	}
	cout << "Enter a two-digit-year: ";
	cin >> year;

	if (year <= 0) {
		cout << "That is not a valid year";
		cout << "\nPlease restart the program" << endl;
	}
	{
	if (month * day == year) 
		cout << "\nThat is a magic date!" << endl;
	else cout << "\nThat is not a magic year" << endl;
	}






	system("pause");





	/*Challenge 4 Area of rectangles

	The area of a rectangle is the rectanbgles length times its width.Write a program that asks for the length and witdth of two rectangles.
	The program hsould then tell the user which rectangle has the greater area or if the areas are the same.*/

	cout << "\nThis program asks for the length and width of two rectangles.It then tells the user \nwhich rectangle has the greater area or if the areas are the same" << endl;
	int length_1, length_2, width_1, width_2, area_1, area_2; //define identifiers

	cout << "\nEnter the length of the first rectangle: ";
	cin >> length_1;
	cout << "\nEnter the width of the first rectangle: ";
	cin >> width_1;
	cout << "\nEnter the length of the second rectangle: ";
	cin >> length_2;
	cout << "\nEnter the width of the second rectangle: ";
	cin >> width_2;


	area_1 = length_1 * width_1; //define area
	area_2 = length_2 * width_2;
	//conditions
	if (area_1 == area_2)
		cout << "\nThe area of the two rectangles are the same."<<endl;
	

	{

		if (area_1 > area_2)
			cout << "\nThe area of the first rectangle is larger." << endl;
		else if(area_1<area_2)
			cout << "\nThe area of the second rectangle is larger." << endl;
	}





	system("pause");


	/*Challenge 5 Book Club Points
	
	
		An online book club awards points to its customers based on the number of books purchased each month.Points are awarded as follows:
	--------------------------------
	Books Purchased				Points Earned
	0								0	
	1								5	
	2								15
	3								30	
	4 or more						50
	-----------------------------------
	Write a program that asks the user to enter the number of books purchased this month and then displays the number of points awarded.*/



	int num_of_books;

	cout << "\nThis program asks the user to enter the number of books purchased this month and then displays \nthe number of points awarded.";
	cout << "\nEnter the number of books purchased this month: ";
	cin >> num_of_books;

	
	//correspond # of books to points
	
	if (num_of_books == 0)
		cout << "Points earned: 0" << endl;

	else if (num_of_books == 1)
		cout << "Points earned: 5" << endl;

	else if (num_of_books == 2)
		cout << "Points earned: 15" << endl;

	else if (num_of_books == 3)
		cout << "Points earned: 30" << endl;

	else if (num_of_books >= 4)
		cout << "Points earned: 50" << endl;

	else cout << "That is not a valid option." << endl << "Please restart the program and enter a number from (0-+infinity)." << endl;
		

		
		

	
	
	system("pause");



	//Challenge 8 Math Tutor Version 2

   /*Write a program that can be used as a math tutor for a young student.The program should display two random numbers between 10 and 50 that are to be added,such as:
   24
   +12
   ---
   The program should then wait for the student to enter the answer.if the answer is correct, a message of congratulations should be printed.If the answer is incorrect,a
   message should be printed showing the correct answer.*/



cout << "This program displays two random numbers between 10 and 50 that the user will add together.\nThe program will then tell the user if that is correct." << endl;
//random number generator ranging from 10/ 50
	srand(time(NULL));

	int num_1, num_2, ans, real_ans;

	num_1 = (rand() % 40) + 10;
	num_2 = (rand() % 40) + 10;
	cout << "   " << num_1 << endl;
	cout << "  +" << num_2 << endl;
	cout << " ------" << endl;

	cout << "\nPlease enter your answer: ";
	cin >> ans;

	real_ans = num_1 + num_2;

	//conditions
	if (ans == real_ans)
		cout << "Congratulations,you are correct!" << endl;
	else
		cout << "That is not correct." << endl << "The correct answer is " << real_ans << endl;




	system("pause");

	//count
	//long long int x = 1;
	//while (x<10000) {
	//	cout << x++ << endl;
	//}
	//
	//	
	//	
	//
	//
	//
	//
	//system("pause");














	return(0);
}

