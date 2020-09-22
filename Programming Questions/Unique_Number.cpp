//Program to find a unique number in an array numbers in one iteration. Xor operator is used for this purpose.
#include<iostream>
using namespace std;

int main() {
	int arr[] = {1, 2, 1, 8, 5, 2, 5};
	int temp =0 ;
	for (int i=0; i< 7; i++)  {
		temp = temp ^ arr[i];
		cout << arr[i] << " " << temp << " " << temp << endl;
	}
	cout<< "temp: " << temp;
	return 0;
}
