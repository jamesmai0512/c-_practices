// this string using get line , it can use more words longer
//dung get line  de viet duoc nhieu chu hen 

#include <iostream>
#include <string>
using namespace std;
int main()
{
     string input;
     cout<< "Enter your name: ";
     getline (cin,input);

     cout<<"Hello "<< input <<"! Welcome to c++";

     return 0;
}