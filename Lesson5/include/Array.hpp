// ***************************  Declaration + Information **************************************//
#ifndef __Array_HPP__
#define __Array_HPP__

// array operation
void initializeArray(int *a, int SIZE);
void displayArray(int *a, int SIZE);


// mathematical calculation
double sumArray(int *a, int SIZE);
double meanArray(int *a, int SIZE);

//array mathematical calculation
int *sumTwoArray(int *Array1, int *Array2, int *result, int SIZE);
int *substractTwoArray(int *Array1, int *Array2, int *result, int SIZE);
int *productTwoArray(int *Array1, int *Array2, int *result, int SIZE);


#endif