#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase characters
 *@c: is the character to check
 * Return: 1 if c is lowercase, otherwise 0.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
