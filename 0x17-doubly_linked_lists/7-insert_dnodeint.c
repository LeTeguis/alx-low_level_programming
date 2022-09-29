#include "lists.h"
#include <stdlib.h>

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
	else if(*h == 0)
		*h = new_value;
	else
	{
		 dlistint_t *first = *h;
		 unsigned int i = 0;

		 while (first->prev != 0)
		 {
			 dlistint_t *tmp = first;

			 first = first->prev;
			 first->next = tmp;
		 }

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
			 dlistint_t *prev = first->prev;

			 first->prev = new_value;
			 new_value->next = first;
			 new_value->prev = prev;
		 }
	}
	return (new_value);
}
