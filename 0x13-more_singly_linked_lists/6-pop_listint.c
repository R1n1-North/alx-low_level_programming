#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the pointer to list
 * Return: head node's data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *firstoff;
	int n;

	if (*head != NULL)
	{
		firstoff = *head;
		*head = (*(head))->next;
		n = firstoff->n;
		free(firstoff);
		return (n);
	}
	return (0);
}
