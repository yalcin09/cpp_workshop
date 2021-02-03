//************************ Source + Implementtation + Function definition ********************************//
#include <iostream>
#include "Array.hpp"

using namespace std;

// array operation
void initializeArray(int *a, int SIZE){
	for(int i=0; i<SIZE; i++)
		a[i] = i;
}

void displayArray(int *a, int SIZE){
	for(int i=0; i<SIZE; i++)
		cout << "a[" << i << "] : " << a[i] << endl;
}

// mathematical calculation
double sumArray(int *a, int SIZE){
	double sum = 0.0;

	for(int i=0; i<SIZE; i++)
			sum += *(a + i);

	return sum;
}

double meanArray(int *a, int SIZE){
	double mean = 0.0;

	mean = sumArray(a,SIZE) / SIZE;

	return mean;
}

//array mathematical calculation
int *sumTwoArray(int *Array1, int *Array2, int *result, int SIZE){

	for(int i=0; i<SIZE; i++)
		result[i] = *(Array1 + i) + *(Array2 + i);
	
	return result;
}

int *substractTwoArray(int *Array1, int *Array2, int *result, int SIZE){

	for(int i=0; i<SIZE; i++)
		result[i] = *(Array1 + i) - *(Array2 + i);
	
	return result;
}

int *productTwoArray(int *Array1, int *Array2, int *result, int SIZE){
	

	for(int i=0; i<SIZE; i++)
		result[i] = *(Array1 + i) * (*(Array2 + i));
	
	return result;
}