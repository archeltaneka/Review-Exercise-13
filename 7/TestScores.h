#ifndef TESTSCORES_H
#define TESTSCORES_H

class TestScores{
	private:
		double score;
		double average;
		double total;
	public:
		// default constructor
		TestScores()
		{
			score = 0;
			average = 0;
			total = 0;
		}
		// second constructor
		TestScores(double score)
		{
			this->score = score;
		}
		// set the score
		void setScore(double s)
		{
			score = s;
		}
		// set total score
		void setTotal(double total)
		{
			this->total = total;
		}
		// set average score
		void setAverage(double average)
		{
			this->average = average;
		}
		// get the score
		double getScore() const
		{
			return score;
		}
		// get the average
		double getAverage() const
		{
			return average;
		}
		// get the total score
		double getTotal() const
		{
			return total;
		}
};

#endif
