#include <iostream>
#include <fstream>
#include "Sorting.h"
#include <time.h>
#include <stdio.h>      
#include <stdlib.h>
#include <sstream>
#include <string>
using namespace std;

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
	//srand (time(NULL));
	/*for(int i =0 ; i<500000; i++){
		s.myBubbleArray[i] = rand();
		s.myMergeArray[i] = rand();
		s.myQuickArray[i] = rand();
	}*/
	int startTime = time(NULL);
	s.bubbleSort(s.myBubbleArray, numberOfValuesToSort);
	int endTime = time(NULL);
	b << "BubbleSort: start time: " << startTime << ", end time: " << endTime << endl;
	cout << b.str();
	//500,000 nums took 23 minutes to sort 

	int startMergeTime = time(NULL);
	s.mergeSort(s.myMergeArray, 0, numberOfValuesToSort);
	int endMergeTime = time(NULL);
	m << "MergeSort: start time: " << startMergeTime << ", end time: " << endMergeTime << endl;
	cout << m.str();
	//500,000 nums took 1 second to sort
	int startQuickTime = time(NULL);
	s.quickSort(s.myQuickArray, 0, numberOfValuesToSort);
	int endQuickTime = time(NULL);
	q << "QuickSort: start time: " << startQuickTime << ", end time: " << endQuickTime << endl;
	cout << q.str();
	//takes 0 seconds
	return 0;
}

//for 500,000 nums 
//BubbleSort: start time: 1512901189, end time: 1512902616
//MergeSort: start time: 1512902616, end time: 1512902617
//QuickSort: start time: 1512902617, end time: 1512902617






