//New vs malloc syntax
#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	//Initialization with new operator
	int *num = new int(5);
//	Initialization with malloc function
	int *num_two = (int *)malloc(1*sizeof(int));
	*num_two = 13;
	cout << *num << endl << *num_two;
	return 0;
}
