#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Function that initializes variable of type struct
 * @d: pointer to dog struct variable
 * @name: pointer to dog name string
 * @age: dog age
 * @owner: pointer to name of dog owner string
 *
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
