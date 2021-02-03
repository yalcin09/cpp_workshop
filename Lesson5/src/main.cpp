#include <iostream>
#include "Array.hpp"

using namespace std;

#define SIZE  10

int main(){

	int array[SIZE];

	initializeArray(array, SIZE);
	displayArray(array,SIZE);

	double meanArrayValue = meanArray(array,SIZE);

	cout << "Mean of the array : " << meanArrayValue << endl;

	double sumValue = sumArray(array,SIZE);

	cout << "Sum of the array : " << sumValue << endl;

	int array2[SIZE];
	initializeArray(array2,SIZE);
	displayArray(array2,SIZE);

	int resultArray[SIZE];

	sumTwoArray(array,array2,resultArray,SIZE);

	displayArray(resultArray,SIZE);

	return 0;
}