///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
// Pointers

//Example1
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main(){

	int a = 2;
	cout << "a : " << a << endl;
	cout << "size of a : " << sizeof(a) << endl;
	cout << "Address of a : " << &a << endl;
	cout << "**********************************************" << endl;
	cout << endl;

	double b = 5.2;
	cout << "b : " << b << endl;
	cout << "size of b : " << sizeof(b) << endl;
	cout << "Address of b : " << &b << endl;
	cout << "**********************************************" << endl;
	cout << endl;

	char c = 'c';
	cout << "c : " << c << endl;
	cout << "size of c : " << sizeof(c) << endl;
	//cout << "Address of c : " << &c << endl;
	printf("size of %p\n : ",&c );
	cout << "**********************************************" << endl;
	cout << endl;

	int *a_ptr;
	a_ptr = &a;

	cout << "a_ptr : " << *a_ptr << endl;
	cout << "Address of a : " << a_ptr << endl;
	cout << "Address of a_ptr : " << &a_ptr << endl;
	//cout << "**********************************************" << endl;
	//cout << endl;

	return 0;
}
*/

//Example2
/*

int a = 5; ---> 4 byte
double b = 5.5; ---> 8 byte

int *a_ptr = a;   ---> a_ptr = 1000
double b_ptr = b; ---> b_ptr = 2000

a_ptr++    --------->>>>>>> a_ptr = 1004

b_ptr++    --------->>>>>>> b_ptr = 2008

*/
/*
#include <iostream>

using namespace std;

int main(){

	int a = 5;
	int *a_ptr = &a;

	cout << "Address of a_ptr : " << a_ptr << endl;

	a_ptr++;
	cout << "Address of a_ptr++ : " << a_ptr << endl;

	double b = 5.5;
	double *b_ptr = &b;

	cout << "Address of b_ptr : " << b_ptr << endl;

	b_ptr++;
	cout << "Address of b_ptr++ : " << b_ptr << endl;

	cout << "**********************************************" << endl;
	cout << endl;

	return 0;
}
*/

//Example3
/*
#include <iostream>

using namespace std;

#define SIZE 3

int main(){

	int a[SIZE] = {1,2,3};

	cout << "values of a" << endl;
	cout << "---------------------------------------------" << endl;
	for(int i=0; i<SIZE; i++)
		cout << "a[" << i << "] : " << a[i] << endl;

	cout << "**********************************************" << endl;
	cout << endl;

	cout << "Addresses of a" << endl;
	cout << "---------------------------------------------" << endl;
	for(int i=0; i<SIZE; i++)
		cout << "&a[" << i << "] : " << &a[i] << endl;

	cout << endl;
	cout << "**********************************************" << endl;
	cout << "**********************************************" << endl;
	cout << endl;

	int *a_ptr;

	a_ptr = &a[0];
	cout << "a_ptr = " << a_ptr << endl;
	cout << "a[0] address : " << &a[0] << endl;

	for(int i=0; i<SIZE; i++)
		cout << "a[" << i << "] : " << *a_ptr++ << endl;

	return 0;
}
*/

//Example4
/*
#include <iostream>

using namespace std;

#define SIZE 3

int main(){

	int a[SIZE] = {1000, 100, 10};
	int i = 0;

	
	while(i < SIZE){
		cout << "a[" << i << "] : " a[i] << endl;
		i++;
	}
	

	
	while(i < SIZE){
		cout << "a[" << i << "] : " << *(a + i) << endl;
		i++;
	}
	

	int *lastPtr = &a[SIZE - 1];
	int *a_ptr = a;
	i = 0;

	while(a_ptr <= lastPtr){
		cout << "a[" << i << "] : " << *(a_ptr++) << endl;
		i++;
	}


	return 0;
}
*/

//Example5
/*
#include <iostream>

using namespace std;

#define SIZE 3

int main(){

	int a[SIZE] = {1000, 100, 10};
	int i = 0;

	int *lastPtr = a + (SIZE - 1);

	cout << "lastPtr[0] : " << lastPtr[0] << endl;
	cout << "lastPtr[-2] : " << lastPtr[-2] << endl;


	return 0;
}
*/

//Example6
/*
#include <iostream>

using namespace std;

#define SIZE 3
#define BARRAY b[SIZE]

int main(){

	int a[SIZE] = {1,2,3};
	int BARRAY = {4,5,6};  // Yapılabilir...

	int *a_ptr = a;

	cout << *(a_ptr++) << endl;
	cout << *a_ptr << endl;

	cout << *(++a_ptr) << endl;

	cout << (*a_ptr)-- << endl;
	cout << --(*(a_ptr--)) << endl;

	return 0;
}
*/

//Example6
/*
#include <iostream>

using namespace std;

#define SIZE 3

// declaration
void changeVariableValue(int *, int);

int main(){

	int a = 3;

	changeVariableValue(&a,7);

	cout << "a : " << a << endl;
	return 0;
}

// definition
void changeVariableValue(int *a_ptr, int value){
	*a_ptr = value;
}
*/

//Example7

#include <iostream>

using namespace std;

#define SIZE 3

// declaration
void initializeArray(int *,int);
void displayArray(int *,int);

int main(){

	int a[SIZE] = {1,2,3};

	initializeArray(a,SIZE);
	displayArray(a,SIZE);

	return 0;
}

// definition
void initializeArray(int *a_ptr, int size){
	int *lastPtr = a_ptr + size;
	int *firstPtr = a_ptr;
	int i = 0;

	while(firstPtr < lastPtr){
		*firstPtr++ = (i++) * (i-1);
		//i++;
		//firstPtr++;
	}
}

void displayArray(int *a_ptr, int size){
	int *lastPtr = a_ptr + size;
	int *firstPtr = a_ptr;
	int i = 0;

	while(firstPtr < lastPtr){
		cout << "a[" << i << "] : " << *firstPtr << endl;
		i++;
		firstPtr++;
	}
}

// Pointers
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////