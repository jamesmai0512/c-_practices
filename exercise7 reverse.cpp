
#include<iostream>
using namespace std;
int main()
{
    int a[]={3,6,4,2,8};
    int i;
    int j;
    int h=0; //This is a temporary variable
    for (i=0; i<5; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    
    for (i=0, j=4; i<=j ; i++,j--)
    {
        h = a[i];
        a[i]=a[j];
        a[j]=h;
    }
    for (i=0; i<5; i++)
    {
        cout<<a[i]<<"\t";
    }
return 0;
}