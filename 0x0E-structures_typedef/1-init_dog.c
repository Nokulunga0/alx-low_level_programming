#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
