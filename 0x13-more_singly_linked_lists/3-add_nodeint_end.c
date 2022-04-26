#include "lists.h"
/**
 * add_nodeint_end - function adds a new node at the end of listint_t
 * @head: pointer to the pointer of list
 * @n: data to add
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else if ((*head)->next == NULL)
		(*head)->next = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (new);
}
