#include "hash_tables.h"
#include <stdlib.h>

/**
 * copy_str - copy str
 * @str: string used to copy
 *
 * Return: str if succeeded 0 if not
 */
char *copy_str(const char *str)
{
	unsigned int size = 0;
	char *cp_str = 0;
	unsigned int i = 0;

	while (str[size])
		size++;
	cp_str = (char *)malloc(sizeof(char) * (size + 1));
	if (cp_str == 0)
		return (0);
	for (i = 0; i < size; i++)
		cp_str[i] = str[i];
	cp_str[size] = '\0';
	return (cp_str);
}

/**
 * copy_str_2 - copy str
 * @str: string used to copy
 *
 * Return: str if succeeded 0 if not
 */
unsigned char *copy_str_2(const char *str)
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
	cp_str[size] = '\0';
	return (cp_str);
}

/**
 * hash_table_set - add new element
 * @ht: hash table
 * @key: string used to generate index
 * @value: value to add
 *
 * Return: 1 if succeeded 0 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_el = 0;
	char *ks = copy_str(key);
	char *vs = copy_str(value);
	unsigned char *ks2 = copy_str_2(key);

	if (ht == 0 || ks == 0 || vs == 0 || ks2 == 0)
	{
		if (ks != 0)
			free(ks);
		if (vs != 0)
			free(vs);
		if (ks2 != 0)
			free(ks2);
		return (0);
	}
	new_el = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_el == 0)
		return (0);
	new_el->next = 0;
	new_el->key = ks;
	new_el->value = vs;
	index = key_index(ks2, ht->size);
	if (ht->array[index] != 0)
		new_el->next = ht->array[index];
	ht->array[index] = new_el;
	free(ks2);
	return (1);
}
