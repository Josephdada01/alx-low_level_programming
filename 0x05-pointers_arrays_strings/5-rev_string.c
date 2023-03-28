#include "main.h"
/**
 * rev_string - a funtion that reverses string
 *
 * @s: the string character
 *
 * Return: void
 */
void rev_string(char *s)
{
	int lenght = 0;
	char *start = s;
	char *end = s;
	char temp;

	/* calculate the lenght of the string */
	while (*end != '\0')
	{
		lenght++;
		s++;
	}
	end--; /* move the end pointer to the last*/
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp; /* swapping the character*/

		start++;
		end--;
	}
}
