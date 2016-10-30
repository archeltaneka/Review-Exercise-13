#ifndef POPULATION_H
#define POPULATION_H

class Population{
	private:
		double populationNum;
		double numOfBirths;
		double numOfDeaths;
		double birthRate;
		double deathRate;
	public:
		// default constructor
		Population()
		{
			populationNum = 0.0;
			numOfBirths = 0.0;
			numOfDeaths = 0.0;
			birthRate = 0.0;
			deathRate = 0.0;
		}
		// set number of population
		void setPopulation(double popNum)
		{
			populationNum = popNum;
		}
		// set number of births
		void setNumOfBirths(double birth)
		{
			numOfBirths = birth;
		}
		// set number of deaths
		void setNumOfDeaths(double death)
		{
			numOfDeaths = death;
		}
		// set birth rate
		void setBirthRate(double bRate)
		{
			birthRate = bRate;
		}
		// set death rate
		void setDeathRate(double dRate)
		{
			deathRate = dRate;
		}
		// get the population number
		double getPopulation() const
		{
			return populationNum;
		}
		// get the number of births
		double getNumOfBirhts() const
		{
			return numOfBirths;
		}
		// get the number of deaths
		double getNumOfDeaths() const
		{
			return numOfDeaths;
		}
		// get the number of birth rate
		double getBirthRate() const
		{
			return numOfBirths / populationNum;
		}
		// get the number of death rate
		double getDeathRate() const
		{
			return numOfDeaths / populationNum;
		}
};

#endif
