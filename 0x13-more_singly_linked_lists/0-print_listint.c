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
	const listint_t *tmp = h;
	size_t i = 0;

	if (tmp == 0)
		return (0);
	while (tmp != 0)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
