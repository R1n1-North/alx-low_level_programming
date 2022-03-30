#include "main.h"
#include <stdio.h>
/**
 * sqrrecur - computes the square root
 * @n: charcter check
 * @m: character check
 * Return: 1 if not found squareroot, else sqrroot
 */
int sqrrecur(int n, int m)
{
	if (n <= 0)
		return (-1);
	if (n * n == m)
		return (n);
	return (sqrrecur(n - 1, m));
}
/**
 * _sqrt_recursion - returns the natural square root
 * @n: character checker
 * Return: natural number, if not -1
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (sqrrecur(n / 2, n));
}
/**
 * is_prime_number - checks if number is prime
 * @n: character check
 * Return: 1 if number is prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
		return (0);
	if (_sqrt_recursion(n) == -1)
		return (1);
	return (_sqrt_recursion(n));
}
