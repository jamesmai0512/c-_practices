#include<iostream>
using namespace std;
int main ()
{
    int i, j, n;
    //int n=5;
    
    cout<<"How many item you want:"<<endl;
   cin>>n;
     
    for(i=1; i<=n; i++)
    
    {
        for(j=n-1; j>=i; j--)
         { 
            cout<<" "; 
        }
       
         for( j=1; j<=i; j++) 
        {
             cout<<"*";
        }
        
        
     cout<<endl;
    }
    return 0;
}