#include "main.h"

/**
 * print_alphabet - print lowercase alphabets followed
 * by new line
 *
 * Return:
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
