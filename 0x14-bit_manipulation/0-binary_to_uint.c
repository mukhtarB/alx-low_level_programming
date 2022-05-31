#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: pointer to char
 *
 * Return: converted number (Success) || 0 (Error)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ndx_i = 0, dec = 0;

	if (!b)
		return (0);

	while (b[ndx_i] != '\0')
	{
		if (b[ndx_i] < '0' || b[ndx_i] > '1')
			return (0);

		dec = 2 * dec + (b[ndx_i] - '0');
		ndx_i++;
	}

	return (dec);
}
