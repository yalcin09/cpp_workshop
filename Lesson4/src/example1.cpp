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
//trial4