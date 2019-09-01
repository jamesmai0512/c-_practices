
#include<iostream>
using namespace std;
 int age [] = {17, 18, 21,17 ,19};
 int n, result=0;
 
 int main()
 {
 	for ( n=0 ; n<5;++n)
 	{ 
	 result +=  age[n];
	 }
	 cout<<"The total age of the all students at is :" <<result;
	 return 0;
 }
