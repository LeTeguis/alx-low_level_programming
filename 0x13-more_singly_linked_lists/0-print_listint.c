#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - print
 *
 * @h: list
 *
 * Description: print all node
 *
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	if (h == 0)
		return (0);
	printf("%d\n", h->n);

	return (1 + print_listint(h->next));
}
