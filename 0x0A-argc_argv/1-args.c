#include <stdio.h>
#include "main.h"
/**
 * main - a programm that print arguments passed
 * @argc: the arguments count
 * @argv: the arguments passed
 * Return: 0 on success
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
