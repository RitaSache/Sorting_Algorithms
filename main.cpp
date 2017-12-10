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
	/*ifstream inputFile;
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
		//s.myMergeArray[count] = value;
		count++;
	}
	inputFile.close();
	*/
	Sorting s(10);
	srand (time(NULL));
	for(int i =0 ; i<10; i++){
		s.myBubbleArray[i] = rand();
		s.myMergeArray[i] = rand();
		s.myQuickArray[i] = rand();
	}
	int startTime = time(NULL);
	s.bubbleSort(s.myBubbleArray, 10);
	int endTime = time(NULL);
	s.mergeSort(s.myMergeArray, 0, 10);
	cout << "done merge" << endl;
	s.quickSort(s.myQuickArray, 0, 10);
	cout << "done quick sort" << endl;

	for(int i = 0; i<10; i++){
		cout << "bubble sort: " << s.myBubbleArray[i] << endl;
			}
	ostringstream p;
	p << "start time: " << startTime << ", end time: " << endTime << endl;
	cout << p.str();
	for(int i = 0; i<10; i++){
		cout << "merge sort: " << s.myMergeArray[i] << endl;
	}
	for(int i = 0; i<10; i++){
		cout << "quick sort: " << s.myQuickArray[i] << endl;
	}


	return 0;
}