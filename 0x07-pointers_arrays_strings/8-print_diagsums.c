#include "main.h"
#include <stdio.h>

/**
*print_diagsums - sum of the two diagonals of a square matri*x of integers.
*@a: matrix of integers
*@size: size of the matrix
*/
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum, sum1);
}
