#include <stdio.h>
#include <stdlib.h>

/**
 * main - print multiplication value of 2 ints
 * @argc: no of cmd args
 * @argv: arr of cmd args
 *
 * Return: (0) Success, (1) Error
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
