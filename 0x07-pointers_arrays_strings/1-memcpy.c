#include "main.h"
/**
 * *_memcpy - a function that copies memory area.
 * @n: the byte that need to be copy
 * @src: area that need to be copied from
 * @dest: copy to dest
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;

	for (a = 0; n < 10;)
	{
		a++;
		(src[a] = dest[a]);
	}
	return (dest);
}
