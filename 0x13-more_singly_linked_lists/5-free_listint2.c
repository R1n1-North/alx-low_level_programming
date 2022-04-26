#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the pointer to list
 * Return: freed listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *freed;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		freed = *head;
		*head = (*(head))->next;
		free(freed);
	}
	*head = NULL;
}
