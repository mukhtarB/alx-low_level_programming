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
	dog_t *my_new_dog;
	char *name_ptr, *owner_ptr;

	if (!name || age < 0 || !owner)
		return (NULL);

	my_new_dog = malloc(sizeof(dog_t));
	name_ptr = malloc(sizeof(char) * (_len(name) + 1));
	owner_ptr = malloc(sizeof(char) * (_len(owner) + 1));


	if (!my_new_dog || !name_ptr || !owner_ptr)
	{
		free(my_new_dog);
		free(name_ptr);
		free(owner_ptr);
		return (NULL);
	}

	/* return pointer to allocated string to struct str(s) */
	my_new_dog->name = _strcpy(name_ptr, name);
	my_new_dog->age = age;
	my_new_dog->owner = _strcpy(owner_ptr, owner);

	return (my_new_dog);
}


/**
 * _len - Finds the length of a string
 * @str: The string
 *
 * Return: an int number repr the length of str
 */

int _len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}


/**
 * _strcpy - Copy a string from s1 to s2 in memory
 * @s2: new str
 * @s1: old str
 *
 * Return: pointer to new str (s2)
 */

char *_strcpy(char *s2, char *s1)
{
	int i = 0;

	while (*(s1 + 1) != '\0')
	{
		/* pointer arithmetic */
		*(s2 + 1) = *(s1 + 1);
		i++;
	}

	*(s2) = '\0';

	return (s2);
}
