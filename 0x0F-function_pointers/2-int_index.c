#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: pointer to array
 * @size: size of @array
 * @cmp: pointer to function call to check index in array
 * Return: Always 0 (Success)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
