#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: is the character to be checked
 * Return: On success 1
 * On error, -1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, @c, 1));
}
