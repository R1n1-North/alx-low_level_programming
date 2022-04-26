#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: pointer to pointer of list
 * @n: data to copy
 * Return: the address of new elements or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);
	first->n = n;
	first->next = *head;
	*head = first;
	return (*head);
}
