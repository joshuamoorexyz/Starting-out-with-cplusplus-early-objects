

/*
Author: Joshua Moore
Chapter 10 Learning C++

Complete the following programming challenges from page 701-702 in your book. Use proper documentation, indentation, and blank lines as necessary to make the code easier to understand.  Please do not procrastinate.

Programming Challenges to Complete:

Programming Challenge 1 - Test Scores #1
Programming Challenge 2 - Test Scores #2
Programming Challenge 5 � Pie a la Mode
Programming Challenge 6 � Median Function


1. Test Scores # 1
Write a program that dynamically allocates an array large enough to hold a user-defined
number of test scores. Once all the scores are entered, the array should be passed to a
function that sorts them in ascending order. Another function should be called that
calculates the average score. T he program should display the sorted list of scores and
averages with appropriate headings. Use pointer notation rather than array notation
whenever possible.
Input Validation: Do not accept negative numbers for test scores.

2. Test Scores #2
Modify the program of Programming Challenge 1 to allow the user to enter name-score
pairs. For each student taking a test, the user types a string representing the name of the
student, followed by an integer representing the student's score. Modify both the sorting
and average-calculating functions so they take arrays of structures, with each structure
containing the name and score of a single student. In traversing the arrays, use pointers
rather than array indices.


5. Pie a la Mode
In statistics the mode of a set of values is the value that occurs most often. Write a
program that determines how many pieces of pie most people eat in a year. Set up an
integer array that can hold responses from 30 people. For each person, enter the number
of pieces they say they eat in a year. Then write a function that finds the mode of these 30
values. This will be the number of pie slices eaten by the most people. The function that
finds and returns the mode should accept two arguments, an array of integers, and a
value indicating how many elements are in the array.

6. Median Function
In statistics the median of a set of values is the value that lies in the middle when the values
are arranged in sorted order. If the set has an even number of values, then the median is
taken to be the average of the two middle values. Write a function that determines the
median of a sorted array. The function should take an array of numbers and an integer
indicating the size of the array and return the median of the values in the array. You may
assume the array is already sorted. Use pointer notation whenever possible.


*/

#include <iostream>
#include <iomanip>
#include <string>

//did not need this
//#include <memory>

//use standard namespace for cin cout
using namespace std;

//started using uppercamecase naming schema since that is what ive been using with unreal engine for my final project

//prototype all the functions that will be used

void HoldScreen();
//functions that will be used in the first program
void GetScores(double*, int);
void SortAscending(double*, int);
double GetAverage(double*, int);
void PrintToScreen(double*, int, double);




//functions that will be used in the second program 



void displayResults(const int* testScores, const string* studentNames,
	const double averageScore, const int numScores);
void getTestScores(int* testScores, string* studentNames, const int numScores);
void sortScores(int* testScores, string* studentNames, const int numScores);
void GetScores(int*, int);
void SortAscending1(int*, int);
int GetMode(int*, int);
double getMedian(int*, int);
double calcAverage1(int* testScores, const int numScores);




//start of the main function
int main()
{

	//ptr variable with inderection operator
	double* Test,Avg;		
	int TestScores;			

	//assign a string with the member operator to print a dividing line between all programs.
	string str;
	str.assign(20, '-');

	//print each title for programs
	cout << "Test Scores #1";
	cout << endl;
	cout << str;
	cout << endl;


	//take the amount of test scores to be entered from the user
	cout << "How many test scores do you wish to enter then average? ";
	cin >> TestScores;

	//array based on user input
	Test = new double[TestScores];	
	//pass array and num of test scores to function to obtain the scores
	GetScores(Test, TestScores);

	SortAscending(Test, TestScores);

	Avg = GetAverage(Test, TestScores);

	PrintToScreen(Test, TestScores, Avg);


	HoldScreen();






	//start of second program






	cout << "Test Scores #2";
	cout << endl;
	cout << str;
	cout << endl;
	

	//use of nullptr until assigned
	int* testScores = nullptr;
	string* studentNames = nullptr;

		int numScores = 0;

	double averageScore = 0.0;
	cout << "How many test-scores do you wish to enter? ";
	cin >> numScores;

	cout << endl;

	//dynamic arrays
	testScores = new int[numScores];
	studentNames = new string[numScores];

	
	getTestScores(testScores, studentNames, numScores);
	sortScores(testScores, studentNames, numScores);
	averageScore = calcAverage1(testScores, numScores);
	displayResults(testScores, studentNames, averageScore, numScores);





    HoldScreen();



	//start of the third program
	const int ppl = 30;
	int slices[ppl];

	int* pSlices = slices;

	cout << "Pie a la Mode";
	cout << endl;
	cout << str;
	cout << endl;

	GetScores(pSlices, ppl);
	SortAscending1(pSlices, ppl);

	for (int i = 0; i < ppl; i++)
	{
		cout << slices[i] << " ";
	}

	cout << "\nNumber of pie slices eaten by the most people: "
		<< GetMode(pSlices, ppl) << endl;

	HoldScreen();





	//start of the fourth program
	const int SIZE = 10;
	int List[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int* pList = List;
	cout << "Median Function";
	cout << endl;
	cout << str;
	cout << endl;
	cout<<"Out of a list of numbers ranging from 1 to 10 the median is: " << getMedian(pList, SIZE) << endl;


	HoldScreen();

	
	return 0;
}









//Function that will get the scores from the user
void GetScores(double* Test, int Scores)
{string str;
			str.assign(20, '=');
			cout << "Please enter the scores of the various tests: ";
			cout << endl; 
			cout << str;




	//range based for loop for entering the test scores
	for (int i = 0; i < Scores; i++)
	{
		

			
			/*cout << endl;*/
			
			cout << endl;
			cout << "Test #" << (i+1) << " ";cin >> *(Test + i);
			cout << endl;
			cout << str;
			
			//validate input
			while (*(Test + i) < 0 || *(Test + i) > 100)
			{
				cout << endl;
				cout << "That is not a valid test score.Please enter a valid score.";
				cin >> *(Test + i);
			}

		
	}
}
//function that will sort the scores 
void SortAscending(double* Test, int TestScores)
{
	int SortPlace, MinI;
	double MinVal;
	//sorting algorithm used in previous chapter
	for (SortPlace = 0; SortPlace < (TestScores - 1); SortPlace++)
	{
		MinI = SortPlace;
		MinVal = *(Test + SortPlace);
		for (int i = SortPlace + 1; i < TestScores; i++)
		{
			if (*(Test + i) < MinVal)
			{
				MinVal = *(Test + i);
				MinI = i;
			}

		}
		*(Test + MinI) = *(Test + SortPlace);
		*(Test + SortPlace) = MinVal;
	}
}





//this function will calculate the average of the test scores the user entered
double GetAverage(double* Test, int Scores)
{
	double Total{};

	for (int i = 0; i < Scores; i++)
	{
		Total += *(Test + i);
	}

	return Total / Scores;
}
//this function prints the scores
void PrintToScreen(double* Test, int Scores, double Avg)
{
	cout << "\n    Test scores\n";
	cout << "Number of scores: " << Scores << endl;
	cout << "Scores in ascending-order:\n";
	for (int i = 0; i < Scores; i++)
	{
		cout << "#" << (i + 1) << ": " << *(Test + i) << endl;
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "Average score: " << Avg << endl;
}
//second program functions




void getTestScores(int* testScores, string* studentNames, const int numScores)
{
	for (int index = 0; index < numScores; index++)
	{
		cout << "Student Name: ";
		cin >> *(studentNames + index);

		cout << "Score #" << (index + 1) << ": ";
		cin >> *(testScores + index);

		/* Validate Input */
		while ((*(testScores + index) <= 0) ||
			(*(testScores + index) > 100.0))
		{
			cout << endl;
			cout << "You entered an invalid score!";
			cout << endl;
			cout << "Score #" << (index + 1) << ": ";
			cin >> *(testScores + index);
		}
	}
	cout << "\n";
}

void sortScores(int* testScores, string* studentNames, const int numScores)
{
	int startScan = 0,
		minIndex = 0,
		minElem = 0,
		index = 0;

	string tempNames = " ";

	for (startScan = 0; startScan < (numScores - 1); startScan++)
	{
		minIndex = startScan;
		minElem = *(testScores + startScan);
		tempNames = *(studentNames + startScan);

		for (index = startScan + 1; index < numScores; index++)
		{
			if (*(testScores + index) < minElem)
			{
				minElem = *(testScores + index);
				tempNames = *(studentNames + index);
				minIndex = index;
			}
		}

		*(testScores + minIndex) = *(testScores + startScan);
		*(studentNames + minIndex) = *(studentNames + startScan);
		*(testScores + startScan) = minElem;
		*(studentNames + startScan) = tempNames;
	}

}


double calcAverage1(int* testScores, const int numScores)
{
	double total = 0.0,
		average = 0.0;

	for (int count = 0; count < numScores; count++)
	{
		total += *(testScores + count);
	}

	/* Calculates and returns the average */
	return average = total / numScores;
}





void displayResults(const int* testScores, const string* studentNames,
	const double averageScore, const int numScores)
{

	string str;
	str.assign(20, '=');
	int index = 0;

	

	cout << "Test Scores";
	cout << endl;
	cout << "Name: " << "    " << "Test Score";
	cout << endl;
		cout << str;
		cout << endl;
	for (index = 0; index < numScores; index++)
	{
		cout  << *(studentNames + index)
			<< setw(20) << right << *(testScores + index)
			<< " \n";
	}
	cout << str;
	cout << endl;
		cout<< "Average of test scores: " << averageScore ;
	cout << endl;
}


























//functions for the third program


void GetScores(int* array, int size)
{
	cout << "Enter the number of pie slices eaten by each person in a year.\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Person " << (i + 1) << ": ";
		cin >> *(array + i);
	}
}

int GetMode(int* array, int size)
{
	int count, hold, mode{};
	count = hold = 0;

	for (int index = 0; index < size; index++)
	{
		count++;
		if (*(array + index) < *(array + index + 1))
		{
			if (count > hold)
			{
				mode = *(array + index);
				hold = count;
			}
			count = 0;
		}
	}
	return mode;
}

void SortAscending1(int* array, int size)
{
	int minIndex, minValue;

	for (int scan = 0; scan < (size - 1); scan++)
	{
		minIndex = scan;
		minValue = *(array + scan);
		for (int i = scan + 1; i < size; i++)
		{
			if (*(array + i) < minValue)
			{
				minValue = *(array + i);
				minIndex = i;
			}
		}
		*(array + minIndex) = *(array + scan);
		*(array + scan) = minValue;
	}
}


//fourth program functions
double getMedian(int* array, int size)
{
	int mid = (size - 1) / 2;
	double med;

	if (size % 2 == 0)
	{
		med = (*(array + mid) + *(array + (mid + 1))) / 2;
	}
	else
		med = *(array + mid);


	return med;
}



void HoldScreen() {
	cout << endl;
	cout << "Press enter to continue:" << endl;
	cin.get();
	cin.ignore();
	cout<<endl;
	cout<<endl;
	cout<<endl;
}