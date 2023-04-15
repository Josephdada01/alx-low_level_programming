#include <stdio.h>
#include "main.h"
/**
 * main - a programm that prints arguements passed
 * @argc: the argument count
 * @argv: the argument passed
 * Return: 0 on success
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
