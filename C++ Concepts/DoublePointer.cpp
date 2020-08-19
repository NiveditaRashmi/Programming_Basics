//this program shows the basic implementation of pointers to pointers.

#include<iostream>
using namespace std;

int main() {
	int value =5;
	int *s_ptr = &value;
	int **d_ptr = &s_ptr;
//	int **d_ptr = &&value;                    //not valid.
//	int **ptr = nullptr;													//pointer can be set to null but this is wrong !!!??
//	int **ptr = NULL;												//This caused time limit excess error. Why?
	
	cout << *s_ptr << " " << **d_ptr << endl;
}
