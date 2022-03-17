#include "main.h"
#include <stdio.h>
/**
 * print_line - draws horizontal line
 * @n: character checker
 * Return: n is the number of time n is printed
 */
void print_line(int n)
{
	char a;

	for (a = 0; a < n; a++)
		_putchar('_');
	_putchar('\n');
}
