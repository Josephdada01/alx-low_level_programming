#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - function that selects the correct func to perform the opera
 * @s: the operator passed as arguments to the programm
 * Return: pointer the function or null if not found
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
