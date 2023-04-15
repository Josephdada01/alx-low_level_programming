#include <stdio.h>
#include "main.h"
/**
 * main - a programm that print its name
 * @argc: the number of arguements
 * @argv: the arrays
 * Return: 0 on success
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	{
		printf("%s\n", *argv);
	}
	return (0);
}
