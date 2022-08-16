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
	size_t i = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
