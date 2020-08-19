//This program creates a dynamic array using initializer list in C++. This method is only available in c++11.

#include<iostream>
using namespace std;

int main() {
	int fixedArray[5] = {9, 8, 0, 7, 6};                //initializing fixed array before c++11.
	
//	using uniform initilization technique.
//	int fixedArray[]{9, 8, 0, 7, 6};
//	char fixedArray[]{ "hello world "};
	
	int *dy_array{ new int[5]{9, 8, 0, 7, 6} };
//	char *dy_array = new char[14] {"hello world!"};       //dynamic allocation of chars using C-style string literal causes error.
//	char* dy_array = new char[14]();                        should assign 0 as value but does not do so. Why?
	
	for(int i=0; i<5; i++){
		cout << "fixed array -- "<< fixedArray[i]<< endl;
		cout <<endl;
		cout << "dynamic array --"<< *(dy_array+i);	
	}
	
		
}
