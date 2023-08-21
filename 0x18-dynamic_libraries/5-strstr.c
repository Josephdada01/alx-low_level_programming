#include <stdio.h>
#include "main.h"
/**
 * *_strstr -a fuction that searches a given substring in the main string
 * @haystack: the pointer
 * @needle: the pointer
 * Return:  pointer to the first given substring in the main string.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == 0)
	{
		return (haystack);
	}
	for ( ; *haystack != 0; haystack += 1)
	{
		if (*haystack != *needle)
		{
			continue;
		}
		if (*haystack++ != *needle)
		{
			break;
		}
		haystack = haystack;
	}
	return ('\0');
}
