//caculate the average
#include<iostream>
using namespace std;
int main()
{
    int average;
    int sum=0;
    int a[]={3,10,10,6,1};

    for(int i=0; i<5 ; i++ )
    {
        sum += a[i];

        average= sum/5;//5 is the amount in array
    }
        {
            cout<<average;
        }
return 0;
}