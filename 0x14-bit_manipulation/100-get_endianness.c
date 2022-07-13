#include "main.h"

/**
 * get_endianness - get endianness
 *
 * Return: 0 (Big endian) || 1 (Small endian)
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
