#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals
 * @a: character checker
 * @size: character checker
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int b;
	int d1 = 0;
	int d2 = 0;
	int s = size * size;

	for (b = 0; b < s; b += size + 1)
	{
		d1 += a[b];
	}

	for (b = size - 1; b < s - 1; b += size - 1)
	{
		d2 += a[b];
	}

	printf("%d, %d\n", d1, d2);
}
