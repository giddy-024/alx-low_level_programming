#include <stdio.h>
#include <stdlib.h>

/**
*main - function that multiplies two numbers
*@argc: argc parameter
*@argv: array of a command listed
*Return: always 0
*/

int main(int argc, char *argv[])
{
	int num1, num2, mult;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mult = num1 * num2;

	printf("%d\n", mult);
	return (0);
}
