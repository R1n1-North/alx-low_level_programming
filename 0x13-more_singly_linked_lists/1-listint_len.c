#include "lists.h"
/**
 * listint_len - function write number of elements in a linked listint_t
 * @h: pointer to elements in the list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
