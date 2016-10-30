#include <iostream>
#include "Payroll.h"
using namespace std;

int main(){
	
	// declare variables for user input
	int hours; // hours worked
	double hourlyPayRate;
	double total;
	
	// creates Payroll object
	const int NUM_EMPLOYEE = 7;
	Payroll employee[NUM_EMPLOYEE];
	
	
	// get prompt from the user
	for(int counter = 0; counter < NUM_EMPLOYEE; counter++)
	{
		cout << "Enter hours worked for employee " << counter + 1 << ": ";
		cin >> hours;
		employee[counter].setNumHoursWorked(hours);
		
		// calculate gross pay
		
		
	}
	
	
	
	
}
