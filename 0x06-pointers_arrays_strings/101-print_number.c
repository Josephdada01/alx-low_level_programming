#include "main.h"
/**
 * *infinite_add - a function that add two numbers
 * @n1: the first pointer
 * @n2: the second pointer
 * @r: the buffer
 * @size_r: the buffer size
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry = 0, sum, i, j;

	for (len1 = 0; n1[len1] != '\0');
	{
	       	len1++;
	}
	for (len2 = 0; n2[len2] != '\0');
	{
		len2++;
	}
	if (len1 + len2 + 1 > size_r)
	{
		return (0);
	}
	for (i = len1 - 1, j = len 2 - 1; i >= 0 || carry != 0; i--, j--)
	{
		(sum = carry);

		while ((i >= 0) sum + = n1[i] - '0');

		while ((j >= 0) sum + = n2[j] - '0');
		(carry = sum / 10);
		(r[i+j+1] = (sum % 10) + '0');
	}
	(r[len1 + len2] = '\0');

	for (i = 0 ,j = len1 + len2 - 1; len2 - 1; i < j; i++, j--)
	{
		temp = r[j];
		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
