#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add
 *
 * @head: header of list
 * @n: value of new element
 *
 * Description: print all node
 *
 * Return: number of node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = 0;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == 0)
		return (0);
	node->n = n;
	if (head == 0 || *head == 0)
		node->next = 0;
	else
		node->next = *head;
	*head = node;
	return (node);
}
