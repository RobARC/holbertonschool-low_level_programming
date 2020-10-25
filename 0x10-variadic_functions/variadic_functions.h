#ifndef VARIADICS_H
#define VARIADICS_H
#include<stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(va_list c);
void print_i(va_list i);
void print_f(va_list f);
void print_s(va_list s);


typedef struct validTypes
{
	char *valid;
	void (*f)();
}v_types;

#endif
