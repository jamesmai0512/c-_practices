 //bubble sort
#include <iostream>
using namespace std;

void swap(int a[],int j,int h)
{
    if (a[j]<a[j-1])         
    {
            h=a[j];
            a[j]=a[j-1];
            a[j-1]=h;
               
    }
}
    
int main()
{
    int a[]={ 7,4,3,2,8,5,12,10};
    int i;
    int j;
    int n=8;
    int h;
    
    for (i=0; i<n;i++)
    {
        for(j=n-1; j>i; j--)
        
    swap (a,j,h);
    }
    
    for(i=0; i<n; i++)
    cout<<a[i]<<"\t";//use for print the result   
     
    return 0;
}