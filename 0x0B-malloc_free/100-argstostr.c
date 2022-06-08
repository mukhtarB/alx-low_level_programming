#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concat and Print terminal args on newline
 * @ac: count of terminal args
 * @av: pointer to array of pointers of terminal args
 *
 * Return: pointer to concat-ed str (Success) || NULL (Error)
 */
char *argstostr(int ac, char *av[])
{
	int ndx_i, ndx_j, ndx_k, str_size;
	char *ptr;

	if (ac == 0 || !av)
		return (NULL);
	ndx_i = ndx_j = ndx_k = str_size = 0;
	while (ndx_i < ac)
	{
		ndx_j = 0;
		while (av[ndx_i][ndx_j])
		{
			str_size++;
			ndx_j++;
		}
		ndx_i++;
	}
	str_size += ndx_i;
	ptr = malloc(sizeof(char) * (str_size + 1));
	if (!ptr)
		return (NULL);

	ndx_i = 0;
	while (ndx_i < ac)
	{
		ndx_j = 0;
		while (av[ndx_i][ndx_j] != '\0')
		{
			ptr[ndx_k] = av[ndx_i][ndx_j];
			ndx_k++;
			ndx_j++;
		}
		ptr[ndx_k++] = '\n';
		ndx_i++;
	}
	ptr[ndx_k] = '\0';
	return (ptr);

}
