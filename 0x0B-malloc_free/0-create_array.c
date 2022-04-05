#include "main.h"
#include <stdlib.h>
/**
 * @create_array - creates array of chars, is init with char
 * @size: size of array
 * @c: specific char 
 * Return: NULL if size 0. Or point to array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return(NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		c++;
	}
	return (str);
}
