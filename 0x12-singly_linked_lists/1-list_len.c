#include "lists.h"

/**
 * list_len - function to find the lengthof the list
 * @h: pointer to the beginning of list
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
