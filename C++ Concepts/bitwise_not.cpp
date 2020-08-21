//program to show the usage of bitwise not with signed and unsigned numbers.
//doesnot work as mentioned - should give big number for unsigned variable and -ve number for signed number
//geeksforgeeks

#include<iostream>
using namespace std;

int main() {
	unsigned int x = 1;
	signed int y = 1;
	cout << "Signed result : "<< ~x << endl;
	cout << "Unsigned result: " << ~y << endl;
	return 0; 
}
