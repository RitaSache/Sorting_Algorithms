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
}

Sorting::~Sorting(){
	delete [] myBubbleArray;
	delete [] myMergeArray;
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
void Sorting::merge(double a[], double lo, double hi){
	double m = hi-lo+1;
	int n,k,i,j = (int)hi-lo+1;
	double *b = new double[n];
	k=0;
	m=(lo+hi)/2;
	for(i=lo;i<=m;i++){
		b[k++]=a[i];}
	for(j=hi;j>=m+1;j--){
		b[k++]=a[j];
	}
	i=0; j=n-1; k=lo;
	while(i<=j){
		if(b[i]<=b[j]){
			a[k++]=b[i++];
		}
		else{
			a[k++]=b[j--];
		}
	}	
}
void Sorting::mergeSort(double a[], double lo, double hi){
	if(lo<hi){
		double m = (lo+hi)/2;
		mergeSort(a, lo, m);
		mergeSort(a, m+1, hi);
		merge(a,lo,hi);
	}
}
