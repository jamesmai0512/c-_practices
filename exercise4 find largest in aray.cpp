// find the largest value in one  aray
#include<iostream>
using namespace std;
int main()
{
    
    int m=0;//give m element equal 0
    int a[]={1,3,10,5,8}; // give the aray a

    for(int i=0; i<5 ; i++ )// give  the for  run from 
    {
       if(m<a[i])//compare m with a[i] ,if m less than a[i] . will be
        m=a[i];//assign the value of a[i] by m
        
        {
            cout<<m;//print the last value , is the largest value
        }
    
        
    }
return 0;
}