#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
using namespace std;

// define Date class
class Date{
	private:
		int month = 1;
		int day = 1;
		int year = 1970;
		
		const string monthName[12] = {"Jan", "Feb", "Mar", "April", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"};
	public:
		Date(int day, int month, int year);
		void printFirstForm();
		void printSecondForm();
		void printThirdForm();
};

void Date::printSecondForm()
{
	cout << monthName[month-1];
}

#endif
