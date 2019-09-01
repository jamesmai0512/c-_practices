//Switch calculaor
//Author: James
//Date: 19/7/2019
//decriotion: program to built a simple calculator using switch Stament
#include <iostream>
using namespace std;
int main()
{
	char o;
	float num1, num2;
	cout<<"Enter an operator(+,-,*,/,):";
	cin>>o;
	cout<<"Enter tow operands: ";
	cin>>num1>>num2;
	switch(o)
	{
	case'+':
		cout<<num1<<"+"<<num2<<"="<<num1+num2;
		break;
		case '-':
			cout <<num1<<"-"<<num2<<"="<<num1-num2;
			break;
				cout <<num1<<"*"<<num2<<"="<<num1*num2;
			break;
				cout <<num1<<"/"<<num2<<"="<<num1/num2;
			break;
			default:
				
				cout<<"Error! operator is not correct";
				break;
	}
	return 0;
}
