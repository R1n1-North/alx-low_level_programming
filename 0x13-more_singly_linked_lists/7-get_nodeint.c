#include "lists.h"
/**
 * get_nodeint_at_index - writes the nth node in linked list
 * @head: pointer to the pointer to list
 * @index: the index of the node, starting at 0
 * Return: node or NULL is doesn't exsist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *find;
	unsigned int a = 0;

	if (head != NULL)
	{
		find = head;
		while (find != NULL)
		{
			if (a == index)
				return (find);
			find = find->next;
			a++;
		}
	}
	return (NULL);
}
