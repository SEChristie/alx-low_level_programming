#include "main.h"

/**
 *_memset - function fill the first @n bytes of the memory area pointed
 *to by @s with the constant byte @b
 *@s: with the constant byte @b
 *@b: memory area pointer
 *@n: bytes of the memory area pointed to by @s
 *Return: a pointer to the memory area @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *d;

	d = s;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (d);
}
