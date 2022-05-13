#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: String representation of dog name
 * @age: Integer reperesentation of dog age
 * @owner: String repersentation of dog owner
 *
 * Return: Pointer to an initialized struct instance | NULL if func fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* Init new_dog var */
	/* declare var of typr dog struct */
	dog_t *my_new_dog;

	/* dynamicaaly allocate memory space for said variable */
	my_new_dog = malloc(sizeof(dog_t));

	if (my_new_dog == NULL)
	{
		free(my_new_dog);
		return (NULL);
	}

	my_new_dog->name = name;
	my_new_dog->age = age;
	my_new_dog->owner = owner;

	return (my_new_dog);
}
