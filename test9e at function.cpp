//at(int ) dung de in chu theo vi tri da chon 
#include<iostream>
#include<string>
using namespace std;
int main()
{
    // function:. at(int);
    string name;
    cout<<"Enter your name: ";
    getline (cin,name);
    
    cout<<name.at(6)<<endl;

    return 0;

