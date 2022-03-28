#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * *_strpbrk - searches for a string with any set of bytes
 * @s: character checker
 * @accept: charcter checker
 * Return: a pointer to the byte in s, or null if none match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (&s[a]);
		}
	}
	return (NULL);
}
