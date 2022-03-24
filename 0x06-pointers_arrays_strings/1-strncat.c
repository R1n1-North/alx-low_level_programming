#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _strncat - concaternates two strings
 * @dest: character checker
 * @src: character checker
 * @n: character checker
 * Return: pointer resulting in string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
