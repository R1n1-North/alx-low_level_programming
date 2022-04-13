#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for the integer
 * @array: contains the elements of size
 * @size: number of elements
 * @cmp: pointer to function
 * Return: first element index,on success or return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
