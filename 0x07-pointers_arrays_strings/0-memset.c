#include  "main.h"
/**
 * *_memset - a function that fill the memory set
 * @s: the pointer
 * @n: the unsigned int
 * @b: the constant bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		(s[a] = b);
		n--;		
	}
	return (s);
}
