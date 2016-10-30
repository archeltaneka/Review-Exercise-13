#ifndef NUMBER_H
#define NUMBER_H

// creates a Number class
class Number{
	private:
		int *numbers;
		int average;
	public:
		// constructor
		Number(int n)
		{
			numbers = new int(n);
		}
		// destructor
		~Number()
		{
			delete[] numbers;
		}
		// set average
		void setAverage(int average)
		{
			this->average = average;
		}
		// get numbers
		int getNumbers() const
		{
			return *numbers;
		}
		// get average
		int getAverage() const
		{
			return average;
		}
};

#endif
