#include <stdio.h>
#include "main.h"

/**
 * main - print the name of program via argv
 *
 * @argc: Number of cmd args
 * @argv: array of cmd elements
 *
 * Return: Always (0), Success
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
