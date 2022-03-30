#include "main.h"
/**
 * _puts - prints string followed by new line
 * @s: character checker
 * Return: nothing
 */
void  _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
