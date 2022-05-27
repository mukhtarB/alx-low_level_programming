#include <stdlib.h>
#include "main.h"

char *_strcopy(char *newstr, char *str);
int _strlen(char *str);


/**
 * _strdup - return new pointer to duplicate of  string
 * @str: - pointer to exisiting string
 *
 * Return: Pointer || NULL
 */
char *_strdup(char *str)
{
	unsigned int len = _strlen(str);
	char *allocated_ptr, *newerstr;

	if (str == NULL)
		return (NULL);

	allocated_ptr = malloc((len + 1) * sizeof(*str));

	if (allocated_ptr == NULL)
	{
		free(allocated_ptr);
		return (NULL);
	}

	newerstr = _strcopy(allocated_ptr, str);
	return (newerstr);
}


/**
 * _strcopy - Copy string1 into string2
 * @newstr: string2, the new string
 * @str: string1, the older string
 *
 * Return: pointer to new string
 */
char *_strcopy(char *newstr, char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		newstr[i] = str[i];

	newstr[i] = '\0';

	return (newstr);
}


/**
 * _strlen - calculate the length of a string
 * @str: pointer to string
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}
