#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index list
 * @head: pointer to the pointer to list
 * @index: index of the node that should be deleted
 * Return: 1 if successful or -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old, *tmp;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);
	if (*head != NULL)
	{
		if (index == 0)
		{
			tmp = *head;
			*head = (*(head))->next;
			free(tmp);
			return (1);
		}
		old = *head;
		tmp = (*(head))->next;
		while (tmp != NULL)
		{
			if (i == index)
			{
				old->next = tmp->next;
				free(tmp);
				return (1);
			}
			old = tmp;
			tmp = tmp->next;
			i++;
		}
	}
	return (-1);
}
