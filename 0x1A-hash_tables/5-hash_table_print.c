#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - print
 * @ht: hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	int f = 1;

	if (ht == 0)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *tmp = ht->array[i];

		if (tmp && f != 1)
		{
			printf(", ");
		}
		while (tmp)
		{
			f = 0;
			printf("\'%s\': \'%s\'", tmp->key, tmp->value);
			if (tmp->next != 0)
				printf(", ");
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
