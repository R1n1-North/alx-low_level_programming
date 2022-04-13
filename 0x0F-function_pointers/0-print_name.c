#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints the name
 * @name: name to be printed
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
