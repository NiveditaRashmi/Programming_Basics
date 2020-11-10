/*
CONSTANTS - Value remains the same throughout the program
LITERALS - Value assigned to each constant variable.
Constants can be defined in two ways:
	a) using #define preprocessor directive
	b) using const keyword.
*/

#include<iostream>
using namespace std;

#define val 10
#define charVal 'G'
#define floatVal 3.4

int main() {
	cout << val << " " << charVal << " " << floatVal << endl;
//	const int var;
//	var = 5;														//this line will give error.
	const int var = 6;
	cout << "var = "<< var << endl;
	return 0;
}
