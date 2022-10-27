#include "main.h"

/**
*reverse_array - function reversing an array
*@a: array a
*@n: an element of an array
*/

void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
