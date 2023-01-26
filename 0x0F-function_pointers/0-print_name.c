#include "function_pointers.h"

/**
 * print_name - prints a name depends of the function.
 * @name: pointer to Name's string.
 * @f: function pointer that doesn't return anything
 * Return: Always 0 (Success)
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
