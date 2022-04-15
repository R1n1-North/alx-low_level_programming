#include "function_pointers.h"
/**
 * op_add - adds the sums together
 * @a: sum 1
 * @b: sum 2
 * Return: addition of two sums
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts the sums from each other
 * @a: sum 1
 * @b: sum 2
 * Return: the subtraction of the sums
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiples the two sums
 * @a: sum 1
 * @b: sum 2
 * Return: the multiplication of sums
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides the two sums
 * @a: sum 1
 * @b: sum 2
 * Return: the division of the sums
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calculates the remainder
 * @a: sum 1
 * @b: sum 2
 * Return: the remainder of the sums
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
