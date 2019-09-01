//Names: james
//programe: 2-20
//Thid program caiculates hourly wages, including overtime.
#include <iostream>
 using namespace std;
 int main()
 {
 	double basePayRate = 18.25,// Base pay rate
 	overtimePayrate=27.38,
 	regularHours=40.0,
 	overtimeHours=10,
 	regularWages,
 	overtimeWages,
 	totalWages;
 	
 	regularWages = basePayRate * regularHours ;
 	
overtimeWages =overtimePayrate * overtimeHours;
 	 
 	 totalWages = regularWages + overtimeWages;
 	 
 	 cout <<"Waes for this week are $" <<totalWages <<endl;
 	 return 0;
 }