#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _strcmp - compares two strings
 * @s1: character checker
 * @s2: character checker
 * Return: compared strings
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
