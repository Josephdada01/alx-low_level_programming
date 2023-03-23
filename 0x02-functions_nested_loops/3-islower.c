#include "main.h"
/**
 * _islower - the start point of the function
 *
 * Description: function that check lower case
 *
 * @c: it is lower case or not
 *
 * Return: 1, else 0 (success)
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
