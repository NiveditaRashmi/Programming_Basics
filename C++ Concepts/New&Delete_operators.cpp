//This program illustrates how new operator is used to allocate a single memory or a block of memory.
//Delete is used to free the dynamically allocated memory
//Nothrow returns NULL pointer in case the memory is not avaiibale to allocate.
//GeeksForGeeks

#include<iostream>
using namespace std;

int main() {
	int *p =NULL;
	p = new(nothrow)int;
	if(!p) {
		cout << "allocattion of memory failed\n";
	} else {
		*p =29;
		cout << "value of p: " << *p << endl;
	}
	
	float *r = new float(45.6);
	cout << "value of r: " << *r << endl;
	
	//requesting a block of memory of size n
	int n = 5;
	int *q = new(nothrow) int[n];
	
	if(!q){
		cout << "allocation of memory failed\n";
	} else {
		for(int i=0; i<n ; i++) {
			q[i]= i+1;
		}
		cout << "Value stored in the block of memory: ";
		for(int j=0; j<n; j++) {
			cout << q[j] << " ";
		}
	}
	delete p;
	delete r;
	delete[] q;
	
	return 0;
	
}


