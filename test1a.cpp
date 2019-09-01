//Date: 9/7/2019
//To calculate the Area of circle with giver=n radius using formulat 3.142 *r *r
#include <iostream>
using namespace std;
int main()
{
	int radius;//initialise radius as integer
	float area;//initialise area as float
	cout<<"This program will calculate the Area of Circle with givem radius"<<endl;
	cout<<"please enter the radius of the circle:" <<endl; //Accepting user's input
	cin>>radius;
	area= 3.142 *radius* radius;//this will caculate the Area of the circle
	cout<<"the areaof the circle is:"<<area<<endl;//output the result of the Area.
 }
