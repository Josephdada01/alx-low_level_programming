#include "hash_tables.h"
/**
 * key_index - a function that gives you index of a key
 * @key: the key
 * @size: the size of the array of the hash table
 * Description: this function should use the hash_djb2 that I wrote earlier
 * Return: The index at which the key/value pair should be stored in array
 * of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
