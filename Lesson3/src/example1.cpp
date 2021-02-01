
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
// Function

/*

function   ---> performing task scope

(1) scope (codes)
(2) return type
(3) name
(4) parameter list

	- reading flexibility
	- specific process
		num = num1 + num3

	its structure is given by
		return_type function_name(paremeter list){
			body of the function

			return 0;
		}

*/

//trial1
/*
#include <iostream>

using namespace std;

int sum(int nmbr1, int nmbr2){

	return (nmbr1 + nmbr2);

}

int main(){

	int numberI  = 5;
	int numberII = 10;
	int result;

	result = sum(numberI, numberII);

	cout << "Result : " << result << endl;

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

int sum(int nmbr1, int nmbr2); // function declaration

int main(){

	int numberI  = 5;
	int numberII = 10;
	int result;

	result = sum(numberI, numberII);

	cout << "Result : " << result << endl;

	return 0;
}

int sum(int nmbr1, int nmbr2){ // function definition

	return (nmbr1 + nmbr2);

}
*/
//trial2
////////
////////
//trial3
/*
#include <iostream>

using namespace std;

int sum(int nmbr1, int nmbr2); // function declaration
double sum(double, double);

int main(){

	int numberI  = 5, numberII = 10, resultInt;
	double dnumberI = 5.7, dnumberII = 55.4, resultDouble;

	resultInt = sum(numberI, numberII);
	resultDouble = sum(dnumberI,dnumberII);

	cout << "Int-Result : " << resultInt << endl;
	cout << "Double-Result : " << resultDouble << endl;

	return 0;
}

int sum(int nmbr1, int nmbr2){ // function definition

	return (nmbr1 + nmbr2);

}

double sum(double nmbr1, double nmbr2){

	return (nmbr1 + nmbr2);

}
*/
//trial3
////////
////////
//trial4
#include <iostream>

using namespace std;

int sum(int a = 10, int b = 100){

	return a+b;
}

int main(){

	int a = 5;
	int b = 10;
	int result;

	result = sum(a);

	cout << "Result : " << result << endl;
	return 0;
}
//trial4