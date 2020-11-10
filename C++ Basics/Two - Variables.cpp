/*
VARIABLES - 
Based on scope, variables can be of two types: Local and Global
Local variables - defined inside a block, method or constructor and cannot be accessed outside that block.
Global variables - Declared outside any block.
				- available throughout the lifetime of a program
If two variables with same name is declared in different scopes, then the compiler does not give any error.
If the local variable has same name as the global variable then the local variable is given precedence over the global varialble.
*/

#include<iostream>
using namespace std;

int var = 8;										//global variable.

int main() {
	int var = 9;									//local variable
	cout << "Value in local = "<< var<< endl;								//check the value.
	cout << "Value in global = "<< ::var << endl;					
	return 0;
}
