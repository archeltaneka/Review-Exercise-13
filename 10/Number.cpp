#include <iostream>
#include "Number.h"
using namespace std;

int main(){
	
	// define Number object
	const int NUM = 5;
	Number number[NUM] = {Number(2), Number(47), Number(53), Number(34), Number(67)};
	
	// retrieve any element of the array
	cout << "Here's the number of the array: \n";
	cout << number[0].getNumbers() << ", " << number[1].getNumbers() << ", " << number[2].getNumbers() << ", " 
		 << number[3].getNumbers() << ", " << number[4].getNumbers() << endl;
	
	// check for the lowest number
	int lowestNum;
	int lowestIndex;
	int counter;
	
	for(counter = 0; counter < NUM - 1; counter++)
	{
		lowestIndex = counter;
		lowestNum = number[counter].getNumbers();
		
		for(int index = counter + 1; index < NUM; index++)
		{
			if(number[index].getNumbers() < lowestNum)
			{
				lowestNum = number[index].getNumbers();
				lowestIndex = index;
			}
		}
	}
	cout << "The lowest number is: " << lowestNum << endl;
	
	// check for the biggest number
	int biggestNum;
	int biggestIndex;
	
	for(counter = 0; counter < NUM - 1; counter++)
	{
		biggestIndex = counter;
		biggestNum = number[counter].getNumbers();
		
		for(int index = 0; index < NUM; index++)
		{
			if(biggestNum < number[index].getNumbers())
			{
				biggestNum = number[index].getNumbers();
				biggestIndex = index;
			}
		}
	}
	cout << "The biggest number is: " << biggestNum << endl;
	
	// calculate the average number in the array
	int average;
	
	average = (number[0].getNumbers() + number[1].getNumbers() + number[2].getNumbers() + number[3].getNumbers() + number[4].getNumbers()) / 5;
	number[NUM].setAverage(average);
	
	cout << "The average is: " << number[NUM].getAverage(); 
	
}
