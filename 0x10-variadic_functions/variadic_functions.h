#ifndef VARIADIC
#define VARIADIC

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_s(char *separator, va_list list);
void print_integer(char *separator, va_list list);
void print_f(char *separator, va_list list);
void print_c(char *separator, va_list list);

/**
 * struct format_types - Struct operators
 *
 * @identifier: the conversion specifier
 * @f: function pointer
 */
typedef struct format_types
{
	char *identifier;
	void (*f)(char *separator, va_list list);
} f_dt;
#endif
