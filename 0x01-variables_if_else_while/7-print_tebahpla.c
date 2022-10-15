#include <stdio.h>

/**
*main - Entry level
*Description: A program that prints the lowercase alphabet in reverse
*Return: return 0
*/

int main(void)
{
	char x;

	x = 'z';
	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');

	return (0);
}
