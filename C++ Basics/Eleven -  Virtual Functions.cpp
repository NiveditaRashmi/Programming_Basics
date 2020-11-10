/*
VIRTUAL FUNCTIONS - A member function which is declared in the base class and is overridden in the derived class.
It is used to implement runtime polymorphism and resolving the function call is done at run time.
Some rules for virtual functions: 
	-> It cannot be a static function or a friend function of another class.
	-> Should be accessed using pointer or reference of base class type to achieve run time polymorphism.
	-> Prototype of virtual functions should be same in base as well as derived class.
	-> It is not mandatory for derived class to override.
	-> A class may have virtual destructor but it cannot have a virtual constructor.
*/	
// CPP program to illustrate 
// concept of Virtual Functions 

#include <iostream> 
using namespace std; 

class base { 
public: 
	virtual void print() 
	{ 
		cout << "print base class" << endl; 
	} 

	void show() 
	{ 
		cout << "show base class" << endl; 
	} 
}; 

class derived : public base { 
public: 
	void print() 
	{ 
		cout << "print derived class" << endl; 
	} 

	void show() 
	{ 
		cout << "show derived class" << endl; 
	} 
}; 

int main() 
{ 
	base* bptr; 
	derived d; 
	bptr = &d; 

	// virtual function, binded at runtime 
	bptr->print(); 

	// Non-virtual function, binded at compile time 
	bptr->show(); 
} 

