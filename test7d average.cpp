//program 4-6 
//THis Program takes daily sales figures over a period of time
//and calculates their total . It then uses this total to compute
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int numDays; 
	double dailySales,
	totalSales =0.0,
	averageSales;
	
	cout << " For how many days do you have dales figures?";
	cin>> numDays;
	
	for (int day=1;day <=numDays; day++)
	{
	cout <<"Enter the sales for day "<<day << " :";
	cin>> dailySales;
	totalSales += dailySales;

	}
	averageSales=totalSales / numDays;
	 
	cout<< fixed <<showpoint << setprecision(2);
	cout << "\n  Total sales; $"<<setw(8) <<averageSales;
	cout<<" \n Average daily sales :$" << setw(8) << averageSales<<endl;
	return 0;
}


