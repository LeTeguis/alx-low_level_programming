#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * copy_str_ - copy the string
 * @str: str to copy
 *
 * Return: NULL or str
 */
unsigned char *copy_str_(const char *str)
{
	unsigned int size = 0;
	unsigned char *cp_str = 0;
	unsigned int i = 0;

	while (str[size])
		size++;
	cp_str = (unsigned char *)malloc(sizeof(unsigned char) * (size + 1));
	if (cp_str == 0)
		return (0);
	for (i = 0; i < size; i++)
		cp_str[i] = str[i];
	return (cp_str);
}
/**
 * hash_table_get - get element
 * @ht: hash table
 * @key: the key of value wi get
 *
 * Return: NULL or value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned char *ks = copy_str_(key);
	unsigned int i = 0;
	unsigned long int index = 0;
	hash_node_t *tmp = 0;

	if (ht == 0 || ks == 0)
		return (0);
	index = key_index(ks, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		while (1)
		{
			if (!key[i] && !tmp->key[i])
			{
				free(ks);
				return (tmp->value);
			}
			if (!tmp->key[i] && key[i])
				break;
			if (tmp->key[i] && !key[i])
				break;
			if (tmp->key[i] != key[i])
				break;
			i++;
		}
		tmp = tmp->next;
	}
	free(ks);
	return (0);
}
