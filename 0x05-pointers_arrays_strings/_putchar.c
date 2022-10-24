#include <unistd.h>

/**
*_putchar - writes character to c to stdout
*@c: character to be printed
*Return: always 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
