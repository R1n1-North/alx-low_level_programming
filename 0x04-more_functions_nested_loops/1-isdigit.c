#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for digit
 *
 * @c: is the character checker
 *
 * Return: value is a number and nothing if not.
 */
int _isdigit(int c)
{
	int c;

	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
