//Author: james
//date: 18 July 2019
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int subject1, subject2, subject3;
	int total;
	double average;
	cout<<"Enter the scores for the 3 subject:";
	cin>> subject1 >> subject2 >>subject3;

	average=(subject1+ subject2+subject3)/3;
	if (average >=50)
	{
	cout<<"Congratulation, You PASSED!" <<endl;
	cout<<"Your total mark is:"<<total<<endl;
	cout<<"Your average mark is:" <<average;
    }
    
	else
	{
    cout <<"Too bad! You FAILED!"<<endl;
	cout<< "Your total mark is:"<<total<<endl;
	cout<<"YOur average mark is:"<<average;	
	}
	return 0;

}
