//Rita (Eteri) Sachechelashvili
//1928162
//sache100@mail.chapman.edu
//CPSC-350-02
//Assignment 6
//purpose of this file is to serve as the h file for the program.

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
