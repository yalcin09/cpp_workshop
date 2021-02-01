
/*
built -in cpp compiler object

*/
//trial1
/*
#include <iostream>

using namespace std;

int main(){

	// Number definition
	short s;  // store bytes
	int i;
	double d;


	// Assignment

	s = 10;
	i = 100;
	d = 1000000000.1;

	cout << "short : " << s << endl;
	cout << "int : " << i << endl;
	cout << "double : " << d << endl;
	return 0;
}
*/
//trial1
////////
////////
//trial2
/*
#include <iostream>
#include <cmath>

using namespace std;

int main(){

	// Number definition
	short s;  // store bytes
	int i;
	double d;


	// Assignment

	s = 1;
	i = 10;
	d = 1.44;

	cout << "short sin(s): " << sin(s) << endl;
	cout << "int pow(i,2): " << pow(i,2) << endl;
	cout << "double sqrt(d): " << sqrt(d) << endl;
	return 0;
}
*/
//trial2
////////
////////
//trial3-------------------> Random Number
/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

	int i,j;

	//seed value
	srand((unsigned)time(NULL));

	for(i=0;i<5;i++){
		j = rand();
		cout << "Random : " << j  << endl;
	}


	return 0;
}
*/
//trial3
////////
////////
//Application 1

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDie(){

	int roll;
	int min = 1;
	int max = 6;

	roll = rand() % (max - min + 1) + min;

	return roll;
}

int main(){

	srand((unsigned)time(NULL));

	for(int i=0; i<3; i++){
		cout << "Rolling Dice : " << rollDie() << " " << rollDie() << endl; 
	}

	return 0;
}