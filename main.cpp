#include <iostream>
#include <fstream>
#include "Sorting.h"
#include <time.h>
#include <stdlib.h>
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
	Sorting s(100000);
	srand (time(0));
	for(int i =0 ; i<100000; i++){
		s.myBubbleArray[i] = rand();
	}
	s.bubbleSort(s.myBubbleArray, 100000);
	//s.mergeSort(s.myMergeArray, 0, 0);

	for(int i = 0; i<100000; i++){
		cout << "bubble sort: " << s.myBubbleArray[i] << endl;
			}
	//for(int i = 0; i<numberOfValuesToSort; i++){
		//cout << "merge sort: " << s.myMergeArray[i] << endl;
	//}

	return 0;
}