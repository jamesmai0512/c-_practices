//MuliiplicationTable.cpp
#include <iostream>
int main()
{
	const int numRows = 11;
	const int numCols =11;
	int product [numRows][numCols] = {0};
	
	for (int row = 0 ; row < numRows; ++ row)
	for (int col = 0; col < numCols; ++col)
	product[row][col] = row * col;
	
	for (int row=1; row < numRows; ++row)
	 {
	 	for (int col = 1; col < numCols; ++col)
	 	std:: cout << product [row] [col] <<"\t";
	 	std ::cout << '\n';
	 }
	 return 0;
}
