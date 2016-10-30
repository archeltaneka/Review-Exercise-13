#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee{
	private:
		string name;
		int idNumber;
		string department;
		string position;
	public:
		// default constructor
		Employee()
		{
			name = "";
			idNumber = 0;
			department = "";
			position = "";
		}
		
		// first constructor
		Employee(string name, int idNumber, string department, string position)
		{
			this->name = name;
			this->idNumber = idNumber;
			this->department = department;
			this->position = position;
		}
		
		// second constructor
		Employee(string name, int idNumber)
		{
			this->name = name;
			this->idNumber = idNumber;
		}
		
		// set employee's name
		void setName(string n)
		{
			name = n;
		}
		
		// set employee's idNumber
		void setID(int id)
		{
			idNumber = id;
		}
		
		// set employee's department
		void setDepartment(string d)
		{
			department = d;
		}
		
		// set employee's position
		void setPosition(string p)
		{
			position = p;
		}
		
		// get employee's name
		string getName() const
		{
			return name;
		}
		
		// get employee's idNumber
		int getID() const
		{
			return idNumber;
		}
		
		// get employee's department
		string getDepartment() const
		{
			return department;
		}
		
		// get employee's position
		string getPosition() const
		{
			return position;
		}
};

#endif
