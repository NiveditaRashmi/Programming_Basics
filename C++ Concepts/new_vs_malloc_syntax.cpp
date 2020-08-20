//New vs malloc syntax
//not completed. write malloc example.
#include<iostream>
using namespace std;

int main() {
	//Initialization with new operator
	int *num = new int(5);
	int *num_two = (int *)malloc(sizeof(int));
	*num_two = 13;
	cout << *num << endl; << *num_two;
	return 0;
}
