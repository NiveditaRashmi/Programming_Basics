/*
FUNCTIONS - Block of code that performs a task.
Past parameters of two types:
	Pass by value -  In this parameter passing method, values of actual parameters are copied to function’s formal parameters 
		and the two types of parameters are stored in different memory locations. So any changes made inside functions are not
		 reflected in actual parameters of caller.
	Pass by reference - Both actual and formal parameters refer to same locations, so any changes made inside the function are
	 actually reflected in actual parameters of caller.

Parameters are always passed by value in C.
*/
#include<iostream>
using namespace std;

void func(int num, int *num2) {												//first is passed by value, second is passed by reference.
	num = 3;
	*num2 = 60;
	cout << "pass by valu = "<< num << endl;
	cout << "pass by reference = "<< *num2 << endl;
	return ;
}

int main() {
	int num = 10;
	int ptr = 5;
	func(num, &ptr);
	cout << "num value = "<< num << endl;
	cout << "ptr value = "<< ptr <<endl;
	return 0;
}
