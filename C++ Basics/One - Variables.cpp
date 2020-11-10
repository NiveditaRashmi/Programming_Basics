/*
VARIABLES - name given to a memory location.
Variable declaration - variable is simply declared.
Variable definition - variable i assigned a memory location and value.
Types - local, instance, static.
Local variable- defined within a block or method or constructor. 
				Scope is within that block. 
				Initialization is mandatory.
				Access specifiers cannot be used.
Instance variable- Non-static variable declared in a class outside any block, method or constructor. 
					Created and destroyed with the object of the class.
					Access specifiers can be used.
					Can be accessed only by creating an object.
					Initialization is not mandatory.
Static variable - Declared with static keyword.
				One copy of static variable per class.
				Inititialization is not mandatory. Default value is 0.
				Created as the program starts execution.
				
*/				

#include<iostream>
using namespace std;

class Student {
	public:
		static int roll;							//Static variable
		int age; 									//Instance variable
		
		
		
		Student() {
			++roll;
//			cout << subject<< endl;					//error
			
		}
		
		void printStudent() {
			string subject = "Maths";						//local variable
			cout << " Roll is = " << roll << endl;
			cout << "Favourite subject is = " << subject<< endl;
			cout << "Age is = " << age << endl;
			
		}
};

int Student::roll = 1;										//right way to define static variable


int main() {
	Student ram;
//	ram.roll = "Maths";										//error
	ram.age = 18;
//	int Student::roll = 1;									//error
	ram.printStudent();
	
	
	Student  shyam;
	cout <<"Shyam's details: " << endl;						//random value for age. 
	shyam.printStudent();
	
	
	Student rita;
	cout << "Rita's details: "<< endl;
	rita.printStudent();
	return 0;
}					
