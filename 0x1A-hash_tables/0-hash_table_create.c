#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - new hash
 *
 * @size: size of hash
 *
 * Description: create new instance of hash table
 *
 * Return: new hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = 0;

	new_hash = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (new_hash == 0)
		return (0);
	new_hash->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (new_hash->array == 0)
	{
		free(new_hash);
		return (0);
	}
	new_hash->size = size;
	return (new_hash);
}
