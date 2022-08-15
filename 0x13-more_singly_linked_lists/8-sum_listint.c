#include "lists.h"

/**
 * sum_listint - sum
 *
 * @head: list
 *
 * Description: sum of all node
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	if (head == 0)
		return (0);
	return (head->n + sum_listint(head->next));
}
