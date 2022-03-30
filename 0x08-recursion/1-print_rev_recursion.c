#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - fuction writes string in reverse
 * @s: character checker
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
