//Priogram :3-6
//Author: james.
//Decription: Thid menu driven program uses an if/else stament to carry.
// out the correct set of actions based on the user' s menu choice.
#include<iostream>
using namespace std;
int main()
{
 const double ADULT_RATE = 40.0;
 const double CHILD_RATE = 20.0;
 const double SENIOR_RATE = 30.0;

 int choice;
 int months;
 double charges;

 cout << "Health Club member ship menu, \n\n "; 
 cout << "1. Standard Adult membership.\n";
 cout << "2.Child membership.\n";
 cout << "3. Senior citizen membership.\n";
 cout << "4.Quit the Program,\n";
cout << "Enter your choice: ";
cin >> choice;

cout<< fixed <<showpoint;

if(choice == 1 )
{cout<< "\n For how many months? ";
cin >> months;
charges = months * ADULT_RATE;
cout<< "The total charges are $ << charges<<endl";}


 else if(choice == 2)
{ 
    cout<< "\n For how many months? ";
cin >> months;
charges = months * CHILD_RATE ;
cout<< "The total  charges are $ "<< charges<<endl;
}


 else if(choice == 3)
{ 
    cout<< "\n For how many months? ";
cin >> months;
charges = months * SENIOR_RATE ;
cout<< "The total charges are $" << charges<<endl;
}

 else if(choice != 4)
{ 
    cout<< "The valid choice  are 1 through 4 . run the \n"
     <<" program again select one of those. \n";
}
return 0;
}
//program 3-6
//Author: James
