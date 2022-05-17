#include <stdio.h>
#include "main.h"

/**
 * main - Print number of arguements passed via cmd
 * @argc: Number of args passed via cmd
 * @argv: List of args passed via cmd
 *
 * Return: Always (0), Success
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
