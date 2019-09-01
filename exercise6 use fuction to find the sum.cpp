//find the sum of array
// with function
#include<iostream>
using namespace std;

void findsum( int a[],int average,int sum,int i)
{
     for (i=0; i<5; i++)
    {
        sum = sum + a[i];
    }
        
    average= sum/5;

    cout<<average;
}

int main()
{
    int average;//declare the average
    int sum=0;//declare sum equals 0
    int a[]={9,10,10,6,5};
    int i;
    
  findsum(a,average, sum,i);

return 0;
}
