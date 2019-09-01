#include<iostream>
using namespace std;
int main ()
{
    int i, j, g;
    int n=5;
    
    //cout<<"How many item you want:"<<endl;
    //cin>>n;
     
    for(i=1; i<=n; i++)
    {
        for(j=1 ; j<=i ; j++ )
        {
            cout<< " ";
        }
       {
            for ( g=n-i ; g>=1; g-- )
            
            cout<<"*";
        }
        cout<< endl;
    }
    return 0;
}

