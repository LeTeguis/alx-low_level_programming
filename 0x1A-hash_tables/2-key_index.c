#include "hash_tables.h"

/**
 * key_index - index from key
 * @key: string used to generate index
 * @size: size of hash table
 *
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
