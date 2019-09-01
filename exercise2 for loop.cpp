#include<iostream>
using namespace std;
int main()
{
    int i, j, h;
    for(i=1; i<=5; i++)//print 5 rows
    {
    for (j=5; j>i; j--)
    {
    cout<<" ";
    }
    for(h=1; h<i*2; h++)
    {
        cout<<"*";//cout<<"*" for ptrint it
    }
    cout<<endl;
    }
return 0;
}