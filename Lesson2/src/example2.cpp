////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
// C++ Modifier

/*
	signed
	unsigned
	long
	short

		unsigned int -> how many byte can be used
		(1) memory usage restriction

		int a = 5555555555555;
		unsigned int  a = 5555;

		(2) number limit
*/
//trial1

#include <iostream>

using namespace std;

int main(){

	// 0000 1111 -> short int
	// 1111 0000 -> unsigned int

	short int a;
	short unsigned int b;

	a = 50000;
	b = a;

	cout << sizeof(short int) << endl;
	cout << sizeof(short unsigned int) << endl;
	cout << "a : " << a << "\nb : " << b << endl;

	return 0;
}

//trial1
////////
////////

/*
	const    -> sabit değişken tanımlama anahtar kelimesi (değişken değiştirilemez)

	volatile -> değişkenin zaman içerisinde değişebileceği anlına gelir. Kodu yazana
				kişi tarafında değir process işlemi sırasında değişir.

	restict  -> ilk durumda erişime izin veririr.
*/

////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////