/*************************************************************************
*Arrays                                                                  *
*                                                                        *
*    ()     -> calling                                                   *
*    main   -> address                                                   *
*    main()                                                              *
*                                                                        *
*    []         -> calling                                               *
*    arrayName  -> address                                               *
*    arrayName[]                                                         *
**************************************************************************

SYNTAX
		type arrayName[arraySIZE]

int a[10] -> int (2 byte), a -> start address, 2*10 = 20 byte in memory

*************************************************************************/


//trial1
/*
#include <iostream>

using namespace std;

int main(){

	// initialize
	int a[3];   //garbage value (çöp değer)
	int b[3] = {5,4,2};

	cout << "first element (b[0]) : " << b[0] << endl;
	cout << "second element (b[1]) : " << b[1] << endl;
	cout << "third element (b[2]) : " << b[2] << endl;

	cout << endl;

	int c[] = {1,2,3};
	cout << "first element (c[0]) : " << c[0] << endl;
	cout << "second element (c[1]) : " << c[1] << endl;
	cout << "third element (c[2]) : " << c[2] << endl;

	cout << endl;

	a[0] = 50;
	a[1] = 30;
	a[2] = 10;
	cout << "second element (a[0]) : " << a[0] << endl;
	cout << "second element (a[1]) : " << a[1] << endl;
	cout << "third element (a[2]) : " << a[2] << endl;
	return 0;
}
*/
//trial1
////////
////////
//trial2
/*
#include <iostream>

using namespace std;

int main(){

	int array[10];

	for(int i=0; i<10; i++)
		array[i] = i*i;

	for(int i=0; i<10; i++)
		cout << array[i] << endl;

	// cout << array[100] << endl; ----> run time error

	return 0;
}
*/
//trial2
////////
////////
//trial3
/*
#include <iostream>

using namespace std;

int main(){

	int array[10];

	int i=0;

	while(i<10){
		array[i++] = i;
	}

	for(int i=0; i<10; i++)
		cout << array[i] << endl;

	cout << "**********************************" << endl;

	i=0;
	int array1[10];

	while(i<10){
		array1[++i] = i;
	}

	for(int i=0; i<10; i++)
		cout << array1[i] << endl;

	cout << "**********************************" << endl;

	i=0;
	int array2[10];

	while(i++ <10){
		array2[i] = i;
	}

	for(int i=0; i<10; i++)
		cout << array2[i] << endl;

	return 0;
}
*/
//trial3
////////
////////
//trial4
//********Multi-dimensional array
/*
	type nameArray[SIZE1][SIZE2];

	int a[3][3];


*/
/*
#include <iostream>

using namespace std;

#define SIZE1 2
#define SIZE2 2
#define SIZE3 2

int main(){


	int a[2][2];
	int b[SIZE1][SIZE2] = {{1,2}, {3,4}};

	for(int i=0; i<SIZE1; i++){
		for(int j=0; j<SIZE2; j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}

	int c[SIZE1][SIZE2][SIZE3]; // C++ 14 boyuta kadar izin veriyor.

	return 0;
}
*/
//trial4
////////
////////
//trial5
/*
#include <iostream>

using namespace std;

#define SIZE1 3

int main(){


	int a[3] = {1,2,3};

	int *a_ptr;  // address

	a_ptr = a;

	// Display

	for(int i=0; i<SIZE1; i++)
		cout << "a[" << i << "] : " << a_ptr[i] << endl;
	
	cout << "Address of a[] : " << a << endl;
	cout << "Address of a_ptr[] : " << a_ptr << endl;


	//different type
	double b = 5.2;
	double *b_ptr;

	b_ptr = &b;

	cout << "Address of b[] : " << &b << endl;
	cout << "Address of b_ptr[] : " << b_ptr << endl;
	return 0;
}
*/
//trial5
////////
////////
////////////////////////////////////////////////////////////////////
//ptr
/*
#include <iostream>

using namespace std;

int main()
{
	
	int counts[3] = {100, 200, 150}; // 12 bytes

	int * counts_ptr;

	counts_ptr = counts;

	for(int i=0;i<3;i++){
		cout << "counts[" << i << "] : " << counts[i] << endl;
		cout << "counts[" << i << "] : " << *(counts + i) << endl;
		cout << "address of counts : " << &counts[i] << endl;
		cout << "address of counts : " << (counts + i) << endl;
		cout << "*************************************************" << endl;
		cout << "address of counts_ptr : " << (counts_ptr + i) << endl;
		
	}

	cout << "*************************************************" << endl;
	cout << "*************************************************" << endl;
	cout << "*************************************************" << endl;

	int a = 5;
	double b = 5.2;

	int *a_ptr = &a;
	double *b_ptr = &b;

	cout << "a_ptr : " << a_ptr << endl;
	//cout << "a_ptr * 1 : " << << a_ptr * 1 << endl; --> wrong

	cout << "b_ptr : " << b_ptr << endl;
	//cout << "b_ptr * 1 : " << b_ptr * 2 << endl; --> wrong

	return 0;
}
*/
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
// pointer-array to function usage

#include <iostream>

using namespace std;

#define SIZE 3

//Function declaration
/*
(1)
void initializeArray(int *a, int size);
void displayArray(int *a, int size);

(2)
void initializeArray(int a[SIZE], int size);
void displayArray(int a[SIZE], int size);

(3)
void initializeArray(int a[], int size);
void displayArray(int a[], int size);
*/

void initializeArray(int *a, int size);
void displayArray(int *a, int size);
double meanArray(int *a, int size);

int main()
{
	
	int a[SIZE];

	initializeArray(a,SIZE);
	displayArray(a,SIZE);

	cout << "meanValue : " <<  meanArray(a,SIZE) << endl;

	return 0;
}

void initializeArray(int *a, int size){
	for(int i=0; i<size; i++)
		a[i] = i;
}

void displayArray(int *a, int size){
	for(int i=0; i<size; i++)
		cout << "a[" << i << "] : " << a[i] << endl;
}

double meanArray(int *a, int size){
	double sum = 0;

	for(int i=0; i<size; i++){
		sum += *(a + 1);
	}

	return (sum / size);
}
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////