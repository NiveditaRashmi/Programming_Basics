//this program shows the usage of Copy Constructor. It is member function which initializes an object of a class using another object of the same class.
#include<iostream>
using namespace std;

class Copy_constr {
	private:
		int x, y;
	public:
		//Parameterized constructor.
		Copy_constr(int a, int b)  {
			x = a;
			y = b;
		}
		
		//Copy constructor.
		Copy_constr(const Copy_constr &obj_2) {
			x = obj_2.x;
			y = obj_2.y;
		}
		
		int get_x(){
			return x;
		}
		int get_y() {
			return y;
		}
};

int main() {
	Copy_constr obj_1(2, 3);
	Copy_constr obj_2 = obj_1;
	
	cout << "For obj_1: a = " << obj_1.get_x() << "; b = " << obj_1.get_y() << endl;
	cout << "For obj_2: a = " << obj_2.get_x() << "; b = " << obj_2.get_y() << endl;
	return 0;
}
