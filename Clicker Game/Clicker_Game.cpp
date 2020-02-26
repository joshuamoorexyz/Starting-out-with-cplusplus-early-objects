
//clicker game

#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>


using namespace std;


void hold_screen();

int main(){
char user_selec;
	string str;
double total_money=0.0;
str.assign(22,'-');
cout<<"The Life Clicker Game!";
cout<<endl;
cout<<str;
cout<<endl;


cout<<endl;

do{
cout<<"Total Money: $"<<total_money;
cout<<endl;

cout<<"Start Preschool (a)";
cout<<endl;


cout<<"User Input: ";cin>>user_selec;


switch(user_selec){

case 'a':cout<<fixed<<showpoint;
cout<<setprecision(2);
total_money=total_money +5.00;cout<<endl;

break;

default :cout<<"That is not a valid option";
cout<<endl;
break;


	
};
}while(user_selec!='z');
return 0;
};

