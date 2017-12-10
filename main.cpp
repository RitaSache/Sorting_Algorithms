#include <iostream>
#include <fstream>
#include "Sorting.h"
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
		s.myArray[count] = value;
		count++;
	}
	inputFile.close();


	return 0;
}