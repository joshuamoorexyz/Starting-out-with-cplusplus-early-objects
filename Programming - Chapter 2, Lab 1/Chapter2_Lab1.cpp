


#include <iostream>
using namespace std;

int main()
{
	//start of the first exercise
	/* 
	Write a program that stores the integers 50 and 100 in variables and stores the sum of these two in a variable named total.
	Display the total on the screen.
	*/
	int num_1 = 50, num_2 = 100;//defines the two variables needed
	int total = num_1 + num_2; //performs the sum operations on the two stored variables and saves it to the total variable
	cout << "The total of " << num_1 << " and " << num_2 << " is " << total << endl; // prints the sum of the two variables
	system("pause"); //pause the screen so that the user can see the output from the program
	//start of the second exercise
	/*The East Coast sales division of a company generates 58 percent of total sales.Based on that percentage ,
	write a program that will predict how much the East Coast division will generate if the company has $8.6 million in sales this year.
	Display the results on the screen.
	*/
	float total_sales = 8600000, percent_generated = .58; //defines total sales for the year and the percentage generated
	float total_earnings = total_sales * percent_generated; //multiplies the values giving the total earnings
	cout << "Prediction of earnings = $"<< total_earnings << endl; //prints total earnings to the screen
	system("pause");
	//start of the third exercise
	/*Write a program that will compute the total sales tax on a $95 purchase.
	Assume the state sales tax is 6.5% and the county sales tax is 2 percent.Display the purchase price,
	state tax,county tax,and total tax amounts on the screen.
	*/
	double purchase_price = 95.00, //define the initial price
		state_sales_tax = .065, county_tax_rate = .02, //define variables
		state_tax, county_tax, total_sales_tax;
	state_tax = purchase_price * state_sales_tax; //define state tax by multiplying initial price and state sales tax
	county_tax = purchase_price * county_tax_rate; //define county tax by multiplying initial price and county sales tax
	total_sales_tax = state_tax + county_tax; //define total by adding the two products together
	cout << "Purchase price $" << purchase_price << endl; //print to the screen so that the user can see the results
	cout << "State sales tax $" << state_tax << endl;
	cout << "County sales tax $" << county_tax << endl;
	cout << "Total sales tax $" << total_sales_tax << endl;

	system("pause");
	//start of the fourth exercise
	/*Write a program that computes the tax and tip on a restaurant bill for a patron with a $44.50 meal charge.
	The tax should be 6.75 percent of the meal cost.The tip should be 15 percent of the total after adding the tax.
	Display the meal cost, tax amount, tip amount, and total bill on the screen.
	*/
	double meal_cost = 44.50, tax = .0675, tip = .15, //define variables
		tax_amount, tip_amount, total_bill;
	tax_amount = tax * meal_cost; //define tax amount by multiplying tax and meal cost
	tip_amount = tip * (meal_cost + tax_amount); //define the tip amount by multiplying tip and the sum of the meal cost and tax amount
	total_bill = meal_cost + tax_amount + tip_amount; //define the total bill cost by adding it all up
	cout << "The meal cost: $" << meal_cost; //prints the meal cost
	cout << "\nThe tax amount is: $"<<  tax_amount; //prints the tax amount
	cout << "\nThe tip amount is: $" << tip_amount; //prints the tip amount
	cout << "\nThe total bill amount is: $" << total_bill<<endl; //prints the total bill cost
	system("pause");

	//start of the fifth exercise
	/*A car holds 16 gallons of gasoline and can travel 312 miles before refueling.
	Write a program that calculates the number of miles per gallon the car gets. Display
	the results on the screen.
	*/
	float amount_of_gas = 16, total_miles = 312; //define variables
	float total_mpg = total_miles / amount_of_gas; //divide total miles by the amount of gas to get the mpg that the car can travel
	cout << "Total number of miles per gallon the car gets is: " << total_mpg <<"mpg\n "; //print the result to the screen
	system("pause");	



	//start of the sixth exercise
	/*A car with a 20 gallon gas tank averages 23.5 miles per gallon when driven in town
	and 28.9 miles per gallon when driven on the highway. Write a program that calculates
	and displays the distance the car can travel on one tank of gas when driven in town and 
	when driven on the highway.
	*/
	float gas_tank_total = 20, town_mpg = 23.5, highway_mpg = 28.9; //define variables
	float total_town_miles = gas_tank_total * town_mpg;
	float total_highway_miles = gas_tank_total * highway_mpg; //recieve total by multiplying the two together
	cout << "Total distance the car can drive in town is: " << total_town_miles << " miles"; //print town miles
	cout << "\nTotal distance the car can drive on the highway is: " << total_highway_miles<< " miles\n"; //print highway miles
	system("pause");


	//start of the eight exercise
	/*In the US,land is often measured in square feet.In many other countries,it is measured in square meters.
	One acre of land is equivalent to 43,560 square feet. A square meter is equivalent to 10.7639 square feet.
	Write a program that computes and displays the number of square feet and the number of square meters in 1/2 acre of land.
	Hint: Becuase a square meter is larger than a square foot,there will be fewer square meters in 1/2 acre than there are
	square feet.
	*/
	int acre = 43560; //save the area for an acre in a variable named acre
	float one_square_meter = 10.7639; //define one square meter
	float half_acre_feet = acre / 1 / 2; // define half acre in feet
	float half_acre_meter = acre / one_square_meter / 1 / 2; //define half acre in meters
	cout << "The number of square feet in 1/2 acres of land is " << half_acre_feet << endl;
	cout << "The number of square meters in 1/2 acres of land is" << half_acre_meter << endl;
	system("pause");
	 
	return 0;
}
