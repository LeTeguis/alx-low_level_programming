#include "lists.h"
#include <stdlib.h>

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

	new_value = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_value == 0)
		return (0);
	new_value->n = n;
	new_value->next = 0;
	new_value->prev = 0;
	if (h == 0)
		return (new_value);
	else if (*h == 0)
		*h = new_value;
	else
	{
		dlistint_t *first = getHead(*h);
		unsigned int i = 0;

		while (i < idx && first != 0)
		{
			dlistint_t *tmp = first;

			first = first->next;
			first->prev = tmp;
			i++;
		}
		if (first == 0)
			free(new_value);
		else
		{
			dlistint_t *next = first->next;

			first->next = new_value;
			new_value->next = next;
			new_value->prev = first;
		}
	}
	return (new_value);
}
