//Author: james
//Date: 19/7/2019
//desciotion:This program uses am if/else if statement to assign a
//leter grade (A, B, C, D, E,orF) to a numeris test score.
#include<iostream>
using namespace std;
int main()
{
int testScore;
char grade;

cout<<"Enter your mumeric test score and i will\n";
cout<<"tell you the letter grade you earned";
cin>>testScore;


if(testScore<=49 )
grade = 'F';

else if ( testScore <= 59)
grade='D';

else if(testScore <=69)
grade ='C';

else if (testScore <=79)
grade='B';

else if (testScore <=100)
grade='A';

cout<< "Your Grade is"<<grade << ".\n";
return 0;
}