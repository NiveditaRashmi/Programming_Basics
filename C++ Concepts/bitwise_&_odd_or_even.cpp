//Program to check and odd or even number using bitwise and.
//geeksforgeeks

#include<iostream>
using namespace std;

int main() {
	int x=17;
	(x&1) ? cout<< "Odd" : cout << "Even";
	return 0;
}
