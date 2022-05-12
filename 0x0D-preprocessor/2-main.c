#include <stdio.h>

/**
 * main - Program to print name of file, taking advantage of the preprocessor
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
