#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes c to stdout
 * @c: the character to prin
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
