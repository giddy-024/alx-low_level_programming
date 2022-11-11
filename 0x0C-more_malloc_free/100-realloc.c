#include "main.h"
#include <stdlib.h>

/**
*_realloc - Reallocate mem block using malloc and free
*@ptr: pointer to memory previously allocated
*@old_size: size in byte of the allocated space
*@new_size:size in bytes for the new memory block
*Return: if new size == old-ptr
*if new == 0 and ptr is not NULL
*otherwise - pointer to the reallocation memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *filler;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = mem;

	for (i = 0; i < old_size && i < new_size; i++)
		filler[i] = *ptr_copy++;

	free(ptr);
	return (mem);
}
