#include <stdio.h>
#include "main.h"

/**
 * main - a function that print its numbers
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 on success
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	{
		printf("This is the number of argumements: %d\n", argc - 1);
	}
	return (0);
}
