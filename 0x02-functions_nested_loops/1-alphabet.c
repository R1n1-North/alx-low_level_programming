#include "main.h"
#include "1-main.c"
/**
 * main - check code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
