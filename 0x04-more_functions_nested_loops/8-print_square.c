#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square
 * @size: character checker
 */
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; i < size; a++)
	{
		for (b = 0; b < size; i++)
			_putchar('#');
		_putchar('\n');
	}
}
