#ifndef RETAILITEM_H
#define RETAILITEM_H
#include <string>
using namespace std;

class RetailItem{
	private:
		string description; // item's description
		int unitsOnHand; // units on hand
		double price; // units' price
	public:
		// constructor
		RetailItem(string desc, int units, double p)
		{
			description = desc;
			unitsOnHand = units;
			price = p;
		}
		
		// get item description
		string getDescription() const
		{
			return description;
		}
		
		// get item units
		int getUnitsOnHand() const
		{
			return unitsOnHand;
		}
		
		// get item price
		double getPrice() const
		{
			return price;
		}
};

#endif
