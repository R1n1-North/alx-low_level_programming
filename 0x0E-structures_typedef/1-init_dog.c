#include "dog.h"
#include <stdio.h>
/**
 * init_dog - intialize variable of type dog
 * @d: varaible to be initialized
 * @name:pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
