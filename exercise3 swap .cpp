#include<iostream> 
using namespace std;
int main ()
{
    int a ;//give a element.
    int b ;//give b element.
    int c ;//give c element.
       
        cout<<"Enter your a :"<<endl;
             cin>>a ;

        cout<<"Enter your b :"<<endl;
            cin>>b ;
        c=a;//assign the value of c by a
        a=b;//assign the value of a by b
        b=c;//assign the value of b by c
     
    
        cout<<"Value of a is:" <<a<<endl;//print a 
        cout<<"Value of b is:" <<b<<endl;
    
    return 0 ;
}