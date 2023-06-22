#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - a function that print a name
 * @name: the pointer that point to the variable
 * @f: a pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
