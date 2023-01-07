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
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (0);
}
