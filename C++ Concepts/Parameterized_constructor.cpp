//This program states the use of parameterized constructor.
//These are constructor with arguments that should be passed during object initialization.
#include<iostream>
using namespace std;

class P_Constr {
	private:
		int x;
		int y;
	public:
		P_Constr(int a, int b) {
			x = a;
			y = b;
		}
		
		int get_x(){
			return x;
		}
		int get_y() {
			return y;
		}
};

int main() {
	P_Constr obj_1 = P_Constr(5, 4);							//explicit call
	P_Constr obj_2(9, 8);										//implicit call
	cout << "for obj_one: a = " << obj_1.get_x() << "; b = " << obj_1.get_y() << endl;
	cout << "for obj_two: a = " << obj_2.get_x() << "; b = " << obj_2.get_y() << endl;
	return 0; 
}
