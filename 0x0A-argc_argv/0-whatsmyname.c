#include <stdio.h>
/**
*main - function to print its name
*@argc: argc para
*@argv: array of command listed
*Return: always 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
