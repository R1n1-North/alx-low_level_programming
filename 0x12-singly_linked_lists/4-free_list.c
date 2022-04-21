#include "lists.h"

/**
 * free_list - functionthat frees list
 * @head: pointer to the beginning of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *free_this;

	while (head != NULL)
	{
		free_this = head;
		head = head->next;
		free(free_this->str);
		free(free_this);
	}
	head = NULL;
}
