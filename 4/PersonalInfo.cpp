#include <iostream>
#include <string>
#include "PersonalInfo.h"
using namespace std;

int main(){
	
	// creates PersonalInfo objects
	PersonalInfo personalInfo("Archel Taneka", "Senam Indah 4 No.22", 18, "084465793147");
	PersonalInfo friendsInfo("Spongebob Squarepants", "Bikini Bottom 42", "444-324657");
	PersonalInfo familyInfo("Squidward Tentacles", 25, "555-3214798");
	
	// print my personal info
	cout << "My Personal Info: \n";
	cout << "Name: " << personalInfo.getName() << endl;
	cout << "Address: " << personalInfo.getAddress() << endl;
	cout << "Age: " << personalInfo.getAge() << endl;
	cout << "Phone: " << personalInfo.getPhoneNum() << endl;
	cout << endl;
	
	// print friend's personal info
	cout << "Friend's Personal Info: \n";
	cout << "Name: " << friendsInfo.getName() << endl;
	cout << "Address: " << friendsInfo.getAddress() << endl;
	cout << "Age: " << friendsInfo.getAge() << endl;
	cout << "Phone: " << friendsInfo.getPhoneNum() << endl;
	cout << endl;
	
	// print parent's personal info
	cout << "Parents' Personal Info: \n";
	cout << "Name: " << familyInfo.getName() << endl;
	cout << "Address: " << familyInfo.getAddress() << endl;
	cout << "Age: " << familyInfo.getAge() << endl;
	cout << "Phone: " << familyInfo.getPhoneNum() << endl;
	cout << endl;
	
}
