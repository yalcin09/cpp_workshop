#include <iostream>
#include "MyString.hpp"

using namespace std;

int __myStrFunc myStrlen(const char *str){
	/* NULL character

	char s[4] = {'a','b','c','\0'}; ---> '\0' : NULL character = dizinin sonuna geldiğini bildirir...

	*/

	int count = 0;

	while(*str++ != '\0')
		count++;

	return count;
}

bool __myStrFunc myStrcmp(const char *str1, const char *str2){

	while(*str1++ == *str2++)
		if(*str1 == '\0' || *str2 == '\0')
			break;

	if (*str1 == '\0' ||*str2 == '\0')
		return true;
	else
		return false;
}

char *__myStrFunc myStrcat(char *dest, const char *source){

	
	int i = myStrlen(dest);
	int j;

	for(j=0; source[j] != '\0'; j++)
		dest[i+j] = source[j];

	dest[i+j] = '\0';

	return dest;
}

char *__myStrFunc myStrchr(char *str, char ch){

	while(*str != '\0')
		if(*str++ == ch)
			return str;

	if(*str == ch)
		return str;

	return NULL;

}

char *__myStrFunc myStrcpy(char *dest, const char *source){

	int i;

	for(i=0; source[i] != NULL; i++)
		dest[i] = source[i];

	dest[i] = NULL;

	return dest;
}