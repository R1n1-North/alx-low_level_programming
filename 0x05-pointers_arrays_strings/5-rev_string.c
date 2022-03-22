#include "main.h"
#include <stdio.h>
/**
 * rev_string - function reverses a string
 * @s: character checker
 * Return: nothing
 */
void rev_string(char *s)
{
	int length = 0;
	int l = 0;
	char *y = s;
	int e = 0;
	int x;
	char n;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	l = length - 1;
	for (; e < ((l / 2) + 1) ; e++)
	{
		x = (l - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}
}
