//use function with loop
#include<iostream>
using namespace std;


void loopprint(int i,int j,int h)
{
     for (j=5; j>i; j--)
        {
        cout<<" ";
        }
    for(h=1; h<i*2; h++)
        {
            cout<<"*";
        }
    cout<<endl;
}
int main()
{
    int i, j, h;
    for(i=1; i<=5; i++)
    {
    loopprint(i,j,h);
    }
return 0;
}