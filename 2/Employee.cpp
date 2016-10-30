#include <iostream>
#include <iomanip>
#include "Employee.h"

// creates employee objects
// object 1
Employee employee1("Susan Meyers", 47899, "Accounting", "Vice President");

// object 2
Employee employee2("Mark Jones", 39119, "IT", "Programmer");

// object 3
Employee employee3("Joy Rogers", 81774, "Manufacturing", "Engineer");


// main function
int main(){
	
	// print employee info
	cout << "Name" << " " << "ID Number" << " " << "Department" << " " << "Position" << endl;
	cout << employee1.getName() << "  " << employee1.getID() << "  " << employee1.getDepartment() << "	s"  << employee1.getPosition() << endl;
	cout << employee2.getName() << "  " << employee2.getID() << "  " << employee2.getDepartment() << "  " << employee2.getPosition() << endl;
	cout << employee3.getName() << "  " << employee3.getID() << "  " << employee3.getDepartment() << "  " << employee3.getPosition() << endl;
	
	return 0;
	
}
