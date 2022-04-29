#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to return length of
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);

	/* "1+"  due to zero indexing */
	return (1 + _strlen_recursion(s + 1));
}
