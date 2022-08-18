#include "lists.h"
#include <stdio.h>

/**
 * list_len - get
 *
 * @h: list
 *
 * Description: get number of node
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t number_of_nodes = 0;
	const list_t *tmp = h;

	if (h == 0)
		return (0);
	while (tmp != 0)
	{
		tmp = tmp->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
