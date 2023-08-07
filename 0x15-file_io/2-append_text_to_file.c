#include <stdio.h>
#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the pointer to the file name
 * @text_content: the parameter text content
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}
	fprintf(file, "%s", text_content);
	fclose(file);
	return (1);
}
