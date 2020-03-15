

/*
Author: Joshua Moore
Chapter 10 Learning C++

Complete the following programming challenges from page 701-702 in your book. Use proper documentation, indentation, and blank lines as necessary to make the code easier to understand.  Please do not procrastinate.

Programming Challenges to Complete:

Programming Challenge 1 - Test Scores #1
Programming Challenge 2 - Test Scores #2
Programming Challenge 5 – Pie a la Mode
Programming Challenge 6 – Median Function


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
VideoNote
Solving the
Days in Current
Month Problem

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
#include <memory>


using namespace std;




//prototype each function





//functions that will be used in the first program
void GetScores(double *, int);
void SortAscending(double *, int);
double GetAverage(double *, int);
void PrintScores(double *, int, double);

//functions that will be used in the second program
struct Data
{
	string Name;
	double Grade;
};


void GetScores(Data *, int);
void SortAscending(Data *, int);
double GetAverage(Data *, int);
void PrintScores(Data *, int, double);


//functions that will be used in the third program
void GetScores(int *, int);
void SortAscending(int *, int);
int GetMode(int *, int);


//functions that will be used in the fourth program
double getMedian(int *, int);






//start of the main function
int main()
{
	double *Test,		// To dynamically allocate an array
		   Average;		// To hold the average of the scores
	int Scores;			// To hold number of scores


	// Get number of scores
	cout << "How many scores do you have to average? ";
	cin  >> Scores;

	// Dynamically allocate an array larger enough
	// to hold the user-defined number of scores
	Test = new double[Scores];	// Allocate memory

	GetScores(Test, Scores);

	SortAscending(Test, Scores);

	Average = GetAverage(Test, Scores);

	PrintScores(Test, Scores, Average);


    //start of second program
    Data *Test;			// To dynamically allocate an array
	double Average;		// To hold the average of the scores
	int Scores;			// To hold number of scores


	// Get number of scores
	cout << "How many scores do you have to average? ";
	cin  >> Scores;

	// Dynamically allocate an array larger enough
	// to hold the user-defined number of scores
	Test = new Data[Scores];	// Allocate memory


	GetScores(Test, Scores);

	SortAscending(Test, Scores);

	Average = GetAverage(Test, Scores);

	PrintScores(Test, Scores, Average);

	delete [] Test;
	Test = 0;

//start of the third program
const int ppl = 30;
	int slices[ppl];		

	int *pSlices = slices;

	GetScores(pSlices, ppl);
	SortAscending(pSlices, ppl);	

	for (int i = 0; i < ppl; i++)
	{
		cout << slices[i] << " ";
	}

	cout << "\nNumber of pie slices eaten by the most people: "
		 << GetMode(pSlices, ppl) << endl;


         //start of the fourth program
         const int SIZE = 5;
	int List[SIZE] = {1, 4, 6, 12, 17};
	int *pList = List;

	cout << "Median: " << getMedian(pList, SIZE) << endl;

	return 0;
}

//*****************************************************************************
//                                 GetScores                                    *
// This function asks user to input test scores that are stored in an array.  *
// The parameter Scores holds the number of test score to be input.           *
//***************************************************************************** 
void GetScores(double *Test, int Scores)
{
	cout << "Enter each of the scores.\n";
	for (int i = 0; i < Scores; i++)
	{
		do
		{
			cout << "Score #" << (i + 1) << ": ";
			cin  >> *(Test + i);

			if (*(Test + i) < 0)
			{
				cout << "Scores must be greater than 0.\n"
					 << "Re-enter ";
			}

		} while (*(Test + i) < 0);
	}
}
//*****************************************************************************
//                              SortAscending                                 * 
// This function performs an ascending-order selection sort on the Test array *
// The paramere Scores holds the number of scores in the array.               *
//*****************************************************************************
void SortAscending(double *Test, int Scores)
{
	int startscan, minIndex;
	double minValue;

	for (startscan = 0; startscan < (Scores - 1); startscan++)
	{
		minIndex = startscan;
		minValue = *(Test + startscan);
		for (int i = startscan + 1; i < Scores; i++)
		{
			if (*(Test + i) < minValue)
			{
				minValue = *(Test + i);
				minIndex = i;
			}

		}
		*(Test + minIndex) = *(Test + startscan);
		*(Test + startscan) = minValue;
	}
} 
//***************************************************************************** 
//                               GetAverage                                   *
// This function calculates the average of the scores stored in an array.     *
// The parameter Scores holds the number of scores to average.                * 
//*****************************************************************************
double GetAverage(double *Test, int Scores)
{
	double Total;

	for (int i = 0; i < Scores; i++)
	{
		Total += *(Test + i);
	}

	return Total / Scores;
} 
//*****************************************************************************
//                              PrintScores                                   *
//*****************************************************************************
void PrintScores(double *Test, int Scores, double Avg) 
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

//*****************************************************************************
//                                 GetScores                                    *
// This function asks user to input test scores that are stored in an array.  *
// The parameter Scores holds the number of test score to be input.           *
//***************************************************************************** 
void GetScores(Data *Test, int Scores)
{
	cout << "Enter the names and scores for each student.\n";
	for (int i = 0; i < Scores; i++)
	{
		cout << "Student #" << (i + 1) << endl;
		cout << "   Name: ";
		cin.ignore();
		getline(cin, (Test + i)->Name);
		do
		{
			cout << "   Score :"; 
			cin  >> (Test + i)->Grade;

			if ((Test + i)->Grade < 0)
			{
				cout << "Scores must be greater than 0.\n"
					 << "Re-enter ";
			}
			cout << endl;
		} while ((Test + i)->Grade < 0);
	}
}
//*****************************************************************************
//                              SortAscending                                 * 
// This function performs an ascending-order selection sort on the Test array *
// The paramere Scores holds the number of scores in the array.               *
//*****************************************************************************
void SortAscending(Data *Test, int Scores)
{
	int startscan, minIndex;
	Data *minValue;

	for (startscan = 0; startscan < (Scores - 1); startscan++)
	{
		minIndex = startscan;
		*minValue = Test[startscan];
		for (int i = startscan + 1; i < Scores; i++)
		{
			if ((Test + i)->Grade < minValue->Grade)
			{
				*minValue = Test[i];
				minIndex = i;
			}

		}
		Test[minIndex] = Test[startscan];
		Test[startscan] = * minValue;
	}
} 
//***************************************************************************** 
//                               GetAverage                                   *
// This function calculates the average of the scores stored in an array.     *
// The parameter Scores holds the number of scores to average.                * 
//*****************************************************************************
double GetAverage(Data *Test, int Scores)
{
	double Total;

	for (int i = 0; i < Scores; i++)
	{
		Total += (Test + i)->Grade;
	}

	return Total / Scores;
} 
//*****************************************************************************
//                              PrintScores                                   *
// This function displays the data in the array of Data structures. The       *
// The parameter Scores holds the number of Data structures and the parameter *
// Avg holds the average of the Grades in the array.                          *
//*****************************************************************************
void PrintScores(Data *Test, int Scores, double Avg) 
{
	cout << "    Test scores\n";
	cout << "Number of scores: " << Scores << endl;
	cout << "Scores in ascending-order:\n";
	for (int i = 0; i < Scores; i++)
	{
		cout << (Test + i)->Name << ": " << (Test + i)->Grade << endl;
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "Average of scores: " << Avg << endl; 
}

//functions for the third program

//*****************************************************************************
//                                   GetScores                                  *
//*****************************************************************************
void GetScores(int *array, int size)
{
	cout << "Enter the number of pie slices eaten by each person in a year.\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Person " << (i + 1) << ": ";
		cin  >> *(array + i);
	}
}
//*****************************************************************************
//                                 GetMode                                    *
//*****************************************************************************
int GetMode(int *array, int size)
{
	int count, hold, mode;
	count = hold = 0;
	
	for (int index = 0; index < size; index++)
	{
		count++;	 
		if (*(array + index) < *(array + index + 1))
		{
			if(count > hold)
			{
				mode = *(array + index);
				hold = count;
			}
			count = 0;
		}
	}
	return mode;
}
//*****************************************************************************
//                                SortAscending                               *
//*****************************************************************************
void SortAscending(int *array, int size)
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
double getMedian(int *array, int size)
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