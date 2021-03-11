#include <iostream>
using namespace std;

// Base class
class Shape {
	protected:
		int width;
		int height;
	public:
		void setWidth(int w) {
 			width = w;
 		}
 		void setHeight(int h) {
 			height = h;
		}
};

// Derived class
class Rectangle: public Shape {
	public:
		int getArea() { 
			return (width * height); 
 		}
};

int main(void) {
	Rectangle Rect;
	Rect.setWidth(5);
	Rect.setHeight(7);
	// Print the area of the object.
	cout << "Total area: " << Rect.getArea() << endl;
	return 0;
}
