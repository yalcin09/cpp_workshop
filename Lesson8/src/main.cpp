#include <iostream>
#include "MyString.hpp"

using namespace std;

int main(){

	char a[15] = "Hello";
	char b[15] = " World";
	char c[15];

	cout << "**********************************************" << endl;
	cout << endl;

	int a_strlen = myStrlen(a);
	int b_strlen = myStrlen(b);
	cout << "length of a : " << a_strlen << endl;
	cout << "length of b : " << b_strlen << endl;

	cout << "**********************************************" << endl;
	cout << endl;

	bool status = myStrcmp(a,b);
	if(status)
		cout << "a is equal to b" << endl;
	else
		cout << "a is not equal b" << endl;

	cout << "**********************************************" << endl;
	cout << endl;

	cout << "value of c : " << myStrcat(a,b) << endl;

	cout << "**********************************************" << endl;
	cout << endl;

	char ch1 = 'e';
	char ch2 = 'l';

	char *p1 = myStrchr(a,ch1);
	char *p2 = myStrchr(b,ch2);

	cout << "String starting from " << ch1 << " is " << p1 << endl;
	cout << "String starting from " << ch2 << " is " << p2 << endl;

	cout << "**********************************************" << endl;
	cout << endl;

	char *p3 = myStrcpy(c,a);
	cout << "String starting from p3" << " is " << p3 << endl;
	cout << "String starting from c" << " is " << c << endl;

	return 0;
}