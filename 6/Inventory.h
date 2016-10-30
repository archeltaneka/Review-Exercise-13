#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory{
	private:
		int itemNumber; // item's number
		int quantity; // item's quantity
		double cost; // item's cost
		double totalCost; // total cost
	public:
		// default constructor
		Inventory()
		{
			itemNumber = 0;
			quantity = 0;
			cost = 0.0;
			totalCost = 0.0;
		}
		// constructor #2
		Inventory(int itemNum, int qty, double c)
		{
			itemNumber = itemNum;
			quantity = qty;
			cost = c;
		}
		// set item's number
		void setItemNumber(int number)
		{
			itemNumber = number;
		}
		// set quantity
		void setQuantity(int q)
		{
			quantity = q;
		}
		// set item's cost
		void setCost(double cost)
		{
			this->cost = cost;
		}
		// set total cost
		void setTotalCost(int quantity, double cost)
		{
			totalCost = this->quantity * this->cost;
		}
		// get item's number
		int getItemNumber() const
		{
			return itemNumber;
		}
		// get quantity
		int getQuantity() const
		{
			return quantity;
		}
		// get item's cost
		double getCost() const
		{
			return cost;
		}
		// get the total cost
		double getTotalCost() const
		{
			return totalCost;
		}
};

#endif
