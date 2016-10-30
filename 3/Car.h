#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car{
	private:
		int yearModel;
		string make;
		int speed;
	public:
		// constructor
		Car(int yearModel)
		{
			this->yearModel = yearModel;
			speed = 0;
		}
		
		// get yearModel
		int getYearModel() const
		{
			return yearModel;
		}
		
		// get make
		string getMake() const
		{
			return make;
		}
		
		// get car speed
		int getSpeed() const
		{
			return speed;
		}
		
		// set accelerate
		void setAcceleration(int accel)
		{
			speed += accel;
		}
		
		// set brake
		void setBrake(int brake)
		{
			speed -= brake;
		}
};

#endif
