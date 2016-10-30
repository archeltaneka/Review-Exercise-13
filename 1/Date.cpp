#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

void Date::printFirstForm()
{
	cout << month << "/" << day << "/" << year;
}

Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}
