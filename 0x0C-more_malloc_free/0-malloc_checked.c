#include "main.h"
#include <stdlib.h>

/**
*malloc_checked -  function that allocates memory using malloc
*@b: num of bytes to be allocated
*Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *memr = malloc(b);

	if (memr == NULL)
		exit(98);
	return (memr);
}
