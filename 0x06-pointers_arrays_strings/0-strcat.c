#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _strcat - function concaternates two strings
 * @dest: character checker
 * @src: character checker
 * Return: a pointer to reslut string dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
