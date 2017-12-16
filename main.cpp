
//Rita (Eteri) Sachechelashvili
//1928162
//sache100@mail.chapman.edu
//CPSC-350-02
//Assignment 6
//purpose of this file is to serve as the main file for the program.
#include <iostream>
#include <fstream>
#include "Sorting.h"
#include <time.h>
#include <stdio.h>      
#include <stdlib.h>
#include <sstream>
#include <string>
using namespace std;
//takes in a file, reads values into arrays, and sorts them
int main(int argc, char **argv){
	ifstream inputFile;
	inputFile.open(argv[1]);
	if(!inputFile) {
		cout << "File was not found, exiting program" << endl;
		exit(0);
	}
	string line;
	getline(inputFile, line);
	int numberOfValuesToSort = stoi(line);
	Sorting s(numberOfValuesToSort);
	int count = 0;
	while(!inputFile.eof()){
		getline(inputFile, line);
		double value = stod(line);
		s.myBubbleArray[count] = value;
		s.myMergeArray[count] = value;
		s.myQuickArray[count] = value;
		count++;
	}
	inputFile.close();
	
	ostringstream b;
	ostringstream m;
	ostringstream q;
	
	int startTime = time(NULL);
	s.bubbleSort(s.myBubbleArray, numberOfValuesToSort);
	int endTime = time(NULL);
	b << "BubbleSort: start time: " << startTime << ", end time: " << endTime << endl;
	cout << b.str();

	int startMergeTime = time(NULL);
	s.mergeSort(s.myMergeArray, 0, numberOfValuesToSort);
	int endMergeTime = time(NULL);
	m << "MergeSort: start time: " << startMergeTime << ", end time: " << endMergeTime << endl;
	cout << m.str();

	int startQuickTime = time(NULL);
	s.quickSort(s.myQuickArray, 0, numberOfValuesToSort);
	int endQuickTime = time(NULL);
	q << "QuickSort: start time: " << startQuickTime << ", end time: " << endQuickTime << endl;
	cout << q.str();
	return 0;
}






