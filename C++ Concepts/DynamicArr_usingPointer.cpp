//This program creates a dynamic 2D array. It also explains the usage of pointers to pointers.
//This code is not working. Why?
#include<iostream>
using namespace std;

int main() {
	int count=0;
	int **array = new int*[10];           //allocates an array of 10 int pointers. Most commonly used to dynamically allocate array of pointers.
	int **dy_array;
//	int arr[10][5]; 					//@D fixed array.
//	int **dy_array = new int[10][5];           //does not work.
	
	//first way.
//	int (*dy_array)[5] = new int[10][5];
//	or
//	auto dy_array = new int[10][5];
//	most frequently used method.
	**dy_array = new int*[10];
	for(int i=0; i<10; i++){
		dy_array[i] = new int[5];
		for(int j=0; j<5; j++){
			dy_array[i][j]= ++count;
		}
	}
	
	for(int i=0; i<10; i++){
		for(int j=0; j<5; j++){
			cout << dy_array[i][j] << " ";
		}
	}
}
