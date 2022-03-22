#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * puts2 - prints every other letter of a string
 * @str: character checker
 * Return: nothing
 */
void puts2(char *str)
{
	int length = 0;
	int l = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	l = length - 1;
	for (z = 0; z <= l; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
