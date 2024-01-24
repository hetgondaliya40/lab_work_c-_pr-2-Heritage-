/*
1. WAP that defines a shape class with a constructor that gives value to width and height. The define two sub-classes triangle and rectangle, that calculate the area of the shape area (). In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.


*/
#include<iostream>
using namespace std;

class Shape{
	public:
		int width,lenght;
	
	public:
		Shape(){
			cout << "Enter width : ";
			cin >> width;
			cout << "Enter lenght : ";
			cin >> lenght;
		}
};

class Triangle : public Shape {
	public :
		int h,b,AREA;
		Tri(){
			h = width;
			b = lenght;
			AREA = (h*b)/2;
			cout << "Area of traiangle : " << AREA << endl << endl ;
		}
};

class Rectangle : public Triangle {
	public :
		int l,w,area;
		Rect(){
			w = width;
			l = lenght;
			area = w*l;
			cout << "Area of rectangle : " << area << endl << endl ;
		}
};


int main (){
	Rectangle r;
	
	r.Tri();
	r.Rect();
	
	return 0;
}
