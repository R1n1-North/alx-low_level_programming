#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters
 * @n: the sum returned
 *
 * Return: sum of all parameters or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int sum = 0;
	unsigned int i = 0;

	if (n != 0)
	{
		va_start(numbers, n);

		while (i < n)
		{
			sum += va_arg(numbers, int);
			i++;
		}
		
		va_end(numbers);
		return (sum);
	}

	return (0);
}
