#include "main.h"
#include <stdlib.h>

/**
*argstostr - function that concatenates all arguments of your program
*@ac: width of grid
*@av: height of grid
*Return: ptr
*/
char *argstostr(int ac, char **av)
{
	int row, col, len, conc;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (row = len = 0; row < ac; row++)
	{
		for (col = 0; av[row][col] != '\0'; col++)
			len++;
		len++;
	}

	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (row = col = conc = 0; conc < len; col++, conc++)
	{
		if (av[row][col] == '\0')
		{
			ptr[conc] = '\n';
			row++;
			conc++;
			col = 0;
		}
		if (conc < len - 1)
			ptr[conc] = av[row][col];
	}
	ptr[conc] = '\0';
	return (ptr);
}
