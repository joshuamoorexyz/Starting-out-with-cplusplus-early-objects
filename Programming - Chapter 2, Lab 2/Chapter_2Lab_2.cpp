
#include <iostream>
using namespace std;


int main()
{
	//Number 9
	/*An electronics company makes circuit boards that cost $14.95 a piece to produce.
	Write a program to determine how much the company should
   sell them for if it wants to make a 35 percent profit.Display the result on the screen.
	*/

	double cost = 14.95, percent_profit = 1.35; //define variables
	double final_price = cost * percent_profit;
	cout <<"The company should sell the circuit boards for $"<< final_price <<" to make a 35 percent profit."<< endl; //print results


	system("pause");

	//Number 10
	/*Write a program that displays the following information,each on a seperate line.
	your name
	your address,with city,state,and zip code
	your telephone number
	your college major
	use only a single cout statement to display all of this information
	*/
	cout << "Joshua Moore\n" << "125 Fern dr. Florence, Ms 39073\n" << "601-398-6738\n" << "Software Engineering\n" << endl; //print each on a new line


	system("pause");

	//Number 12 pg 75 in textbook
	/*Write a program that displays the following pattern on the screen:

	*/
	cout << "       *        " << endl; //print characters as they appear in the book
	cout << "      ***         " << endl;
	cout << "     *****          " << endl;
	cout << "    *******          " << endl;
	cout << "     *****           " << endl;
	cout << "      ***         " << endl;
	cout << "       *       " << endl;          
	system("pause");
	//Number 13
	/*A particular employee earns $39,000 annually.Write a program that determines and displays what the amount of his gross pay will be for each
	pay period if he is paid twice a month(24 pay checks per year) and if he is paid bi-weekly(26 checks per year).
	*/
	double annual_salary, twice_a_month, bi_weekly;
	annual_salary = 39000, twice_a_month = 24, bi_weekly = 26; //define variables
	twice_a_month = annual_salary / 24; //store results in variables
	bi_weekly = annual_salary / 26;
	cout << "With an annual salary of $39,000 a particular employee earns $" << twice_a_month << " if paid twice a month" << endl;
	cout << "If paid bi-weekly $" << bi_weekly << " is earned each pay period" << endl; //print results


	system("pause");
	//Number 14
	/*The star player of a high school basketball team is 74 inches tall.Write a program to compute and display the height in feet/inches form.
	hint: try using the modulus and integer divide operations
	*/
	int feet = 73 / 12,
		inches = 73 % 12; //define variables
	cout << "The star player is " << feet << "/" << inches << "feet tall."<<endl;


	system("pause");
	//Number 15
	/*Kathryn bought 750 shares of stock at a price of $35.00 per share.A year later she sold them for just $31.15 per share.
	Write a program that calculates and displays the following: 
	The total amount paid for the stock
	The total amount recieved from selling the stock
	The total amount of money she lost

	*/
	float initial_cost, selling_price, initial_total, recieved_total, lost_total,total_shares,money_lost;
	initial_cost = 35.00, total_shares = 750, initial_total = total_shares * initial_cost, recieved_total = 31.15, 
		lost_total = total_shares * recieved_total,money_lost=initial_total-lost_total; //define variables
	cout << "The total amount paid for the stock is $" << initial_total<<endl; //print results
	cout << "The total amount recieved from selling the stock is $" << lost_total<<endl; 
	cout << "The total amount of money lost is $" << money_lost<<endl;

	system("pause");
	//Number 16
	/*A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed purchase
	one or more energy drinks per week.Of those customers who purchase energy drinks,approximately 52 percent of them purchase citrus
	flavored energy drinks.Write a program that displays the following 
	The approximate number of customers in the survey who purchase one or more energy drinks per week
	The approximate number of customers in the survey who purchase citrus flavored energy drinks

	*/
	int cust_surveyed = 16500;
		float one_or_more_percent = .15, percent_of_citrus_purchase = .52,tot_one_or_more,tot_of_citrus_purchase; //define different variables
	 tot_one_or_more = cust_surveyed * one_or_more_percent, tot_of_citrus_purchase = cust_surveyed * percent_of_citrus_purchase;
	cout << "The approximate number of customers in the survey who purchase one or more energy drinks per week is " << tot_one_or_more << endl;
	cout << "The approximate number of customers in the survey who purchase citrus flavored energy drinks is " << tot_of_citrus_purchase << endl;
	//print results


	system("pause");


	return(0); //exit returning 0 to the os completing the main function
}   

  