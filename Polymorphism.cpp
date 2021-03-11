#include <iostream> 
using namespace std;

class Shape {
	protected:
		int width, height;
	public:
 		Shape( int w, int h){
 			width = w;
 			height = h;
 		}
};

class Rectangle: public Shape {
	public:
		Rectangle( int w, int h):Shape(w, h) { }
 	int area () { 
 		return (width * height); 
 	}
};

class Triangle: public Shape {
	public:
		Triangle( int w, int h):Shape(w, h) { }
 	int area () { 
 		return (width * height / 2); 
 	}
};

// Main function for the program
int main() {

	Rectangle rec(10,7);
	Triangle tri(10,5);
 
 	cout << "Area of reactangle " << rec.area() << endl;
 	cout << "Area of triangle " << tri.area() << endl;
 
 	return 0;
}
