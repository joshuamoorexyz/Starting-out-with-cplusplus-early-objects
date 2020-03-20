//
//  main.cpp
//  Chapter8_lab
//
//  Created by Joshua Moore on 2/16/20.
//  Copyright © 2020 Joshua Moore. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string>



using namespace std;


/*
 Searching an Array
 Create a program that uses an array to store results of a poll of 25 people who were asked to estimate the average number of minutes they spend on social media each day.  The program allows the user to determine the number of people spending more than a specific number of minutes entered by the user.
 
 Accessing an Individual Element
 Create a program that coverts the number of American dollars entered by the user into one of the following foreign currencies:  euro (0.92), British pound (1.81), German mark (0.98), or Swiss franc (0.67).  Allow the user to select the foreign currency from a menu.  Store the exchange rates in a four-element double array named rates.  The array includes the exchange rates the program should use.  The menu choice is always one number more than the subscript of its corresponding rate.  For example, menu choice 1’s rate is stored in the array element whose subscript is 0.
 Parallel One-Dimensional Arrays
 The members of a local motorcycle club ae required to pay an annual fee based on their membership type.  Create a program that displays a member’s annual fee and membership type.  The membership types and associated fees are shown below.  Use a one-dimensional char array names types to store the membership types.  Use a one-dimensional int array named fees to store the annual fees.
 Type    Annual fee
 A    100
 B    110
 C    125
 D    150
 E    200
 
 Accumulating the Values- Two-Dimensional Array
 Jenko Booksellers wants a program that calculates and displays the total of its previous month’s sales.  The program should store the sales amounts, which are shown here, in a two-dimensional double arrays named sales.  The array should have three rows (one row for each of the three stores) and two columns.  The first column should contain the sales amounts for paperback books sold in each of the three stores.  The second column contain the sales amounts for hardcover books sold in each of the three stores.
     Paperback sales ($)    Hardcover sales ($)
 Store 1    3567.85    2589.99
 Store 2    3239.67    2785.55
 Store 3    1530.50    1445.80
 

 
 
 
 */
//prototype functions
void hold_screen();

//start of main function

int main() {
    
    //assign a string to divide the screen with
    string str;
    str.assign(40,'-');
    
    cout<<"Searching an Array"<<endl;
    cout<<str;
    cout<<endl;
    int num_of_minutes;
    const int SIZE=25;
    //could also allow the user to enter the time spent for this example though its easier to enter pre defined values
     int poll_people[SIZE]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    //access the elements of the array and then find the total number of people that are greater than or equal to what the user entered.
    cout<<"Enter the average number of minutes: ";cin>>num_of_minutes;
    int num_people=0;
    for (int val : poll_people) {
        if(val>=num_of_minutes){
            num_people=num_people+1;
        }
    };
    //print out to the screen
    cout<<"There are "<< num_people<<" people that spent "<< num_of_minutes<<" or more minutes on average on social media.";
    cout<<endl;
    hold_screen();

    
    cout<<"Accessing an Invdividual element"<<endl;
    cout<<str;
    cout<<endl;
    
    double us_money;
    int user_choice;
    cout<<"Enter the amount of money you have (US): $";cin>>us_money;
    cout<<endl;
    cout<<"Which currency would you like to convert to?";
    cout<<endl;
    //display a menu of options for the user
    cout<<"1. euro "<<endl;
    cout<<"2. British pound "<<endl;
    cout<<"3. German mark "<<endl;
    cout<<"4. Swiss franc "<<endl;
    cout<<"Enter your choice: ";cin>>user_choice;
    //define array that will be used
    double rates[4]={0.92,1.81,0.98,0.67};
    
    //make sure that the point is fixed
    cout<<fixed<<showpoint;
    cout<<setprecision(2);
    //switch statement so that conversion can be done for needed currency exchange
    switch (user_choice) {
        case 1:{ double euro;euro=us_money*rates[0];
            cout<<"You will have "<<euro<<" if you exchanged "<<us_money<<" US."<<endl;
            break;
        };
        case 2:{double pound;pound=us_money*rates[1];
            cout<<"You will have "<<pound<<" if you exchanged "<<us_money<<" US."<<endl;
            break;
        };
        case 3:{double mark;mark=us_money*rates[2];
            cout<<"You will have "<<mark<<" if you exchanged "<<us_money<<" US."<<endl;
            break;
        };
        case 4:{double franc;franc=us_money*rates[3];
            cout<<"You will have "<<franc<<" if you exchanged "<<us_money<<" US."<<endl;
            break;
        };
        default:cout<<"This is not a valid option"<<endl;
    }
    hold_screen();
    
    cout<<endl;
   
    cout<<" Parallel One-Dimensional Arrays"<<endl;
    cout<<str;
    cout<<endl;
    
    const int SIZE1=5;//define both arrays that will be used
    char membership_type[SIZE1]={'A','B','C','D','E'};
    int annual_fees[SIZE1]={100,110,125,150,200};
    cout<<endl; cout<<"Motorcycle Club Memberships"<<endl;
    cout<<str;cout<<endl;
    //print out to the screen
    for (int index=0;index<SIZE1;index++){
        cout<<membership_type[index]<<"  ";cout<<annual_fees[index];
        cout<<endl;
    }
    
    hold_screen();
    
        cout<<"Accumulating the Values- Two-Dimensional Array"<<endl;
    cout<<str;
    cout<<endl;
    //set two dimensional array
    const int SIZE3=3;
    const int SIZE4=2;
    double sales[SIZE3][SIZE4]={{3567.85,2589.99},
    {3239.67,2785.55},
        {1530.50,1445.80}};
    //declare variable that will be used
    int i ,j;
    double total=0;
    //for statements for each
    for (i=0;i<3; i++) {
        for (j=0;j<2; j++){
             total += sales[i][j];
            //print out to the screen for the user
        }        cout<<"Store #"<<i+1<< " total $"<<total;
        cout<<endl;
    }
   
    
    hold_screen();
    //return 0
    return 0;
}




void hold_screen(){
    
    cin.get();
    cin.ignore();
  
}

//clear screen does not work on mac define a function to clear the screen after every program
