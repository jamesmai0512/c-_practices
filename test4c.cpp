//Program:3-9
//Author:James
//Date: 19/7/2019
//Description: THis program deministrate the use of a switch stament
//THe program simply tells the user what character they entered
#include<iostream>
using namespace std;
int main()
{
	char choice;
	cout<<"Enter A,B,or C: ";
	cin>> choice;

    switch(choice)
    {
    	case 'A':cout<<"You entered A.\n";
    	break;
    	case'B': cout<<"You entered B.\n";
    	break;
    	case 'C':cout<<"You entered C.\n";
    	break;
    	default: cout<<"You did not enter A,B,orC!\n";
    	
	}
	return 0;
}

//Program: 3-9
//Author : James
//Date:
//Descriprtion: This program deministrate the use of the switch stament.
// The program simply tell the user what character they entered.
 #include<iostream>
 using namespace std;
 int main()
 {
	 char choice ;
	 cout<< "Enter you A, B, or c; ";
	 cin>> choice;

switch (choice)
{case 'A': cout<< " You entered A:\n";
break ;

case 'B': cout<< " You entered B: \n";
break;

case 'C': cout << " You enter C:\n";
break;

default: cout << " You did not enter A, B, or C!\n";


}
	  return 0;
 }
