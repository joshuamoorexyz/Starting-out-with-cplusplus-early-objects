#include <iostream>
#include <string>
#include <iomanip>
#include <list>

using namespace std;
/*
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
    The function should count the number of exchanges it makes.The program should then 
*/


int main(){
string str;
str.assign(30,'-');
cout<<"Programming Challenge 2"<<cout<<endl;
cout<<str;

int user_input,search;
const int SIZE=10;
const int loterry_nums[SIZE] {13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};
cout<<"What is your 5 digit lucky number?";cin>>user_input;
search=searchtickets(loterry_nums,SIZE,user_input);
if(search==-1)
cout<<"not a winner"<<endl;
else{
	cout<<"You are a winner!"<<loterry_nums[search];
	cout<<endl;
}


	return 0;
};


int searchtickets(int loterry_nums[],int size,int value){
	int index=0;
	int position=-1;
	bool found=false;

	while (index<size && !found){
		if(list[index]==value)
		{found =true;
		position=index;}
	index++;
}return position;


}