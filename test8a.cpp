
//ArraysExample.cpp
 #include<iostream>
 using namespace std;
 
 int foo[] = {1,2,3,4,5,6,7,8,9,10};//cong het tat ca lai
 
 int n, result=0;
 
 int main ()
 {
 	for (n=0 ; n<10; ++n)
 	{
	 result += foo[n];
	 }
 //cout<<result;
 cout<<"The total sum of the array is: "<<result;
 return 0;
}
