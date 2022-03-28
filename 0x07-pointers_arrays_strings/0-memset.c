#include "main.h"
#include <stdio.h>
/**
 * *_memset - fills memeory with constant byte
 * @s: character check
 * @b: character check
 * @n: character check
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	while (n > 0)
	{
		s[a] = b;
		a++;
		n--;
	}
	return (s);
}
