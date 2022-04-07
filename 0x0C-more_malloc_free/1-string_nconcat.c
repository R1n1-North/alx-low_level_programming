#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concantenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: string 1+2 = 3
 * Return: pointer to new space or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strDup;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	strDup = malloc(sizeof(char) *  (i + n + 1));
	if (strDup == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] !=  '\0')
	{
		strDup[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		strDup[i] = s2[j];
		i++, j++;
	}
	strDup[i] = '\0';
	return (strDup);
}
