 //i use function in for loop
#include<iostream>
using namespace std;

void loop(int j, int i, int n)
{
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
}

int main ()
{
    int i, j, n;
    //int n=5;
    
   
    cout<<"How many item you want:"<<endl;
   cin>>n;
     
      loop(j,i,n);
    
    return 0;
}