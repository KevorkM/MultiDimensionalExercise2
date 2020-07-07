#include <iostream>
#include <cstring>

using namespace std;

int main() {

	cout << "Multi-Dimensional Arrays" << endl;

	/*
			Columns
		 0  1  2  
		+--+--+--+
	0	|  |  |  |  
		+--+--+--+
	1	|  |  |  |  
		+--+--+--+
	2	|  |  |  |  
		+--+--+--+
	*/

	int array2D[2][3] = { 1,2,3,4,5,6 };// we can write it this way
	int array2D[2][3] = { {1,2,3}, {4,5,6} };// we can also write it this way

	int array3d[2][3][4];

	return 0;
}