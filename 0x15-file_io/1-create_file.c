#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <sys/stat.h>
/**
 * create_file - Create a function that creates a file.
 * @filename: the pointer to the file
 * @text_content: the parameter
 * Return: success or failure
 */
int create_file(const char *filename, char *text_content)
{
	size_t content_lenght;
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}
	file = fopen(filename, "w");

	if (file == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		content_lenght = strlen(text_content);
	}
	if (fwrite(text_content, sizeof(char), content_lenght, file) !=
content_lenght)
	{
		fclose(file);
		return (-1);
	}
	fclose(file);

	if (chmod(filename, S_IRUSR | S_IWUSR) != 0)
	{
		return (-1);
	}
	return (1);
}
