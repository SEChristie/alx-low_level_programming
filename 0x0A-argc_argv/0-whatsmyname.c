#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * @argv: argument vector
*/

int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
