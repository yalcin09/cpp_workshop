///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
//String Examples

/*
	character
		char -> word or alphabet --> 1 byte

		char a[] = "Hello"  --> string

	c++ / c
		c -> string (done with character)
		c++ -> string (done with class)
*/

///////////////////////////////////////////////////////////////////////////
//Example1
/*
#include <iostream>

using namespace std;

int main()
{
	char c = 'C';

	cout << "size of char : " << sizeof(char) << endl;
	cout << "Value in c : " << c << endl;

	char word[] = {'H','E','L','L','O','\0'};

	// '\0' -> indicates that the directory is finished.

	cout << "Mesaj : " << word << endl;

	return 0;
}
*/

///////////////////////////////////////////////////////////////////////////
//Example2

/*
	strcpy -> copy str1 to str2

	strcat -> concatenates str2 onto str1

	strlen -> length of str

	strcmp -> compare both str1 and str2

	strchr -> searching specific characters
*/
/*
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str1[] = "Heyyyy";
	char str2[] = " ";
	char str3[] = "HELLO";
	char strMesaj[20];


	strcpy(strMesaj,str1);
	cout << "strcpy for str3 to str1 : " << strMesaj << endl;
	cout << "****************************************************" << endl;

	char *str4;
	str4 = str1;

	for(int i=0; i<10; i++){
		cout << "str4[" << i << "] : " << str4[i] << endl;
	}	
	return 0;
}
*/

///////////////////////////////////////////////////////////////////////////
//Example3
/*
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str1[] = "Heyyyy";
	char str2[] = " ";
	char str3[] = "HELLO";
	char strMesaj[20];

	strcpy(strMesaj,str1);
	cout << strMesaj << endl;

	strcat(strMesaj,str2);
	cout << strMesaj << endl;

	strcat(strMesaj,str3);
	cout << strMesaj << endl;

	return 0;
}
*/

///////////////////////////////////////////////////////////////////////////
//Example4

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str1[] = "Heyyyy";
	char str2[] = " ";
	char str3[] = "HELLO";
	char strMesaj[20];

	strcpy(strMesaj,str1);
	cout << strMesaj << endl;

	strcat(strMesaj,str2);
	cout << strMesaj << endl;

	strcat(strMesaj,str3);
	cout << strMesaj << endl;

	int len = strlen(str1);
	cout << "character length of str1 : " << len << endl;

	int strMesajLen = strlen(strMesaj);
	cout << "character length of strMesaj : " << strMesajLen << endl;


	cout << "*******************************************" << endl;
	cout << endl;

	int cmpValue = strcmp(str1,str2);
	cout << "cmpValue : " << cmpValue << endl;

	if(cmpValue !=0)
		cout << "str1 is not equal to str2" << endl;
	else
		cout << "str1 is equal to str2" << endl;
		
	cout << "*******************************************" << endl;
	cout << endl;

	char ch = 'e';
	char *p = strchr(str1,ch);

	cout << "string starting from " << ch << " is " << p << endl;
	return 0;
}

///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////