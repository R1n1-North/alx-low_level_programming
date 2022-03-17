#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a triangle
 * @size: takes in a integer for size of triangle
 */
void print_triangle(int size)
{
	int row;
	int column;
	int a;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
			_putchar(' ');
		for (a = row + column; a >= 1; a--)
			_putchar('#');
		_putchar('\n');
	}
}
