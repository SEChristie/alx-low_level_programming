#include "function_pointers.h"

/**
 * int_index - returns index of integer that
 * makes cmp return 1
 * @array: array of integers to be tested
 * @size: size of @array
 * @cmp: pointer to function call to check index in array
 * Return: index of integer in array that makes cmp return 1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if ((array == NULL) || (cmp == NULL))
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	{
		
		
	return (-1);
}
