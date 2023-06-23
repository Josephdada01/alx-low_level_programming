#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - a function that print numbers
 * @separator: the pointer
 * @n: the number of integer passed
 * Return: the numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	int number;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);
		printf("%d", number);
	}
	if (i < n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
