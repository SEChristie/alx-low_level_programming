#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int n, i, c, b, *strt;

	strt = a;
	n = size;
	c = *(a + (n - 1));
	b = *a;
	for (i = 0; i < n - 1; i++)
	{
		b += *(a + (n + 1));
		a += (n + 1);
	}
	a = strt + (n - 1);
	for (i = 0; i < n - 1; i++)
	{
		c += *(a + (n - 1));
		a += (n - 1);
	}
	printf("%d, %d\n", b, c);
}
