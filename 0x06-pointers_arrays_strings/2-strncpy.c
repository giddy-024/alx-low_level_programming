#include "main.h"
#include <string.h>

/**
*_strncpy - for copying
*@dest: first para
*@src: second para
*@n: third para
*Return: string
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
