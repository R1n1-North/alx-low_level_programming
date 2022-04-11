#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free memory of dog
 * @d: pointer to dog of type dog_t
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
