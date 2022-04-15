#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z') ? (1) : (0));
}
