//program: 4-4
//Author : james
// THis program calculates the number of soccer teams a youth
//league may create the number of avilable player
// Input the valiation is done with while loops.
#include<iostream>
using namespace std;
int main()
{
    int players,
    teamPlayers,
    numTeams,
    leftOver;

    cout<<"How many player you wish per team \n";
    cout<<"(Enter a valua in the range 9- 15)";
    cin>> teamPlayers;
{
    while (teamPlayers<9 || teamPlayers >15)
    cout<<"Team should be 9 to 15 players.\n";
    cout<<"How many players do you wish per team? ";
    cin>> teamPlayers;
}
cout<<"Houw many player are available?";
cin>>players;

while( players <= 0)
{
    cout<<"Please enter a positive number.";
    cin>>players;
}

numTeams = players/teamPlayers;
leftOver= players % teamPlayers;

cout<< " \n There will be "<< numTeams <<"team with";
cout<< leftOver <<"players left over.\n";

return 0 ;
}