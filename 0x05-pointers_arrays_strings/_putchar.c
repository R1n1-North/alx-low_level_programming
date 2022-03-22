#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - write the character to stdout
 * @c: character checker
 * Return: 1 on success and 0 error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
