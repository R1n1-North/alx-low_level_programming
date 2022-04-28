#include "main.h"
#include <stdio.h>

/**
 * _putchar - write to stdout
 * @c: the intput character
 * Return: 1 if Successful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
