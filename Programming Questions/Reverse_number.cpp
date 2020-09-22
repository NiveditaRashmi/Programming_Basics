//This program reverses a number using the basic approach. ie.123 --> 321

#include<iostream>
using namespace std;

int main() {
	int num, rem, reverse_num = 0;
	cin >> num;
	while(num != 0) {
		rem = num % 10 ;
		reverse_num += rem ;
		num = num/10;
		if(num != 0) {
			reverse_num *= 10;
		}
		
	}
	cout << "Reverse of the number is : " << reverse_num;
	return 0;
}
