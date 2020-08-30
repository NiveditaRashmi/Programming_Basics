//Initialization of multidimensional array in C++
//GeeksforGeeks
#include<iostream>
using namespace std;

int main() {
	int a[][2]={{0, 1}, { 2, 3}, {4, 5}};
	cout << a[0][0] << " " << a[0][1] << " " << a[1][0] << " " << a[1][1] << " " << a[2][0] << " " << a[2][1];
	return 0;
}
