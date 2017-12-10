#include <iostream>
#include "Sorting.h"
using namespace std;

Sorting::Sorting(int maxNumber){
	myBubbleArray = new double[maxNumber];
	for (int i = 0; i < maxNumber; i++) {
		myBubbleArray[i] = 0.0;
	}
	myMergeArray = new double[maxNumber];
	for (int i = 0; i < maxNumber; i++) {
		myMergeArray[i] = 0.0;
	}
	max = maxNumber;
	myQuickArray = new double[maxNumber];
	for (int i = 0; i < maxNumber; i++) {
		myQuickArray[i] = 0.0;
	}
	max = maxNumber;

}

Sorting::~Sorting(){
	delete [] myBubbleArray;
	delete [] myMergeArray;
	delete [] myQuickArray;
}

void Sorting::swap(double *p, double *g){
	double temp = *p;
	*p = *g;
	*g = temp;
}
void Sorting::bubbleSort(double myArray[], int n){
	for(int i=0;i<n-1;i++){
		for(int j = 0; j<n-i-1; j++){
			if(myArray[j]>myArray[j+1]){
				swap(&myArray[j], &myArray[j+1]);
			}
		}
	}
}
void Sorting::merge(double a[], int lo, int hi, int g)
{
    int i, j, k;
    int size1 = hi - lo + 1;
    int size2 =  g - hi; 
    int Left[size1], Right[size2]; 
    for (i = 0; i < size1; i++)
        Left[i] = a[lo + i];
    for (j = 0; j < size2; j++)
        Right[j] = a[hi + 1+ j];
    i = 0; 
    j = 0; 
    k = lo; 
    while (i < size1 && j < size2)
    {
        if (Left[i] <= Right[j])
        {
            a[k] = Left[i];
            i++;
        }
        else
        {
            a[k] = Right[j];
            j++;
        }
        k++;
    }
    while (i < size1)
    {
        a[k] = Left[i];
        i++;
        k++;
    }
    while (j < size2)
    {
        a[k] = Right[j];
        j++;
        k++;
    }
}
void Sorting::mergeSort(double a[], int lo, int g)
{
    if (lo < g)
    {
        int m = lo+(g-lo)/2;
        mergeSort(a, lo, m);
        mergeSort(a, m+1, g);
        merge(a, lo, m, g);
    }
}
int Sorting::separate(double a[], int lo, int hi)
{
    int last = a[hi];
    int i = (lo - 1);
    for (int j = lo; j <= hi- 1; j++)
    {
        if (a[j] <= last)
        {
            i++;    
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[hi]);
    return (i + 1);
}
void Sorting::quickSort(double a[], int lo, int hi)
{
    if (lo < hi)
    {
        int sep = separate(a, lo, hi);
        quickSort(a, lo, sep - 1);
        quickSort(a, sep + 1, hi);
    }
}
