#include "main.h"

/**
 * _pow_recursion - Calculate the exponential value of integers
 * recursively
 * @x: the base integer
 * @y: the power integer
 *
 * Return: Reult integer value of x**y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
