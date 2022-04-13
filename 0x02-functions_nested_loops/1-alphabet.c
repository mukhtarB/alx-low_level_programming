#include "main.h"

/**
 * main - print lowercase alphabets followed
 * by new line
 *
 * Return: 0
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
