#include "main.h"

/**
 * wildcmp - checks if 2 strings are identical and returns 1
 * if true and 0 if false
 * @s1: input string1
 * @s2: input string2
 *
 * Return: 0 if false, 1 if true
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));

		else
			return (*s2 == '\0');
	}

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
