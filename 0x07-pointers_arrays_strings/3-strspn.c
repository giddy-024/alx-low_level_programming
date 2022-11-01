#include "main.h"

/**
*_strspn - function that gets the length of a prefix substring.
*@s: string to be searched
*@accept: prefix to be measured
*Return: num of bytes in s
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;

	for (; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
			if (s[i] != accept[j])
			break;
	}
	return (i);
}
