/*
PURE VIRTUAL FUNCTIONS - a virtual function for which we do not know the implementation at the time of declaring it. 
Class containing such functions are called abstract class.
*/

#include<iostream>
using namespace std;

class Shape() {
	int x;
	public:
		virtual int area() = 0;
		int getLength() {
			return x;
		}
		int setLength(int l) {
			x = l;
		}
};

class Square: public Shape {
	int y;
	public:
		int area() {
			cout << "Area of square is = " << getLength()*y;
		}
		int setBreath(int b) {
			y = b;
		}
	
};

int main() {
	Shape sq = new Square();
	sq.setBreath(5);
	sq.setLength(7);
	sq.area();
	return 0;
}
