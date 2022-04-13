#include <stdio.h>
#include "function_pointers.h"
#include "stdlib.h"
/**
 * print_name - prints the name
 * @name: pointer to name
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	f(name);
}
