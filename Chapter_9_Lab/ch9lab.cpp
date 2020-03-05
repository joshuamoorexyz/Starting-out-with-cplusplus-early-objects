
/*  Joshua Moore Learning C++ 
	Chapter 9 Lab 1 Search and Sorting Algorithms
	github:https://github.com/joshuamoore533/C-projects.git



    • Programming Challenge 2 – Lottery Winners 

    A lottery ticket buyer purchases 10 tickets a week,always playing the same 10 five-digit
    "lucky" combinations. Write a program that initializes an array with these numbers and then 
    lets the player enter this week's winning five-digit number. The program should
    perform a linear search through the list of the player's numbers and report whether or
    not one of the tickets is a winner this week. Here are the numbers:
    13579  26791  26792  33445  55555  62483  77777  79422  85647  93121

    • Programming Challenge 3 – Lottery Winners Modification

    Modify the program you wrote for challenge 2 (Lottery Winners) so it
    performs a binary search instead of a linear search.

    • Programming Challenge 8 – Search Benchmarks 

    Write a program that has at least 20 integers stored in an array in ascending order. It should
    call a function that uses the linear search algorithm to locate one of the values.
    The function should keep a count of the number of comparisons it makes until it find the value
    The program then should call a function that uses the binary search algorithm to locate the same value.
    It should also keep count of the number of comparisons it makes.Display these two counts on the screen.

    • Programming Challenge 9 – Sorting Benchmarks 
    
    Write a program that uses two identical arrays of at least 20 integers stored in a random order.
    It should call a function that uses the bubble sort algorithm to sort one of the arrays in ascending order.
    The function should count the number of exchanges it makes.The program should then call a function
    that uses the selection sort algorithm to sort the other array.It should also count the number of
    exchanges it makes.Display these two counts on the screen.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;





//prototype functions used 

int searchtickets(int loterry_nums[],int size,int value);
int searchtickets_binary(int loterry_nums1[],int size,int value);
int searcharray(int benchmark_array[],int size);
int searcharray_binary(int benchmark_array[],int size);
int sortArray(int array[],int size);
int sortArray_selection(int array[],int size);
void hold_screen();


//start of main function
int main(){
string str;
str.assign(30,'-');
cout<<"Lottery Winners"<<endl;

cout<<str;
cout<<endl;

int user_input,search;
const int SIZE=10;
int loterry_nums[SIZE] ={13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};
cout<<"What is your 5 digit lucky number?";cin>>user_input;
search=searchtickets(loterry_nums,SIZE,user_input);
//this could be any value that isnt in array not just -1
if(search==-1)
	//if else to show if search is equal to a number in the array
cout<<"Sorry that was not a winning number!"<<endl;
else{
	cout<<"You are a winner!"<<" The winning number was..."<<loterry_nums[search];
	cout<<endl;
}
hold_screen();

//start of the second program
cout<<endl;
cout<<"Lottery Winners Mod "<<endl;

cout<<str;
cout<<endl;

int user_input1,search1;
const int SIZE1=10;
//dont have to reorganize numbers in array because they are already in order meaning that binary search will work
int loterry_nums1[SIZE1] ={13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};
cout<<"What is your 5 digit lucky number?";cin>>user_input1;
search1=searchtickets_binary(loterry_nums1,SIZE1,user_input1);
//this could be any value that isnt in array not just -1
if(search1==-1)
cout<<"Sorry that was not a winning number!"<<endl;
else{
	cout<<"You are a winner!"<<" The winning number was..."<<loterry_nums1[search1];
	cout<<endl;
}

hold_screen();

cout<<"Search Benchmarks"<<endl;

cout<<str;
cout<<endl;


const int SIZE3=20;
int benchmark_array[SIZE3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

int linear,binary;
//save in different variables returning the number of steps taken by the different searches
linear=searcharray(benchmark_array,SIZE3);

binary=searcharray_binary(benchmark_array,SIZE3);

cout<<"It took "<<linear<<" steps with a linear search to get to the number 12.";cout<<endl;
cout<<"It took "<<binary<<" steps with a binary search to get to the number 12.";cout<<endl;



//start of the last program in the challenge labs
// sorting program

hold_screen();
cout<<"Sorting Benchmarks"<<endl;

cout<<str;
cout<<endl;
const int SIZE4=20;
//identical arrays with numbers that are out of order
//this could be used first to setup a binary search if wanted
int array1[SIZE4]={1,10,3,4,5,6,2,8,9,7,11,12,13,4,15,16,17,5,19,20};
int array2[SIZE4]={1,10,3,4,5,6,2,8,9,7,11,12,13,4,15,16,17,5,19,20};


int bubble,selection;
bubble=sortArray(array1,SIZE4);
selection=sortArray_selection(array2,SIZE4);
cout<<"Using bubble sort the number of exchanges was "<<bubble;
cout<<endl;
cout<<"Using selection sort the number of exchanges was "<<selection;




	return 0;
};

//function that will search while the index is less than the size of the array and found is not true
int searchtickets(int loterry_nums[],int size,int value){
	int index=0;
	int position=-1;
	bool found=false;

	while (index<size && !found){
		if(loterry_nums[index]==value)
		{found =true;
		position=index;}
	index++;
}return position;
}
//function that will search using a binary search method instead of linear
int searchtickets_binary(int loterry_nums1[],int size,int value){
int first=0,last=size-1,middle,position=-1;
	bool found=false;

	while (!found && first <= last){
		middle=(first+last)/2;
		if(loterry_nums1[middle]==value)
		{found =true;
		position=middle;}
		else if(loterry_nums1[middle]>value)
			last=middle-1;
		else
			first=middle+1;
	}
	return position;
	

}


int searcharray(int benchmark_array[],int size){
	int index=0;
	int position=-1;
	bool found=false;
	int count=0;
	while (index<size && !found){
		if(benchmark_array[index]==12)
		{found =true;
		position=index;}
	index++;count++;
}return count;
}


//function that will search using a binary search method instead of linear
int searcharray_binary(int benchmark_array[],int size){
int first=0,last=size-1,middle,position=-1;
	bool found=false;
	int count=0;
	while (!found && first <= last){
		middle=(first+last)/2;
		if(benchmark_array[middle]==12)
		{found =true;
		position=middle;}
		else if(benchmark_array[middle]>12){
			last=middle-1;count++;
		}
		else 
			first=middle+1;count++;
	}
	return count;
	

}

//bubble sort function taken from page 616 in book modified to return the number of exchanges
//could always send in number of exchanges as a reference and set function to void
int sortArray(int array[],int size){
	int temp;
	bool madeAswap;
	int exchanges =0;
	do
	{
		madeAswap=false;
		for(int count=0;count<(size-1);count++)
		{
			if(array[count]>array[count+1])
			{
				temp=array[count];
				array[count]=array[count+1];
				array[count+1]=temp;
				madeAswap=true;
				exchanges++;
			}
		}
	}while(madeAswap);return exchanges;
}

int sortArray_selection(int array[],int size){
	
int startScan,minIndex,minValue,exchanges1=0;

for(startScan=0;startScan<(size-1);startScan++)
{
	minIndex=startScan;
	minValue=array[startScan];
	for(int index=startScan+1;index<size;index++)
	{
		if(array[index]<minValue)
		{
			minValue=array[index];
			minIndex=index;exchanges1++;
		}
		array[minIndex]=array[startScan];
		array[startScan]=minValue;
	}
}

return exchanges1;


	}


//hold screen function....using cout endl to skip space between programs since there is not a way to clear screen cross platform and system(cls)is an ancient impractical use
void hold_screen(){

	cout<<"Press enter to continue:";
	cin.get();
	cin.ignore();
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
}