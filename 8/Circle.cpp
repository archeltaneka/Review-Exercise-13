#include <iostream>
#include "Circle.h"
using namespace std;

int main(){
	
	// creates a Circle object
	Circle circle;
	
	// declares variables for user input
	double radius;
	
	// get prompt from the user
	cout << "Input radius: ";
	cin >> radius;
	circle.setRadius(radius);
	
	// print circle info
	cout << "Circle radius: " << circle.getRadius() << "cm" << endl;
	cout << "Area: " << circle.getArea() << "cm" << endl;
	cout << "Diameter: " << circle.getDiameter() << "cm" << endl;
	cout << "Circumference: " << circle.getCircumference() << "cm";
	
	return 0;
	
	
}
