#include "lists.h"
/**
 * *reverse_listint - reverses a listint_t linked list
 * @head: pointer to the pointer to list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old, *tmp;

	if (*head == NULL)
		return (NULL);
	if ((*(head))->next == NULL)
		return (*head);
	old = *head;
	*head = NULL;
	while (old != NULL)
	{
		tmp = old->next;
		old->next = *head;
		*head = old;
		old = tmp;
	}
	return (*head);
}
