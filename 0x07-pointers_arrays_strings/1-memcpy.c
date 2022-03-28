#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - coipes memory area
 * @dest: character checker
 * @src: character checker
 * @n: charcter checker
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = 0;

	while (n > 0)
	{
		dest[a] = src[b];
		a++;
		b++;
		n--;
	}
	return (dest);
}
