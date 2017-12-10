#include <iostream>

using namespace std;

class Sorting{
public:
	int max;
	double *myBubbleArray;
	double *myMergeArray;
	Sorting(int maxNumber);
	~Sorting();
	void swap(double *p, double *g);
	void bubbleSort(double myArray[], int n);
	void merge(double a[], double lo, double hi);
	void mergeSort(double a[], double lo, double hi);
};
