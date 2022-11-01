#include "main.h"
/**
*_strstr - a function that locates a substring.
*@haystack: string to be searched
*@needle: sunstring to be located
*Return: substring
*substring
*/
char *_strstr(char *haystack, char *needle)
{

	int i;

	for (; *haystack; haystack++)
	{
		for (i = 0; needle[i]; i++)
		{
			if (!(*(haystack + i)))
			{
				return (NULL);
			}
		if (*(haystack + i) != needle[i])
			break;
		}
		if (needle[i] == '\0')
			return (haystack);
	}
	return (NULL);
}
