#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _puts - prints string to stdout with newline
 * @str: character checker
 * Return: nothing
 */
void _puts(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
