#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps value of two integers
 * @a: character check
 * @b: character check
 * Return: (0)
 */
void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
