#include "main.h"

/**
 * get_bit - Returns value of bit at given index
 * @n: integer number
 * @index: given index
 *
 * Return: Bit Values (Success) || -1 (Error)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
