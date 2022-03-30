#include "main.h"
#include <stdio.h>
/**
 * _strlen_recurssion - finds the length of a string
 * @s: character checker
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
