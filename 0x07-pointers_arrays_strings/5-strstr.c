#include "main.h"
#include <stdio.h>
/**
 * *_strstr - locates a substring
 * @haystack: character checker
 * @needle: character checker
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
