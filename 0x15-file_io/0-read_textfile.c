#include "main.h"

/**
 * read_textfile - reads and prints from a file
 * prints it to the POSIX standard output.
 * @filename: path to file
 * @letters: the numbers of letters it should read and print.
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *print_field;
	int file, read_file;

	if (!filename)
		return (0);

	print_field = malloc(letters * sizeof(char));
	if (!print_field)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	read_file = read(file, print_field, letters);
	write(STDOUT_FILENO, print_field, read_file);

	close(file);
	free(print_field);
	return (read_file);
}
