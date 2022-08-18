#include "lists.h"
#include <stdio.h>

/**
 * print_list - print
 *
 * @h: list
 *
 * Description: prints all the elements of a list_t list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t number_of_nodes = 0;
	const list_t *tmp = h;

	if (h == 0)
		return (0);
	while (tmp != 0)
	{
		if (tmp->str == 0)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
