#include "main.h"
/**
 * print_binary - binary representation of a number
 * @n: number that will represent the binary
 * Return: the binary
 */
void print_binary(unsigned long int n)
{
	char a;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	a = (n & 1) ? '1' : '0';
	_putchar(a);
}
