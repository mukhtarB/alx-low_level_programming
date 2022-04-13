#include "main.h"

/**
 * print_alphabet_x10 - print all lowercase letters
 * in 10 rows, and ends with new line.
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
