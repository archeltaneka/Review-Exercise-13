#include <iostream>
#include "Population.h"
using namespace std;

int main(){
	
	// declares variables for user input
	double inputPopulation;
	double inputNumOfBirth;
	double inputNumOfDeath;
	double birthRate;
	double deathRate;
	
	// creates a population object
	Population population;
	
	// get prompt from the user
	cout << "Enter a number of population: ";
	cin >> inputPopulation;
	population.setPopulation(inputPopulation);
	
	cout << "Now enter number of births per year: ";
	cin >> inputNumOfBirth;
	population.setNumOfBirths(inputNumOfBirth);
	
	cout << "Now enter number of deaths per year: ";
	cin >> inputNumOfDeath;
	population.setNumOfDeaths(inputNumOfDeath);
	
	// calculate birthRate and deathRate
	birthRate = inputNumOfBirth / inputPopulation;
	population.setBirthRate(birthRate);
	deathRate = inputNumOfDeath / inputPopulation;
	population.setDeathRate(deathRate);
	
	// display info
	cout << "Population: " << population.getPopulation() << endl;
	cout << "Number of birth: " << population.getNumOfBirhts() << endl;
	cout << "Number of death: " << population.getNumOfDeaths() << endl;
	cout << "Birth rate: " << population.getBirthRate() << endl;
	cout << "Death rate: " << population.getDeathRate() << endl;
}
