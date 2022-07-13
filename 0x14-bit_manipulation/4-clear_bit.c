#include "main.h"

/**
 * clear_bit - set value of bit to 0 at given index
 * @n: pointer to the integer
 * @index: given index
 *
 * Return: 1 (Success) || -1 (Error)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
