#include "main.h"
#include <stdlib.h>

/**
*str_concat - function that concatenates two strings
*@s1: Pointer to string 1
*@s2: Pointer to string 2
*Return: ptr
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i, total_len;
	unsigned int j = 0, k = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;
	total_len = len1 + len2 + 1;

	ptr = (char *)malloc(total_len * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_len; i++)
	{
		if (*(s1 + j) != '\0')
		{
			*(ptr + i) = *(s1 + j);
			j++;
		}
		else if (*(s1 + j) == '\0' && *(s2 + k) != '\0')
		{
			*(ptr + i) = *(s2 + k);
			k++;
		}
	}
	*(ptr + i) = '\0';
	return (ptr);
}
