#include <stdio.h>

/**
*main - Entry level
*Return: return 0
*/

int main(void)
{
	char x;
	char i;

	x = 'a';
	i = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (i <= 'Z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
