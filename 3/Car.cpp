#include <iostream>
#include "Car.h"
using namespace std;

// creates Car object
Car car1(1994);

int main(){
	// calls the accelerate function
	for(int counter = 0; counter < 5; counter++)
	{
		car1.setAcceleration(5);
	}
	
	// calls for brake function
	for(int counter = 0; counter < 5; counter++)
	{
		car1.setBrake(3);
	}

	// display the current speed of the car
	cout << "The current speed of the car is: " << car1.getSpeed() << " m/s";

	return 0;
}

