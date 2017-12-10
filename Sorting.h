#include <iostream>

using namespace std;

class Sorting{
public:
	int max;
	double *myBubbleArray;
	double *myMergeArray;
	double *myQuickArray;
	Sorting(int maxNumber);
	~Sorting();
	void swap(double *p, double *g);
	void bubbleSort(double myArray[], int n);
	void merge(double a[], int lo, int hi, int g);
	void mergeSort(double a[], int lo, int g);
	int separate(double a[], int lo, int hi);
	void quickSort(double a[], int lo, int hi);
};
