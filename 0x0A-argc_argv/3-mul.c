#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - a program that multiply two numbers
 * @argc: the arguments counts
 * @argv: the arguments vector/arrays
 * Return: 0 on success, 1 on Error
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	/* this code check if two arguments were providede */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	/* now I parse the arguments as an integer */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
