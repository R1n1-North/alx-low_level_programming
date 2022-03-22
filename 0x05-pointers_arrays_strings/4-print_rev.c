#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_rev - print a string but in reverse
 * @s: character checker
 * Return: nothing
 */
void print_rev(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (length = length - 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
