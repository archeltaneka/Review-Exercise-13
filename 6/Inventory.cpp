#include <iostream>
#include <string>
#include "Inventory.h"
using namespace std;

int main(){
	
	// declare variables for user input
	int inputNumber;
	int inputQuantity;
	double itemCost;
	double totalCost;
	
	// creates an Inventory object
	Inventory item;
	
	// get prompt from the user
	cout << "Input item's number:" << endl;
	cout << "1. Jacket \n";
	cout << "2. Designer Jeans \n";
	cout << "3. Shirt \n";
	cin >> inputNumber;
	item.setItemNumber(inputNumber);
	if(inputNumber == 1)
	{
		// declares item cost
		itemCost = 59.95;
		item.setCost(itemCost);
		
		cout << "How many items in the retail? ";
		cin >> inputQuantity;
		item.setQuantity(inputQuantity);
		
		// calculate total cost
		item.setTotalCost(inputQuantity, itemCost);
		
		cout << "The total cost is: $" << item.getTotalCost();
		
	} else if(inputNumber == 2)
	{
		// declares item cost
		itemCost = 34.95;
		item.setCost(itemCost);
		
		cout << "How many items in the retail? ";
		cin >> inputQuantity;
		item.setQuantity(inputQuantity);
		
		// calculate total cost
		item.setTotalCost(inputQuantity, itemCost);
		
		cout << "The total cost is: $" << item.getTotalCost();
		
	} else if(inputNumber == 3)
	{
		// declares item cost
		itemCost = 24.95;
		item.setCost(itemCost);
		
		cout << "How many items in the retail? ";
		cin >> inputQuantity;
		item.setQuantity(inputQuantity);
		
		// calculate total cost
		item.setTotalCost(inputQuantity, itemCost);
		
		cout << "The total cost is: $" << item.getTotalCost();
		
	} else {
		cout << "Invalid item number!";
	}
	
}
