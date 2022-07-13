#include "main.h"

/**
 * flip_bits - Find no of bits needed to flip number to another
 * @n: first number
 * @m: second number
 *
 * Return: No of bits needed to flip a number (Success) || 0 (Error)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
