#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - add
 *
 * @head: list
 * @str: new string
 *
 * Description: add new node in list_t list
 *
 * Return: addresse of new nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = 0;
	unsigned int nbr = 0;

	node = (list_t *)malloc(sizeof(list_t));
	if (node == 0)
		return (0);
	while (str[nbr])
		nbr++;
	node->next = 0;
	node->str = (char *)malloc(sizeof(char) * (nbr + 1));
	if (node->str == 0)
		node->len = 0;
	else
	{
		unsigned int i = 0;

		while (i < nbr)
		{
			node->str[i] = str[i];
			i++;
		}
		node->str[nbr] = '\0';
		node->len = nbr;
	}
	if (head != 0 && *head != 0)
	{
		list_t *tmp = *head;

		while (tmp->next != 0)
			tmp = tmp->next;
		tmp->next = node;
	}
	else
		(*head) = node;
	return (node);
}
