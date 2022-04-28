#include "main.h"
/**
 * set_bit - sets value to 1 of given index
 * @n: int pointer
 * @index: bit changed index
 * Return: 1 if successful or -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (n == 0)
		return (-1);
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	bit = 1;
	bit = bit << index;
	*n = *n | bit;
	return (1);
}
