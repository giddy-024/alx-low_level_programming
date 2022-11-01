#include "main.h"
/**
*_strchr - string char
*@s: string
*@c: another char
*Return: a string
*/

char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
		i++;
	for (j = 0; j < i; j++)
	{
		if (c == s[j])
			s += b;
			return (s);
	}
	return ('\0');
}
