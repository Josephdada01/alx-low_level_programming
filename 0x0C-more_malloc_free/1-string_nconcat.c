#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *string_nconcat - a function that concatenate two strings
 * @s1: the first character
 * @s2: the second character
 * @n: the size of the bytes
 * Return: a pointer to a new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len, s2_len;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
       	s1_len = strlen(s1);
       	s2_len = strlen(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}
	result = (char *)malloc(s1_len + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strncpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';
	return (result);
}
