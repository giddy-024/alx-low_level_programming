#include <stdio.h>

/**
*main - Entry level
*Return: return 0
*/

int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');

	return (0);
}
