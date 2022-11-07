#include <stdio.h>

/**
*main - function that prints argument it recieves
*@argc: argc parameter
*@argv: array of a command listed
*Return: always 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
