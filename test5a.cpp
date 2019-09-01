//program 3-7
//Author : james
//date: 25/7/2019
//descirption:THis program determines whether or not an applicant qualifies
//for a loan. To qualify they must make at least $35,000 a year
//or have been at their current job for more than5 years . It uses
// the ! logical operator to rever the logic of the if stament.
#include <iostream>
using namespace std;
int main ()
{ 
double income;
int years;
cout<<"what is your annual income? ";
cin>> income;
cout<<"How many years have you worked at your current job?";
cin>> years;

if (!((income>= 3500)||(years>5)))
{
	cout<<"You must earm at least $35,000 or have been employed\n";
	cout<<"for more than 5 years to quality for a loan.\n";
}
else 
cout <<"you quality for a loan.\n";
return 0;
}
