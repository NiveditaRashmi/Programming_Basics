/*
VIRTUAL DESTRUCTORS - Deleting a derived class object using a pointer of base class type that has a non-virtual destructor results in 
	undefined behavior. To correct this situation, the base class should be defined with a virtual destructor.
Example is this code:
*/
#include<iostream>
using namespace std;

/*
class base {
	public:
		base() {
			cout<< "constructing base \n";
		}
		~base() {
			cout << "destructing base \n";
		}
};

class derived: public base {
	public:
		derived() {
			cout << "constructing derived \n";
		}
		~derived() {
			cout << "destructing derived \n";
		}
};
*/


/*
Output of above program wil be different based on compiler.
Making base class virtual guarantees that the object of derived class is destructed properly, ie., both base class and derived class destructors 
are called. For example:
*/

class base {
	public:
		base() {
			cout<< "constructing base \n";
		}
		virtual ~base() {
			cout << "destructing base \n";
		}
};

class derived: public base {
	public:
		derived() {
			cout << "constructing derived \n";
		}
		~derived() {
			cout << "destructing derived \n";
		}
};

int main() {
	derived *d = new derived();
	base *b = d;
	delete b;
	getchar();
	return 0;
}
