#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 *
 * @ht: hash table
 *
 * Return: None
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;

	if (ht == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *tmp = ht->array[i];

		while (tmp)
		{
			hash_node_t *del = tmp;

			tmp = tmp->next;
			free(del->key);
			free(del->value);
			free(del);
			del = 0;
		}
	}
	ht->size = 0;
	free(ht->array);
	ht->array = 0;
	free(ht);
	ht = 0;
}
