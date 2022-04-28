#include "main.h"
/**
 * get_bit - function writes value of bit at given index
 * @n: number to check bit in
 * @index: to check bit at
 * Return: value of bit in index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	n = n >> index;
	return (n & 1);
}
