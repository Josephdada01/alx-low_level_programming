#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that two positive integer
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	result = 0;

	if (argc == 1)
	{
		printf("0\n");/* check if there are enough command line argument */
		return (0);
	}
	/* iterate through the arguments */
	for (a = 1; a < argc; a++)
	{
		/* checking if the arguments contains non digit */
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		/*converting the arguments to an int and add it to result*/
		result += atoi(argv[a]);
	}
	printf("%d\n", result); /* printing the result */
	return (0);
}
