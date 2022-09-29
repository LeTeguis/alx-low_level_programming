#include "lists.h"
#include <stdlib.h>

/**
 * sum_prev - get
 *
 * @head: potential list head
 *
 * Return: sum off all node or 0
 */
int sum_prev(dlistint_t *head)
{
	if (head == 0)
		return (0);
	return (head->n + sum_prev(head->prev));
}

/**
 * sum_next - get
 *
 * @head: potential list head
 *
 * Return: sum off all node or 0
 */int sum_next(dlistint_t *head)
{
	if (head == 0)
		return (0);
	return (head->n + sum_next(head->next));
}

/**
 * sum_dlistint - get
 *
 * @head: potential list head
 *
 * Return: sum off all node or 0
 */
int sum_dlistint(dlistint_t *head)
{
	if (head == 0)
		return (0);
	return (head->n + sum_next(head->next) + sum_prev(head->prev));
}
