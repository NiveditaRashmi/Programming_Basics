#include<iostream>
using namespace std;





int main() {
	int n;
	int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 0};
	int t_arr[3][3];
	
	
	for(int i=0; i<3; i++) {
		for(int j=0; j< 3; j++) {			
			t_arr[i][j] = arr[j][i];
		}
	}
	for(int i=0; i<3 ; i++) {
		for(int j=0; j<3 ; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "transpose of this matrix: " << endl;
	for(int i=0; i<3 ; i++) {
		for(int j=0; j<3 ; j++) {
			cout << t_arr[i][j] << " ";
		}
		cout << endl;
	}

	
}