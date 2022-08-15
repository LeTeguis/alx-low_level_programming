#include "lists.h"
#include <stdlib.h>

/**
 * getLast - get last
 *
 * @head: list
 *
 * Description: get last node
 *
 * Return: last node or null
 */
listint_t *getLast(listint_t **head)
{
	if (head == 0 || *head ==  0)
		return (0);
	if ((*head)->next == 0)
		return (*head);
	return (getLast(&(*head)->next));
}
/**
 * add_nodeint_end - add end
 *
 * @head: list
 * @n: new element
 *
 * Description: add new node in last
 *
 * Return: new node or null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = getLast(head);
	listint_t *node = 0;

	node = (listint_t *)malloc(sizeof(listint_t));

	if (node == 0)
		return (0);
	node->next = 0;
	node->n = n;
	if (last == 0)
		*head = node;
	else
		last->next = node;
	return (node);
}
