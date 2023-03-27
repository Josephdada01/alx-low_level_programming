#include "main.h"

/**
 * swap_int - fuction that swap the value of int a and int b
 * @a: the parameter
 * @b: the second parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{

int exchange;

exchange = *a;
*a = *b;
*b = exchange;
}
