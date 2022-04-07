#include "main.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * *array_range - funct creates array of integers
 * @min: minimum number of arrays
 * @max: maximum number of arrays
 * Return: min > max NULL or arrays
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size && min <= max; i++, min++)
		*(p + i) = min;
	return (p);
}
