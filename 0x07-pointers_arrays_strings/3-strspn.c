#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: character check
 * @accept: character checker
 * Return: the number of bytes s
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	unsigned int length;

	length = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0' && accept[b] != s[a]; b++)
			;
		if (s[a] == accept[b])
			length++;
		if (accept[b] == '\0')
			return (length);
	}
	return (length);
}
