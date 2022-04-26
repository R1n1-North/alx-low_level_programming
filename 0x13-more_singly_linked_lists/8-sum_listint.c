#include "lists.h"
/**
 * sum_listint - write the sum of all the data of listint_t
 * @head: pointer to the pointer to the list
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
