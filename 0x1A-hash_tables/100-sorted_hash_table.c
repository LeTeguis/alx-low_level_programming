#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

void tmp_func(shash_node_t *new_el, shash_table_t *ht, char *sks);

/**
 * strcpy_ - copy string
 * @str: string
 *
 * Return: copy or NULL
 */
unsigned char *strcpy_(const char *str)
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
 * strcpy_2 - copy string
 * @str: string
 *
 * Return: copy or NULL
 */
char *strcpy_2(const char *str)
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
 * str_cmp - compare two string
 * @str1: first string
 * @str2: second string
 *
 * Return: 0 if str1 = str2 , negative value if str1 < str2 else positive value
 */
int str_cmp(const char *str1, const char *str2)
{
	int i = 0;

	if (str1 == 0 && str2 == 0)
		return (0);
	while (1)
	{
		if (str1[i] && !str2[i])
			return (str1[i]);
		if (!str1[i] && str2[i])
			return (-str2[i]);
		if (!str1[i] && !str2[i])
			return (0);
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
}

/**
 * shash_table_create - create hash table
 * @size: size of hash
 * Return: new shash table or NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht = (shash_table_t *)malloc(sizeof(shash_table_t));

	if (sht == 0)
		return (0);
	sht->array = (shash_node_t **)malloc(sizeof(shash_node_t *) * size);

	if (sht->array == 0)
	{
		free(sht);
		return (0);
	}
	sht->size = size;
	sht->shead = 0;
	sht->stail = 0;
	return (sht);
}

/**
 * shash_table_set - set new value
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if is succeeded 0 if not
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned char *ks = strcpy_(key);
	char *sks = strcpy_2(key);
	char *vs = strcpy_2(value);
	unsigned long int index = 0;
	shash_node_t *new_el = 0;

	if (ht == 0 || ks == 0)
	{
		if (ks != 0)
			free(ks);
		return (0);
	}
	new_el = (shash_node_t *)malloc(sizeof(shash_node_t));
	if (new_el == 0)
		return (0);
	new_el->next = 0;
	new_el->sprev = 0;
	new_el->snext = 0;
	new_el->key = sks;
	new_el->value = vs;
	index = key_index(ks, ht->size);
	if (ht->array[index] != 0)
		new_el->next = ht->array[index];
	ht->array[index] = new_el;

	if (ht->shead == 0)
	{
		ht->shead = new_el;
		ht->stail = new_el;
	}
	else
	{
		tmp_func(new_el, ht, sks);
	}

	free(ks);
	return (1);
}

/**
 * tmp_func - reduce fonction
 * @new_el: new element
 * @ht: hash table
 * @sks: string
 */
void tmp_func(shash_node_t *new_el, shash_table_t *ht, char *sks)
{
	shash_node_t *tmp = ht->shead;
	shash_node_t *cp = 0;

	while (tmp)
	{
		if (str_cmp(sks, tmp->key) <= 0)
			break;
		cp = tmp;
		tmp = tmp->snext;
		if (tmp != 0)
			tmp->sprev = cp;
		cp->snext = tmp;
	}
	if (cp != 0)
		cp->snext = new_el;
	new_el->sprev = cp;
	new_el->snext = tmp;
	if (tmp != 0)
		tmp->sprev = new_el;
	if (new_el->sprev == 0)
		ht->shead = new_el;
	if (new_el->snext == 0)
		ht->stail = new_el;
}

/**
 * shash_table_get - get element
 * @ht: hash table
 * @key: key
 *
 * Return: value of key or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned char *ks = strcpy_(key);
	unsigned int i = 0;
	unsigned long int index = 0;
	shash_node_t *tmp = 0;

	if (ht == 0 || ks == 0)
	{
		if (ks != 0)
			free(ks);
		return (0);
	}
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

/**
 * shash_table_print - print
 * @ht: hash table
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp = 0;
	shash_node_t *cp = 0;

	if (ht == 0 || ht->shead == 0)
		return;
	tmp = ht->shead;
	printf("{");
	while (tmp)
	{
		cp = tmp;
		if (tmp->sprev != 0)
			printf(", ");
		printf("\'%s\': \'%s\'", tmp->key, tmp->value);
		tmp = tmp->snext;
		if (tmp != 0)
			tmp->sprev = cp;
		cp->snext = tmp;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print reverse
 * @ht: hash table
 * Return: Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp = 0;
	shash_node_t *cp = 0;

	if (ht == 0 || ht->shead == 0)
		return;
	tmp = ht->stail;
	printf("{");
	while (tmp)
	{
		cp = tmp;
		if (tmp->snext != 0)
			printf(", ");
		printf("\'%s\': \'%s\'", tmp->key, tmp->value);
		tmp = tmp->sprev;
		if (tmp != 0)
			tmp->snext = cp;
		cp->sprev = tmp;
	}
	printf("}\n");
}

/**
 * shash_table_delete - clear hsah table
 * @ht: hash able
 * Return: Nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp = 0;
	shash_node_t *cp = 0;

	if (ht == 0)
		return;
	tmp = ht->shead;
	while (tmp)
	{
		cp = tmp;
		tmp = tmp->snext;
		if (tmp != 0)
			tmp->sprev = 0;

		free(cp->key);
		free(cp->value);
		free(cp);
	}
	free(ht->array);
	free(ht);
}
