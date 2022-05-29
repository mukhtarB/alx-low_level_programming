#include <stdlib.h>
#include "main.h"


/**
 * str_concat - concatenate two strings s1 and s2
 * @s1: leading str s1
 * @s2: concatenated str s2
 *
 * Return: Pointer to concat str || Null
 */

char *str_concat(char *s1, char *s2)
{
	char *s3_ptr;
	int s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	s3_ptr = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (s3_ptr == NULL)
		return (NULL);

	/* append s1 -> s3 @pos: 0; then append s2 -> s3 @pos: (end of s1) */
	s3_ptr = _strappend(s3_ptr, s1, 0);
	s3_ptr = _strappend(s3_ptr, s2, s1_len);

	return (s3_ptr);
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


/**
 * _strappend - add string2 to string1 from a specified index
 * @newstr: string2, the new string
 * @str: string1, the older string
 * @append_index: index to start concat op
 *
 * Return: pointer to new string
 */
char *_strappend(char *newstr, char *str, unsigned int append_index)
{
	unsigned int ndx_i = 0;

	while (str[ndx_i] != '\0')
	{
		newstr[append_index] = str[ndx_i];
		append_index++;
		ndx_i++;
	}

	return (newstr);
}
