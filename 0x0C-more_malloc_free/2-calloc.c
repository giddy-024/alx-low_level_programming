#include "main.h"
#include <stdlib.h>
/**
*_calloc - allocate memory for an array of a certain number
*@nmemb: the number of element
*@size: byte size of each array
*Return: if nmemb && size = 0 || function fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	c = mem;

	for (i = 0; i < (size * nmemb); i++)
		c[i] = '\0';

	return (mem);
}
