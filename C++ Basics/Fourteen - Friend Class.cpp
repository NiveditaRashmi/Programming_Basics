/*
FRIEND CLASS - Can access private and protected members of other class in which it is declared as friend.
FRIEND FUNCTION - Like friend class, a friend function can also be given speacial grant to access private and protected members.
A friend function can be:
	1) A method of another class.
	2) A global function.
Few key points:
	-> Friendship is not mutual or inherited
	-> less is better
	->  Not present in java
*/
/*
#include<iostream>
using namespace std;

class A {
	private:
		int a;
	public:
		A() { a = 5; }
		friend class B;
};

class B {
	private:
		int b;
	public:
		void showA(A &x) {
			cout<< "A::a = "<< x.a;
		}
};

int main() {
	A a;
	B b;
	b.showA(a);
	return 0;
}

*/
//program to demonstrate friend function of another class
/*
#include <iostream> 

class B; 

class A { 
public: 
	void showB(B&); 
}; 

class B { 
private: 
	int b; 

public: 
	B() { b = 0; } 
	friend void A::showB(B& x); // Friend function 
}; 

void A::showB(B& x) 
{ 
	// Since showB() is friend of B, it can 
	// access private members of B 
	std::cout << "B::b = " << x.b; 
} 

int main() 
{ 
	A a; 
	B x; 
	a.showB(x); 
	return 0; 
}
*/

//Program to demonstrate global friend
/*
#include <iostream> 

class A { 
	int a; 

public: 
	A() { a = 0; } 

	// global friend function 
	friend void showA(A&); 
}; 

void showA(A& x) 
{ 
	// Since showA() is a friend, it can access 
	// private members of A 
	std::cout << "A::a=" << x.a; 
} 

int main() 
{ 
	A a; 
	showA(a); 
	return 0; 
}
*/

//program to demonstrate that friendship is not inherited. On execution this code should give error as show() which is friend of base class A tries 
//to access private data of derived class B
/*
#include <iostream> 
using namespace std; 

class A 
{ 
protected: 
	int x; 
public: 
	A() { x = 0;} 
friend void show(); 
}; 

class B: public A 
{ 
public: 
	B() : y (0) {} 
private: 
	int y; 

}; 

void show() 
{ 
B b; 
cout << "The default value of A::x = " << b.x; 

// Can't access private member declared in class 'B' 
cout << "The default value of B::y = " << b.y; 
} 

int main() 
{ 
show(); 
getchar(); 
return 0; 
} 
*/
