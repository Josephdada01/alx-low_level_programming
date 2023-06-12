#include <stdio.h>
#include "main.h"
/**
 * _isupper - a fuction that check if a parameter is an uppercase
 * @c: the parameter given
 * Return: 0 on success
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
