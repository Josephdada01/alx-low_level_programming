#include "main.h"
#include <stddef.h>
/**
* leet - a function that  encodes a string.
*
* @encode: The string to encode.
*
* Return: A pointer to the encoded string.
*/
char *leet(char *encode)
{
	int a, b;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	for (a = 0; encode[a] != '\0'; a++)
	{
		for (b = 0; letters[b] != '\0'; b++)
		{
			if (encode[a] == letters[b])
			{
				encode[a] = numbers[b];
			}
			break;
		}
	}
	return (encode);
}
