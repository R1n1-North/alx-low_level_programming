#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alyways 0 (Success)
 */

int main(void)
{
	int bets;

	for (bets = 'z'; bets >= 'a'; bets--)
	{
		putchar(bets);
	}
	putchar('\n');
	return (0);
}
