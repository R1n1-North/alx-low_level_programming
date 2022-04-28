#include <stdio.h>
/**
 * clear_bit - sets value to 0 in given index
 * @n: pointer to value
 * @index: index at bit to change
 * Return: 1 if successful or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
