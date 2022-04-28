#include "main.h"
/**
 * binary_to_uint - converts unsigned int to binary
 * @b: binary number
 * Return: 0 if binary is not converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int a = 0, c = 0;

	if (b == NULL || (*b != '0' && *b != '1'))
		return (0);
	for (a = 0; b[a] != '\0'; a++)
		;
	a--;
	while (a >= 0)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		val = val + (b[a] - '0') * (1 << c);
		a--;
		c++;
	}
	return (val);
}
