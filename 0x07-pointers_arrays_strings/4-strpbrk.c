#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * it locates the first occurence in the string s of any of
 * the bytes in the string accept
 * @s: string to search
 * @accept: string containing the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, t, j;

	i = 0;
	while (s[i] != '\0')
	{
		t = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				t = 1;
		}
		j = 0;
		if (t == 1)
			return (s + i);
		i++;
	}
	return (0);
}
