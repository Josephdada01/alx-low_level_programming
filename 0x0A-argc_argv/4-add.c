#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - a programm that add two numbers
 * @argc: the arguments count
 * @argv: the arguments array/vector
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j = 0;
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		while (argv[i][j])
		{
			if (argv[i][j] < 0 || argv[i][j] > 9)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
