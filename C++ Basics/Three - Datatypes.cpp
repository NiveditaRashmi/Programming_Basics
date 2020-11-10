/*
DATATYPES - 
Primitive data types - int, char, boolean, float, double , void, wide-character
Derived data types - Function, array, pointer, reference
Abstract or user defined data types - class,  structure, union, enumeration, typedef defined data type

DATATYPE MODIFIER - used with built in data type to change the length of data that a particular data type can hold.
signed - integer, char, long  
unsigned - integer, char, short
long - integer, double
short - integer 

sizeof() - operator used to get the size of different datatypes.
*/

#include<iostream>
using namespace std;

int main() {
	
	cout << "size of char: " << sizeof(char) << endl;
	return 0;
}
