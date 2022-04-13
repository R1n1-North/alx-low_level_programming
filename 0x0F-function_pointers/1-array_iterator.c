#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - writes a function that excecutes a function
 * @array: array pointer
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
