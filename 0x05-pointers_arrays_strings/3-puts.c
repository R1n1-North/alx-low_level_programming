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
	int a;

	while (*(str + 1) != '\0')
	{
		_putchar(str[1]);
		a++;
	}
	_putchar('\n');
}
