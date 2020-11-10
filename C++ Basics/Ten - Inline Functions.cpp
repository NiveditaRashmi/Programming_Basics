/*
INLINE FUNCTIONS - Function that is expanded in line where it is called and hence reduces the function call overhead.
-> Inlining is only a request to the compiler, not a command. Meaning compiler can ignore the request for inlining. It does so in following cases:
	-> if function contains loop or static variables or switch or goto variables.
	-> If function is recursive.
	-> if function return type is other than void and return statement is not present in the body.
*/
#include<iostream>
using namespace std;

inline int square(int num) {
	return num*num;
}

int main() {
	cout << "Square of 5 is = "<< square(5) << endl;
	return 0;
}

