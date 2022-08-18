#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - add
 *
 * @head: list
 * @str: new string
 *
 * Description: add new node in list_t list
 *
 * Return: addresse of new nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = 0;
	unsigned int nbr = 0;

	node = (list_t *)malloc(sizeof(list_t));
	if (node == 0)
		return (0);
	while (str[nbr])
		nbr++;
	node->next = *head;
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
	(*head) = node;
	return (node);
}
