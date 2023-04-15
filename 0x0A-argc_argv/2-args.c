#include <stdio.h>
#include "main.h"
/**
 * main - a programm that prints argument its receive
 * @argc: arguments counts
 * @argv: arguments vector/array
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
