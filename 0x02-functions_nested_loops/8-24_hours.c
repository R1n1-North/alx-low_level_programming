#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - print every minuate of everyday
 *
 * Return: every minuate
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a <= 50; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 53; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (a >= 50 && b >= 57)
					
						break;
						_putchar(a);
						_putchar(b);
						_putchar(58);
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					
				}
			}
		}
	}
}
