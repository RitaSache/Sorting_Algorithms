#include <iostream>
#include "Sorting.h"
using namespace std;

Sorting::Sorting(int maxNumber){
	myArray = new double[maxNumber];
	for (int i = 0; i < maxNumber; i++) {
		myArray[i] = 0.0;
	}
	max = maxNumber;
}

Sorting::~Sorting(){
	delete [] myArray;
}
void Sorting::bubbleSort(double myArray[]){
	for(int i=0;i<10;++i){
		int temp = 0;
		for(int j = i; j<9;++j){
			if(myArray[j]>myArray[j+1]){
				temp = myArray[j+1];
				myArray[j+1]=myArray[j];
				myArray[j]=temp;
			}
		}
	}
}
void Sorting::merge(double a[], int lo, int hi){
	int i,j,k,m = hi-lo+1;
	int n = hi-lo+1;
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
void Sorting::mergeSort(double a[], int lo, int hi){
	if(lo<hi){
		int m = (lo+hi)/2;
		mergeSort(a, lo, m);
		mergeSort(a, m+1, hi);
		merge(a,lo,hi);
	}
}
