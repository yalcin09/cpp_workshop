/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
// Constants Definition

/*
	
	(1) Literal -> Number and symbol (Aslında sayısal ve sembolsel değişkenlerde sabittir.)
		85   -->int
		5.8  -->double
		30u  -->usingned int
		30l  -->long

	(2) In C++, there are two ways to define constants

		using #define preprocessor
		using "const" keyword

*/

//trial 1
/*
#include <iostream>

using namespace std;

#define PI 3.14

int main(){

	double area;
	int r = 5;

	area = PI*r*r;

	cout << "Area : " << area << endl;
	return 0;
}
*/
//trial1
////////
////////
//trial2
#include <iostream>

using namespace std;

int main(){

	const int LENGTH = 15;
	const int WIDTH = 20;

	double area;
	int r = 5;

	area = LENGTH * WIDTH;

	cout << "Area : " << area << endl;

	{
		int LENGTH = 14;
		int WIDTH = 12;

		cout << "{Area : " << LENGTH * WIDTH << "}" << endl;
	}
	
	return 0;
	
}
//trial2

/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////