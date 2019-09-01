//use for append
// dung de dien len

#include<iostream>
#include<string>
using namespace std;
int main()
{

//append function
    string first;
    cout<<"Enter your first name:";
    getline(cin,first);

    string last;
    cout<<"Enter your last name: ";
    cin>> last;

    cout<<first.append(last)<<endl;

    return 0;
}

