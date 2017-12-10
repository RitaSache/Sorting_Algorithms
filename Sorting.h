#include <iostream>

using namespace std;

class Sorting{
public:
	int max;
	double *myArray;
	Sorting(int maxNumber);
	~Sorting();
	void bubbleSort(double myArray[]);
	void merge(double a[], int lo, int hi);
	void mergeSort(double a[], int lo, int hi);
};
