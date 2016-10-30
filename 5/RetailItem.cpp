#include <iostream>
#include <iomanip>
#include <string>
#include "RetailItem.h"
using namespace std;

int main(){
	
	// creates a RetailItem object
	const int NUM_ITEMS = 3;
	RetailItem item[NUM_ITEMS] = {RetailItem("Jacket", 12, 59.95),
								  RetailItem("Designer Jeans", 40, 34.95),
								  RetailItem("Shirt", 20, 24.95)};
								  
	// display retail item
	cout << setw(4) << "Item";
	cout << setw(14) << "Description";
	cout << setw(8) << "Units";
	cout << setw(8) << "Price";
	cout << endl;
	cout << "----------------------------------------------";
	cout << endl;
	
	for(int counter = 0; counter < NUM_ITEMS; counter++)
	{
		cout << setw(4) << "Item #" << counter + 1;
		cout << setw(14) << item[counter].getDescription();
		cout << setw(8) << item[counter].getUnitsOnHand();
		cout << setw(8) << item[counter].getPrice() << endl;
	}
	return 0;
}
