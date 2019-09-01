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
cout<<"tell you the letter grade you earned: ";
cin>> testScore;

if(testScore< 60)
grade = 'F';
else if( testScore<70)
grade='D';
else if(testScore<80)
grade ='C';
else if (testScore<90)
grade='B';
else if (testScore<=100)
grade='A';

cout<< "Your grade is"<<grade << ".\n";
return 0;
}
