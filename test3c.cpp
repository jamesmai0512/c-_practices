 //Name:James
 //Average 3 test score
 
#include<iostream>
using namespace std;
int main()
{
int  score1, score2, score3;
double average;

cout<<"Enter 3 test scorr and i will average them: ";
cin>> score1>> score2>> score3;

average= (score1+score2+score3) / 3.0;
cout<< "your average is" << average <<endl;

if (average==100)
{cout<<"congratulations!";
cout<<"That is a perfect score!\n";
}
return 0;
}
