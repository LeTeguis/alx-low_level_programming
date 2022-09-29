#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * getHead - get
 *
 * @h: potential head
 *
 * Return: node
 */
dlistint_t *getHead(dlistint_t *h)
{
	dlistint_t *first = h;

	if (h == 0)
		return (0);
	while (first->prev != 0)
	{
		dlistint_t *tmp = first;

		first = first->prev;
		first->next = tmp;
	}
	return (first);
}
/**
 * insert_dnodeint_at_index - get
 *
 * @h: potential list head
 * @idx: value to add
 * @n: value
 *
 * Return: node at index or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_value = 0;
	dlistint_t *node = getHead(*h);
	unsigned int i = 0;
	dlistint_t *prev = 0;
	dlistint_t *next = 0;

	if (node == 0)
		return (0);
	while (i < idx)
	{
		dlistint_t *tmp = node;

		node = node->next;
		node->prev = tmp;

		if (node->next == 0 && i == idx - 1)
		{
			prev = node;
			break;
		}
		if (node == 0)
			return (0);
		i++;
		if (i == idx)
		{
			prev = node->prev;
			next = node;
		}
	}

	new_value = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_value == 0)
		return (0);
	new_value->n = n;
	new_value->prev = prev;
	new_value->next = next;
	if (next != 0)
		next->prev = new_value;
	if (prev != 0)
		prev->next = new_value;
	else
	{
		if (h != 0)
			*h = new_value;
	}
	return (new_value);
}
