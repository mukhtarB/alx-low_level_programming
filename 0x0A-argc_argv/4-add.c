#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: no of cmd args
 * @argv: arr of cmd args
 *
 * Return: (0) Success; (1) Error
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i] < 48 || argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
