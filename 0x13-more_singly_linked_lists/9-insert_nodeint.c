#include "lists.h"
/**
 * listint_t *insert_nodeint_at_index - inserts new node at given position
 * @head: pointer to the pointer to the list
 * @idx: index of the new node sholud be added
 * @n: data to be inserted
 * Return: new node at idx or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *old, *tmp;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	old = *head;
	tmp = (*(head))->next;
	while (tmp != NULL)
	{
		if (i == idx)
		{
			old->next = new;
			new->next = tmp;
			return (new);
		}
		old = tmp;
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL && i == idx)
	{
		old->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
