/*
ACCESS MODIFIERS/SPECIFIERS - used to assign the accessibility to the class members.
Access modifier types - public, private, protected
The default modifier in c++ is private.
	public - can be accessed from anywhere in the program using direct member access operator(.) with the object of that class.
	private - not allowed to be accessed directly by any object or function outside the class. Only member functions or friend functions can access these.
	protected - can be accessed by any subclass and friend class
*/
	
#include<iostream>
using namespace std;

class Company {
	protected:
		int reg_no;
	private:
		string category = "software";
	void set_category(string catg) {
		category = catg;
	}
		
};

class Startup : public Company {
	public:
		void set_reg_no(int id) {
			reg_no = id;
		}
//		void set_category(string catg) {
//			category = catg;
//		}
		void display() {
			cout << "registration number is: " << reg_no << endl;
//			cout << "category is: " << category << endl;
			
		}
};
int main() {
	Startup comp;
	comp.set_reg_no(15);
//	comp.set_category("manufacturing");						//error because this function is private to Company.
	
	comp.display();
	return 0;
}
