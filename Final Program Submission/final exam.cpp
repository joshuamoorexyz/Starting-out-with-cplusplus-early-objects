// final exam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;



typedef int arrayType[];
//prototype functions
void hold_screen();
void display(arrayType nums, int ARRAY_SIZE);
void display_reverse(arrayType nums, int ARRAY_SIZE);
void minimum( int array[], int size);
void sum(int array[], int size);
void mean(int array[], int size);
void less_than_five(int array[], int size);
void compare_arrays();


//create array that stores 10 integers and the program will call each function mentioned individually and display the requirement as mentioned across the name of the functions.
const int ARRAY_SIZE = 10;
int my_array[ARRAY_SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
int my_array1[ARRAY_SIZE] = { 1,2,3,4,5,6,7,8,9,11 };

int main()
{
     //tell what it does and call the function with the arguments
	cout << "The program will display all the integers" << endl;
 display(my_array, ARRAY_SIZE);

 

 cout << "The program will display all the integers in reverse order" << endl;
 display_reverse(my_array, ARRAY_SIZE);
 

 cout << "The program will display the lowest value" << endl;
 minimum(my_array, ARRAY_SIZE);


 cout << "The program will diplay the total of all values" << endl;
 sum(my_array, ARRAY_SIZE);
 cout << endl;


 cout << "The program will display the average of all values" << endl;
 mean(my_array, ARRAY_SIZE);
 cout << endl;
 cout << "The program will print values less than 5" << endl;
 less_than_five(my_array,ARRAY_SIZE);
 cout<<endl;
 cout << "The program will compare two arrays values" << endl;
 compare_arrays();

 hold_screen();
}


//function to advance to next program and hold screen

void hold_screen() {
	cout << endl;
	cout << "Please press enter to continue" << endl;
	cin.get();
	cin.ignore();
	system("cls");
	

}


//function display:the program will display all the integers

void display(arrayType nums,int ARRAY_SIZE) {
	for (int index = 0; index < ARRAY_SIZE; index++)
		cout << nums[index] << " ";
	cout << endl;

}

//function to reverse the integers

void display_reverse(arrayType nums, int ARRAY_SIZE) {
	for (int index = 10; index !=0; index--)
		cout << nums[index-1] << " ";
	cout << endl;

}

//function to return lowest value in the array

void minimum( int array[], int size) {
	int lowest = array[0];

	for (int count = 1; count < size; count++)
	{
		if (array[count] < lowest)
			lowest = array[count];
	}
	cout <<"The lowest value is "<< lowest;
	cout << endl;
}
//function to sum the array
void sum(int array[], int size) {
	int total = 0;

	for (int count = 0; count < size; count++)
		total += array[count];
	cout <<"The total is "<< total;
}
//fucntion to find average
void mean(int array[], int size) {
	int total = 0;

	for (int count = 0; count < size; count++)
		total += array[count];
	cout << "The average is " << total/10;
}

//function to print less than 5 values
void less_than_five(int array[], int size) {
	

	for (int count = 0; count < size; count++)
		if (count <= 3)
		{
			cout << array[count]<<" ";
		}
}
//function to compare two arrays	
void compare_arrays( ) {
	const int SIZE = 10;
	//compared them here instead of passing to function,could be passed to function to call different arrays
	int my_array[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int my_array1[SIZE] = { 1,2,3,4,5,6,7,8,9,11 };
	bool arraysEqual = true;
	int count = 0;
	

	while (arraysEqual && count < SIZE)
	{
		if (my_array[count] != my_array1[count])
			arraysEqual = false;
		count++;
	}
	if (arraysEqual)
		cout << "The arrays are equal";
	else
		cout << "The arrays are not equal";
}