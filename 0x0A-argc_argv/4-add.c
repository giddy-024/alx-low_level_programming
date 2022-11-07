#include <stdio.h>
#include <stdlib.h>

/**
*main - function that adds positive numbers
*@argc: argc parameter
*@argv: array of a command listed
*Return: always 0
*/

int main(int argc, char *argv[])
{
	int add = 0, i, j, x, num;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (x = 1; x < argc; x++)
	{
		num = atoi(argv[x]);
		add += num;
	}
	printf("%d\n", add);
	return (0);
}
