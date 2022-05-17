#include <stdio.h>
#include "main.h"

/**
 * main - Print all cmd arguements
 * @argc: no of cmd args
 * @argv: arr of cmd args (pointer to pointer)
 *
 * Return: Always (0)
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
