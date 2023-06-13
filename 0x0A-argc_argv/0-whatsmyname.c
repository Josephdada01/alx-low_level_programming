#include <stdio.h>
#include "main.h"
/**
 * main - a program that print its name
 * @argc: the arguments count
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
