//This program is to demonstrate the Default Constructor syntax.
//If no constructors are defined, then c++ generates the default constructor. It is a constructor with no arguments.
#include<iostream>
using namespace std;

class Default_constructor {
	public:
		int a, b;
		Default_constructor() {
			a=40;
			b=20;
		}
};
int main() {
	Default_constructor obj;
	cout << "a = " << obj.a << endl;
	cout << "b = " << obj.b;
	return 1;	
}
