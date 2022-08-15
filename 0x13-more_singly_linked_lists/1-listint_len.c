#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - len
 *
 * @h: list
 *
 * Description: count number of node
 *
 * Return: number of node
 */

size_t listint_len(const listint_t *h)
{
	if (h == 0)
		return (0);
	return (1 + listint_len(h->next));
}
