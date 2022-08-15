#include "lists.h"
#include <stdlib.h>

/**
 * getIndex - get node
 *
 * @node: list
 * @index: index
 *
 * Description: get node at index
 *
 * Return: node at index or null
 */
listint_t *getIndex(listint_t *node, unsigned int index)
{
	if (node == 0)
		return (0);
	if (index == 0)
		return (node);
	return (getIndex(node->next, index - 1));
}
/**
 * insert_nodeint_at_index - insert
 *
 * @head: list
 * @idx: index
 * @n: new value
 *
 * Description: insert node at index
 *
 * Return: new node or null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nnode = 0;

	nnode = (listint_t *)malloc(sizeof(listint_t));
	if (nnode == 0)
		return (0);
	nnode->n = n;
	if (idx == 0)
	{
		if (head == 0 || *head == 0)
			nnode->next = 0;
		else
			nnode->next = *head;
		*head = nnode;
	}
	else
	{
		listint_t *node_i = getIndex(*head, idx - 1);

		if (node_i == 0)
		{
			free(nnode);
			return (0);
		}
		nnode->next = node_i->next;
		node_i->next = nnode;
	}

	return (nnode);
}
