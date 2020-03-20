

/*
Jason opened a coffee shop selling coffee,cheese cakes, and coffee beans.
Coffee is sold at the shop in two sizes: small(9 oz $1.5) and large (12 oz,$1.90)
Cheese cakes cost $3 per slice. Coffee beans are sold with $0.6 per oz. Write a menu-driven program that will make the coffee shop operational. Your program should allow the user to do the following:
• Choose among coffee, cakes, or beans to purchase.
• Buy coffee in any size and in any number of cups.
• Buy cheese cakes in any number of slices.
• Buy coffee beans in any amount.
• At any time show the total number of cups of each size sold, total number of slices of cakes sold, and total amount of coffee beans sold.
• At any time show the total amount of coffee sold.
• At any time show the total money made.
Your program should consist of at least the following functions:
• a function to show the user how to use the program,
• a function to sell coffee,
• a function to sell cakes,
• a function to sell coffee beans,
• a function to show the number of cups of each size of coffee, the number of slices of cheese cakes, and the amount of coffee beans sold,
• a function to show the total amount of coffee sold, and
• a function to show the total money made.
Your program should not use any global variables. Special values such as coffee cup sizes and cost of a coffee cup must be declared as named constants.


*/
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

//global variables
//declare identifiers that will be used to calculate totals and cost
const double coffee_9_cost = 1.50;
const double coffee_12_cost = 1.90;
const int small_coffee = 9;
const int large_coffee = 12;
const double cost_bean_per_oz = 0.6;
//reference
/*
also in chapter 7

struct product {
  int weight;
  double price;
} ;

product apple;
product banana, melon;



This declares a structure type, called product, and defines it having two members: weight and price, each of a different fundamental type. 
This declaration creates a new type (product), which is then used to declare three objects (variables) of this type: apple, banana, and melon.
Note how once product is declared, it is used just like any other type.

Once the three objects of a determined structure type are declared (apple, banana, and melon) its members can be accessed directly. 
The syntax for that is simply to insert a dot (.) between the object name and the member name. For example, we could operate with any of 
these elements as if they were standard variables of their respective types:

*/



//struct allows the passing of multiple and returning of all as well with simple syntax
struct obj           
{
	float money;
	int coffee_9;
	int coffee_12;
	int cake;
	int beans;
};

//prototype the functions that will be used
obj sell_coffee(obj var);
obj sell_cake(obj var);
obj sell_coffee_beans(obj var);
void sold(obj var);
void total_money(obj var);
void help();
void hold_screen();


int main()
{   //define identifier and set all initally to zero so they can store the new data when calculated
	int user_choice;
	obj var;       
	var.money = 0;   
	var.coffee_9 = 0;
	var.coffee_12 = 0;
	var.cake = 0;
	var.beans = 0;

	cout << endl;

	//changes the colors of the text and background
	//can only be used on windows
	// 1st changes background 2nd changes the text color
	// if needed a menu with different selections can be displayed by typing in something that is inaccurate
	system("color 1D");


	//do while loop to run once then check
	do {
		cout << fixed << showpoint << setprecision(2);
		//display the menu and get the user to input which choice they want
		cout << "Jason's Coffee Shop" << endl;
		cout << "-------------------" << endl;
		cout << endl;
		cout << "1. ........ Buy Coffee" << endl;
		cout << "2. ........ Buy Cheese Cake" << endl;
		cout << "3. ........ Buy Coffee Beans" << endl;
		cout << "4. ........ Display Amount Sold" << endl;
		cout << "5. ........ Display total money made" << endl;
		cout << "6. ........ Display instructions for the program" << endl;
		cout << "7. ........ Quit the program" << endl;

		cout << endl;

		cout << "Enter Chocie :"; cin >> user_choice;
		//switch to call the various functions
		switch (user_choice)
		{
		case 1:var = sell_coffee(var);   
			break;
		case 2:var = sell_cake(var);      
			break;
		case 3:var = sell_coffee_beans(var);   
			break;
		case 4:sold(var);       
			break;
		case 5:total_money(var);   
			break;
		case 6:help();
			break;

		case 7:exit;
			break;
			//validate user input flag 
		default: cout << "That is not a valid option" << endl;
			hold_screen();
		}
	} while (user_choice != 7);

}




//definitions of the various functions that are used.

//pass struct
obj sell_coffee(obj var)   
{
	int user_selec, cups;
	system("cls");
	cout << "Buy Coffee" << endl;
	cout << "----------" << endl;
	cout << endl;
	cout << "1. Small Coffee 9oz ............ $1.50 per cup" << endl;
	cout << "2. Large Coffee 12oz ........... $1.90 per cup" << endl;
	cout << endl;
	cout << "Please make a selection: ";
	cin >> user_selec;

	//validate input
	while (user_selec != 1 && user_selec!= 2)
	{
		cout << "Invalid choice try again";
		cin >> user_selec;
	}
	cout << "How many cups would you like? ";
	cin >> cups;
	if (user_selec == 1)       
	{
		var.coffee_9 += cups; //store how many cups of the coffee were sold
		cout << "Total bill for this transaction: $" << cups * coffee_9_cost;
		cout << endl;
		var.money += cups * coffee_9_cost; //calculate how much money was made
	}
	else      
	{
		var.coffee_12 += cups; //same logic as before with the var being the cost of the large cup of coffee
		cout << "Total bill for this transaction: $" << cups * coffee_12_cost;
		cout << endl;
		var.money += cups * coffee_12_cost;
		
	}


	

	hold_screen();
	return var;   //return all the data back
	
}
obj sell_cake(obj var)       
{
	system("cls");
	int slices;
	cout << "Buy Cheescake" << endl;
	cout << "-------------" << endl; //could use str.assign
	cout << endl;
	cout << "Cheescake per slice ................. $3.00" << endl;
	cout << "Enter how many slices of cheescake you would like to purchase: " ;
	cin >> slices;
	var.cake += slices;
	cout<<"Total bill for this transaction is: $"<< slices * 3.00;
	cout << endl;
	var.money += slices * 3.00;   //add this to var.money
	hold_screen();
	return var;       
}
obj sell_coffee_beans(obj var)      
{
	system("cls");
	int oz;
	cout << "Buy Coffee Beans" << endl;
	cout << endl;
	cout << "Coffee beans per oz................... $0.6" << endl;
	cout << "Enter how many oz's you want to buy ";
	cin >> oz;
	var.beans += oz;
	cout << "Total bill for this transaction is: $" << oz * cost_bean_per_oz;
	cout << endl;
	var.money += oz * cost_bean_per_oz;       
	hold_screen();
	return var;       
}


//does not return a valude just display the calculated data between the items sold
void sold(obj var)       
{ //pass struct to function so that data can be displayed for the user
	system("cls");
	cout << "Number of sold Items" << endl;
	cout << "--------------------" << endl;
	cout << endl;
	cout << "Coffee 9oz..........." <<var.coffee_9<< " cup(s) which is "<< var.coffee_9*small_coffee <<"oz"<< endl;       
	cout << "Coffee 12oz.........." <<var.coffee_12<<" cup(s) which is "<< var.coffee_12*large_coffee<<"oz" << endl;   
	cout << "Cheese Cake.........." << var.cake <<" slice(s)"<< endl;     
	cout << "Coffee Beans........." << var.beans << " oz"<<" which is "<<var.beans/cost_bean_per_oz<<" beans "<<endl;   
	hold_screen();
}

//does not return a value
void total_money(obj var)   
{
	system("cls");
	cout << "Total Money Earned" << endl;
	cout << "------------------" << endl;
	cout << endl;
	cout << "Total Money earned is : " << var.money << endl;
	hold_screen();
}



	void hold_screen() {
		cout << "Press enter to continue" << endl;
		cin.ignore();
		cin.get();
		system("cls");
	}
	void help() {


		system("cls");
		cout << "Program Help" << endl;
		cout << endl;
		cout << "This program is designed to emulate a Coffee Shop allowing the user of the program to buy Coffee,Cake, or Beans" << endl;
		cout << "This program will also show information to the user such as the total money earned,total sold of each item,and total coffee sold" << endl;
		cout << endl;
		cout << "The main menu looks like this: " << endl;
		cout << endl;
		cout << "1. ........ Buy Coffee" << endl;
		cout << "2. ........ Buy Cheese Cake" << endl;
		cout << "3. ........ Buy Coffee Beans" << endl;
		cout << "4. ........ Display Amount Sold" << endl;
		cout << "5. ........ Display total Coffee Sold" << endl;
		cout << "6. ........ Display total money made" << endl;
		cout << "7. ........ Display instructions for the program" << endl;
		cout << "8. ........ Quit the program" << endl;
		cout << endl;
		cout << "Once the user of the program selects one of the presented options then the program will switch to that selection and perform the task" << endl;
		hold_screen();

	}

	

