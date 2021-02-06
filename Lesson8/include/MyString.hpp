#ifndef __MYSTRING_HPP__
#define __MYSTRING_HPP__

#define __myStrFunc //Bilgilendirme amaçlı

int __myStrFunc myStrlen(const char *str);

bool __myStrFunc myStrcmp(const char *str1, const char *str2);

char *__myStrFunc myStrcat(char *dest, const char *source);

char *__myStrFunc myStrchr(char *str, char ch);

char *__myStrFunc myStrcpy(char *dest, const char *source);

#endif