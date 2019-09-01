//find the sum of array

#include<iostream>
using namespace std;
int main()
{
    int average;//declare the average
    int sum=0;//declare sum equals 0
    int a[]={9,10,10,6,5};
    int i;
    
    for (i=0; i<5; i++)
    {
        sum = sum + a[i];
    }
        
    average= sum/5;//5 is the amount number in array a

    cout<<average;

return 0;
}
