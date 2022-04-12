#include <stdio.h>

/**
 * main - prints all numbers of base 16
 * in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
