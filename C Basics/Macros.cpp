#include <iostream>
using namespace std;
 
#define VAL 5
#define MAX(a,b) (a>b)?a:b
 
int main() {
	// your code goes here
	cout << VAL << endl;
	int max = MAX(VAL, 8);
	cout << max << " is bigger";
	cout << MAX(VAL,8); //gives 0 as output. Why?
	return 0;
}
