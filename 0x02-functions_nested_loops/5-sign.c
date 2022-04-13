#include "main.h"

/**
 * print_sign - prints the sign on integer or 0
 * @n: integer value
 *
 * Return: 1 if int n > 0, 0 if n == 0, -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
