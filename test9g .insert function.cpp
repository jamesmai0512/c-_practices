//use insert
//dung insert de chen tu
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int tuoi;
    //function: .insert(index, string, start, length)
cout<<"Nhap tuoi hoc sinh: ";
cin>>tuoi;

cin.ignore();

    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
    
    string insert= "Mai";
    cout<<name.insert(1,insert,0,3)<<endl;
return 0;
}
