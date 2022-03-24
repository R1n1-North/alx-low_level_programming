#include "main.h"
/**
 * reverse_array - reverse the content of an array
 * @a: character checker
 * @n: character checker
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
