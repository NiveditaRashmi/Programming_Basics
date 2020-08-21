//Program to show bitwise operators. There is some error in the program.
//Geeksforgeeks

#include<iostream>
using namespace std;

int main() {
//	a = 5 ( 00000101 ), b = 9 ( 00001001 )
	unsigned char a = 5, b=9;
	
	cout << " a = " << a << ", b = " << b << endl;
	cout << "a & b = " << a&b << endl;
	cout << "a | b = " << a|b << endl;
	cout << "a ^ b = " << a^b << endl;
	cout << "~a = " << ~a << endl;
	cout << "b<<1 = "<< (b<<1) << endl;
	cout << "b>>1 = "<< (b>>1)<< endl;
	return 0;
		
}
