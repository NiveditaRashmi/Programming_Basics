//This program implements variable sizedd array in C. In C++ this might not be a valid program as C++ does not support variable sized array.
//credit GeeksForGeeks
#include<iostream>
using namespace std;

void fun(int n) {
	int arr[n];
	for(int i = 0; i< n; i++) {
//		arr[i] = i++; 
		arr[i] = i + 1;
	}
	for(int i = 0; i< 6; i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	fun(6);
	
	return 0;
}
