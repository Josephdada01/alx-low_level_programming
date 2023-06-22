#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - a function that return the sum of a and b
 * @a: the first parameter
 * @b: the second parameter
 * Return: the value of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - a function that return the differrence of a and b
 * @a: the first integer
 * @b: the second integer
 * Return: the value
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - a function that return the product of a and b
 * @a: the first integer
 * @b: the second integer
 * Return: the value
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - a function that divide a and b
 * @a: the first integer
 * @b: the second ineger
 * Return: the value
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - a function that give the remainder after division
 * @a: the first integer
 * @b: the second integer
 * Return: the value
 */
int op_mod(int a, int b)
{
	return (a % b);
}
