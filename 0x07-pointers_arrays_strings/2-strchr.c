#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates a character in a string
 * @s: charcter checker
 * @c: charcter checker
 * Return: first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}
	return (s + 1);
	return (NULL);
}
