#include "variadic_functions.h"
/**
 * print_strings - prints the string
 * @seperator: string printed betwenn strings
 * @n: number of strings passed to the function
 * Return: string or NULL or NIl if strings are not printed
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *ptr;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(strings, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
			if (i < n - 1 && seperator != NULL)
				printf("%s", seperator);
		}
	}
	va_end(strings);
	printf("\n");
}
