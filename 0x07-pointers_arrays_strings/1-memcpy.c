#include "main.h"

/**
*_memcpy - functions that copy memory area
*@dest: destination memory
*@src: source memory
*@n: num of bytes
*Return: a copy from source
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
