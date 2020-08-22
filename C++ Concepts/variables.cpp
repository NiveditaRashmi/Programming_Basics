//Program to demonstrate different types of variables and variable initialization methods.
#include<iostream>
using namespace std;

int var_one = 8;
int var_two;

class num {
	public:
	
	static int var_seven ;
	static int var_eight;
	int var_nine;
//	int var_ten = 7;
};

int num :: var_seven = 7;

int main() {
	int var_three = 2;					
	int var_four;
	int var_five(5);
//	int var_six {6};
//	int num :: var_eight = 8;
	cout << "Global variable with initialization: " << var_one << endl;
	cout << "Global variable without initialization: " << var_two << endl;
	cout << "static variable with initialization: " << num::var_eight;
//	cout << "instance variable: " << 
return 0;
}
