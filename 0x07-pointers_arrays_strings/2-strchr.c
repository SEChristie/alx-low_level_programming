#include "main.h"

/**
 * _strchr - check for a particular character in s string
 * @s: string to be checked
 * @c: character to look for
 *
 * Return: pointer to character if found
*/

char *_strchr(char *s, char c)
{
	char *d;

	while (*s != '\0')
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}
	d = s;
	if ((*s == '\0') && (c != '\0'))
		d = "nil"
	return (d);
}
