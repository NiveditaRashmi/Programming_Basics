//Program to illustrate different variable initialization methods in c++.
#include<iostream>
using namespace std;

int main() {
	int a = 10;					//C-type initialization.
	int b(5); 				//	Constructor initialization
	int c{8};				//	Uniform initialization
	cout << a << " " << " " << b << " " << c << endl;
	return 0;
}
