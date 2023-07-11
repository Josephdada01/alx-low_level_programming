#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * read_textfile - funct that reads a text file and prints it to the POSIX st/o
 * @filename: the pointer to the file name
 * @letters: the number of the chracter
 * Return: the actual number it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	size_t bytes_read;
	FILE *file;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}
	buffer = (char *)malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytes_read = fread(buffer, sizeof(char), letters, file);

	buffer[bytes_read] = '\0';

	if (ferror(file) || bytes_read == 0 || fwrite(buffer,
sizeof(char), bytes_read, stdout) != bytes_read)
	{
		bytes_read = 0;
	}
	fclose(file);
	free(buffer);
	return (bytes_read);
}
