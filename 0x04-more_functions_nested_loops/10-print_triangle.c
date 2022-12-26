#include "main.h"

/**
 * print_triangle - prints a triangle of size size
 * @size: size of a triangle
 * Return: void
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
