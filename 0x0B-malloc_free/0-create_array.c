#include <stdlib.h>
#include "main.h"

/**
*create_array - function that creates an array of chars
*@size: unsigned size
*@c: characters to be inputted
*Return: ptr
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
