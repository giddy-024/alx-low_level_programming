#include "main.h"
#include <stddef.h>
/**
*_strchr - string char
*@s: string we look through
*@c: char we look for
*Return: pointer to char or null
*/

char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
