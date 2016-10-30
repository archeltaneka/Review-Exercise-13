#ifndef PERSONALINFO_H
#define PERSONALINFO_H
#include <iostream>
#include <string>
using namespace std;

// creates PersonalInfo classs
class PersonalInfo{
	private:
		string name;
		string address;
		int age;
		string phoneNumber;
	public:
		// instance for personal info
		PersonalInfo(string name, string address, int age, string phoneNumber)
		{
			this->name = name;
			this->address = address;
			this->age = age;
			this->phoneNumber = phoneNumber;
		}
		// instance for friends
		PersonalInfo(string name, string address, string phoneNumber)
		{
			this->name = name;
			this->address = address;
			this->phoneNumber = phoneNumber;
		}
		// instance for families
		PersonalInfo(string name, int age, string phoneNumber)
		{
			this->name = name;
			this->age = age;
			this->phoneNumber = phoneNumber;
		}
		
		// sets the name
		void setName(string n)
		{
			name = n;
		}
		
		// sets the address
		void setAddress(string a)
		{
			address = a;
		}
		
		// sets the age
		void setAge(int age)
		{
			this->age = age;
		}
		
		// sets phoneNumber
		void setPhoneNum(string phone)
		{
			phoneNumber = phone;
		}
		
		// get name, address, age and phoneNumber
		string getName() const
		{
			return name;
		}
		string getAddress() const
		{
			return address;
		}
		int getAge() const
		{
			return age;
		}
		string getPhoneNum() const
		{
			return phoneNumber;
		}
};

#endif
