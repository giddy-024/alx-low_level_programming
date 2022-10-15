#include <stdio.h>

/**
*main - Entry level
*Description: A program that prints the alphabet in lowercase
*Return: return 0
*/

int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
