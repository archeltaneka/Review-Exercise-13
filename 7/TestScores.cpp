#include <iostream>
#include "TestScores.h"
using namespace std;

int main(){
	
	// declares variable for user input and creates TestScores object
	double inputScore, inputScore2, inputScore3;
	double totalScore = 0;
	double averageScore = 0;
	TestScores student;
	int counter; // loop counter
	
	// get prompt from the user
	cout << "Enter the first test score: ";
	cin >> inputScore;
	student.setScore(inputScore);
	cout << "Enter the second test score: ";
	cin >> inputScore2;
	student.setScore(inputScore2);
	cout << "Enter the third test score: ";
	cin >> inputScore3;
	student.setScore(inputScore3);
	
	// calculate the average
	totalScore = inputScore + inputScore2 + inputScore3;
	student.setTotal(totalScore);
	averageScore = totalScore / 3;
	student.setAverage(averageScore);
	
	cout << "Average score: " << student.getAverage();
	
	
}
