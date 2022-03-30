#include "main.h"
#include <stdio.h>
/**
 * sqrrecur - computes the square root
 * @start: charcter check
 * @end: character check
 * @m: character check
 * Return: 1 if not found squareroot, else sqrroot
 */
int sqrrecur(int start, int end, int m)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == m)
			return (mid);
		if (mid * mid > m)
			return (sqrrecur(start, mid - 1, m));
		if (mid * mid < m)
			return (sqrrecur(mid + 1, end, m));
	}
	return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root
 * @n: character checker
 * Return: natural number, if not -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrrecur(2, n, n));
}
