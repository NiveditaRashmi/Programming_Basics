#include <iostream>
using namespace std;

void function1();
void function2();

#pragma strartup function1

#pragma exit function2

void function1() {
	cout << "this is function one" << endl;
}

void function2() {
	cout << "this is function two" << endl;
}

int main() {
	// your code goes here
	void function1();
	void function2();
	cout << "I am inside main" << endl;
	return 0;
}
