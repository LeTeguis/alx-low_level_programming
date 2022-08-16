#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * swapNode - swap
 *
 * @first: node
 * @second: node
 *
 * Description: swap content of two nodes
 *
 * Return: nothing
 */
void swapNode(listint_t *first, listint_t *second, int head)
{
	listint_t *tmp = 0;

	if (head == 0)
		tmp = first;
	else
		tmp = first->next;
	first->next = second->next;
	second->suivant = tmp;
	first->n = second->n;
	second->n = tmp;
}

/**
 * replace - get
 *
 * @head: list
 * @node: node
 *
 * Description: place head in front to node
 *
 * Return: front to node
 */
listint_t *replace(listint_t *head, listint_t *node)
{
	listint_t *tmp = head;

	while (tmp->next->next != node)
		tmp = tmp->next;
	return (tmp);
}

/**
 * reverse_listint - reverse
 *
 * @head: list
 *
 * Description: reverse node
 *
 * Return: pointer of the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	if (head == 0 || *head == 0)
	{
		return (0);
	}
	else
	{
		listint_t *left = 0;
		listint_t *right = 0;

		while (*head != 0)
		{
			right = (*head)->next;
			(*head)->next = left;
			left = *head;
			*head = right;
		}
		*head = right;
		return (*head);
	}
}
