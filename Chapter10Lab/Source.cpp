


//Author: Joshua Moore
//Chapter 10 Learning C++
//
//Complete the following programming challenges from page 701-702 in your book. Use proper documentation, indentation, and blank lines as necessary to make the code easier to understand.  Please do not procrastinate.
//
//Programming Challenges to Complete:
//
//Programming Challenge 1 - Test Scores #1
//Programming Challenge 2 - Test Scores #2
//Programming Challenge 5 � Pie a la Mode
//Programming Challenge 6 � Median Function
//
//
//1. Test Scores # 1
//Write a program that dynamically allocates an array large enough to hold a user-defined
//number of test scores. Once all the scores are entered, the array should be passed to a
//function that sorts them in ascending order. Another function should be called that
//calculates the average score. T he program should display the sorted list of scores and
//averages with appropriate headings. Use pointer notation rather than array notation
//whenever possible.
//Input Validation: Do not accept negative numbers for test scores.
//
//2. Test Scores #2
//Modify the program of Programming Challenge 1 to allow the user to enter name-score
//pairs. For each student taking a test, the user types a string representing the name of the
//student, followed by an integer representing the student's score. Modify both the sorting 
//and average-calculating functions so they take arrays of structures, with each structure
//containing the name and score of a single student. In traversing the arrays, use pointers
//rather than array indices.
//
//
//5. Pie a la Mode
//In statistics the mode of a set of values is the value that occurs most often. Write a
//program that determines how many pieces of pie most people eat in a year. Set up an
//integer array that can hold responses from 30 people. For each person, enter the number
//of pieces they say they eat in a year. Then write a function that finds the mode of these 30
//values. This will be the number of pie slices eaten by the most people. The function that
//finds and returns the mode should accept two arguments, an array of integers, and a
//value indicating how many elements are in the array.
//
//6. Median Function
//In statistics the median of a set of values is the value that lies in the middle when the values
//are arranged in sorted order. If the set has an even number of values, then the median is
//taken to be the average of the two middle values. Write a function that determines the
//median of a sorted array. The function should take an array of numbers and an integer
//indicating the size of the array and return the median of the values in the array. You may
//assume the array is already sorted. Use pointer notation whenever possible.




#include <iostream>
#include <iomanip>
#include <string>

//did not need this not working with smart pointers
//#include <memory>

//use standard namespace for cin cout
using namespace std;

//started using uppercamecase naming schema since that is what ive been using with unreal engine for my final project

//prototype all the functions that will be used

void HoldScreen();
void GetScores(double*, int);
void SortAscending(double*, int);
double GetAverage(double*, int);
void PrintToScreen(double*, int, double);
void DisplayTestResults(const int* testScores, const string* studentNames,
	const double averageScore, const int numScores);
void getTestScores(int*Scores, string* studentNames, const int numScores);
void SortScores(int* Scores, string* Names, const int numScores);
void GetScores(int*, int);
void SortAscending1(int*, int);
int GetMode(int*, int);
double GetMedian(int*, int);
double CalcAverage1(int* testScores, const int numScores);




//start of the main function
int main()
{

		

	//assign a string with the member operator to print a dividing line between all programs.
	string str;
	str.assign(20, '-');

	//print each title for programs
	cout << "Test Scores #1";
	cout << endl;
	cout << str;
	cout << endl;

//ptr variable with inderection operator
	double* Test,Avg;		
	int TestScores;		

	//take the amount of test scores to be entered from the user
	cout << "How many test scores do you wish to enter and then average? " << endl;
	cout << "Enter your answer: ";
	cin >> TestScores;
	cout << endl;
	//array based on user input
	Test = new double[TestScores];	
	

	//pass to functions to provide the needed output
	GetScores(Test, TestScores);

	SortAscending(Test, TestScores);

	Avg = GetAverage(Test, TestScores);

	PrintToScreen(Test, TestScores, Avg);

	//call holdscreen function 
	HoldScreen();

	cout << "Test Scores #2";
	cout << endl;
	cout << str;
	cout << endl;
	

	//use of nullptr until assigned
	int* TestScores1 = nullptr;
	string* Names = nullptr;

	//set initially to zero so that the user can put in to dynamically allocate array
		int NumberOfScores = 0;

	double AvgScore = 0.0;
	cout << "How many test-scores do you wish to enter? "; cout << endl;
	cout << "Enter your answer: ";
	cin >> NumberOfScores;



	//dynamic arrays
	//also use of new keyword
	TestScores1 = new int[NumberOfScores];
	Names = new string[NumberOfScores];

	//pass to functions to get desired output
	getTestScores(TestScores1, Names, NumberOfScores);
	SortScores(TestScores1, Names, NumberOfScores);
	AvgScore = CalcAverage1(TestScores1, NumberOfScores);
	DisplayTestResults(TestScores1, Names, AvgScore, NumberOfScores);


    HoldScreen();

	const int People = 30;
	int SlicesOfPie[People];

	int* ptrSlices = SlicesOfPie;

	cout << "Pie a la Mode";
	cout << endl;
	cout << str;
	cout << endl;


	//pass to functions just like in previous prgrams
	GetScores(ptrSlices, People);
	SortAscending1(ptrSlices, People);

	//take the input
	for (int i = 0; i < People; i++)
	{
		cout << SlicesOfPie[i] << " ";
	}

	cout << "The number of slices that was eaten by most people is "

		<< GetMode(ptrSlices, People) << endl;

	HoldScreen();





	//start of the fourth program
	const int SIZE = 10;
	int* ptrlist;
	int List[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	ptrlist = List;
	cout << "Median Function";
	cout << endl;
	cout << str;
	cout << endl;
	cout<<"Out of a list of numbers ranging from 1 to 10 the median is: " << GetMedian(ptrlist, SIZE) << endl;


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
				cout << "That is not a valid input,please enter a test score that is positve";
				cin >> *(Test + i);
			}

		
	}
}
//function that will sort the scores 
void SortAscending(double* Test, int TestScores)
{
	int SortPlace, MinI;
	double MinVal;
	//sorting algorithm used in previous chapter 9
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
	cout << endl; cout << endl; cout << endl; cout << endl;
	cout << "Scores " << endl;
	string str;
	str.assign(15, '-');
	cout << str; cout << endl;
	for (int i = 0; i < Scores; i++)
	{
		cout << "Test #" << (i + 1) << "   " << *(Test + i) << endl;
	}
	cout << fixed << showpoint << setprecision(2);
	cout << setw(4);
	cout << "Average " << Avg << endl;
}
//second program functions




void getTestScores(int* testScores, string* studentNames, const int numScores)
{
	for (int index = 0; index < numScores; index++)
	{
		cout << "Name: ";
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

void SortScores(int* testScores, string* Name, const int numScores)
{
	int StartScan = 0,
		MinI = 0,
		MinPlace = 0,
		i = 0;

	string Names1 = " ";

	for (StartScan = 0; StartScan < (numScores - 1); StartScan++)
	{
		MinI = StartScan;
		MinPlace = *(testScores + StartScan);
		Names1 = *(Name + StartScan);

		for (i = StartScan + 1; i < numScores; i++)
		{
			if (*(testScores + i) < MinPlace)
			{
				MinPlace = *(testScores + i);
				Names1 = *(Name + i);
				MinI = i;
			}
		}

		*(testScores + MinI) = *(testScores + StartScan);
		*(Name + MinI) = *(Name + StartScan);
		*(testScores + StartScan) = MinPlace;
		*(Name + StartScan) = Names1;
	}

}


double CalcAverage1(int* testScores, const int numScores)
{
	double Total = 0.0,
		Avg = 0.0;

	for (int i = 0; i < numScores; i++)
	{
		Total += *(testScores + i);
	}

	/* Calculates and returns the average */
	return Avg = Total / numScores;
}





void DisplayTestResults(const int* testScores, const string* studentNames,
	const double averageScore, const int numScores)
{

	string str;
	str.assign(20, '=');
	int i = 0;

	

	cout << "Test Scores";
	cout << endl;
	cout << "Name: " << "    " << "Test Score";
	cout << endl;
		cout << str;
		cout << endl;
	for (i = 0; i < numScores; i++)
	{
		cout << *(studentNames + i)<<"         "<< *(testScores + i)
			<< endl;
	}
	cout << str;
	cout << endl;
		cout<< "Average of test scores: " << averageScore ;
	cout << endl;
}




//functions for the third program


void GetScores(int* array, int size)
{
	cout << "Enter the number of slices eaten"<< endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Person " << (i + 1) << ": ";
		cin >> *(array + i);
	}
}

int GetMode(int* array, int size)
{
	int Count, Hold, Mode{};
	Count = Hold = 0;

	for (int i = 0; i < size; i++)
	{
		Count++;
		if (*(array + i) < *(array + i + 1))
		{
			if (Count > Hold)
			{
				Mode = *(array + i);
				Hold = Count;
			}
			Count = 0;
		}
	}
	return Mode;
}

void SortAscending1(int* array, int size)
{
	int MinIndex, MinValue;

	for (int Scan = 0; Scan < (size - 1); Scan++)
	{
		MinIndex = Scan;
		MinValue = *(array + Scan);
		for (int i = Scan + 1; i < size; i++)
		{
			if (*(array + i) < MinValue)
			{
				MinValue = *(array + i);
				MinIndex = i;
			}
		}
		*(array + MinIndex) = *(array + Scan);
		*(array + Scan) = MinValue;
	}
}


//fourth program functions
double GetMedian(int* array, int size)
{
	int Middle = (size - 1) / 2;
	double Median;

	if (size % 2 == 0)
	{
		Median = (*(array + Middle) + *(array + (Middle + 1))) / 2;
	}
	else
		Median = *(array + Middle);


	return Median;
}


//this is the hold screen function that will advance from one program to the next
void HoldScreen() {
	cout << endl;
	cout << "Press enter to continue:" << endl;
	cin.get();
	cin.ignore();
	system("cls");
}