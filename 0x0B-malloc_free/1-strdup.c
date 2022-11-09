#include <stdlib.h>
#include "main.h"

/**
*_strdup - function to duplicate strings to new memory
*@str: pointer to a string
*Return: ptr
*/
char *_strdup(char *str)
{
	unsigned int i = 0, j;

	char *ptr;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
		i++;
	i++;

	ptr = (char *)malloc(i * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; *(str + j) != '\0'; j++)
	{
		*(ptr + j) = *(str + j);
	}
	*(ptr + j) = '\0';
	return (ptr);
}
