#include "main.h"

/**
*puts2 - a function that prints every other character of a string
*@str: input string
*/

void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}
