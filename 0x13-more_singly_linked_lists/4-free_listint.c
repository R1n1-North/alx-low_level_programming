#include "lists.h"
/**
 * free_listint - frees a listint_t
 * @head: pointer to the pointer to list
 * Return: free list
 */
void free_listint(listint_t *head)
{
	listint_t *freedom;

	while (head != NULL)
	{
		freedom = head;
		head = head->next;
		free(freedom);
	}
}
