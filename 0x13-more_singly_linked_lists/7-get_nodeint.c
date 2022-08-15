#include "lists.h"

/**
 * get_nodeint_at_index - get
 *
 * @head: list
 * @index: position
 *
 * Description: get node at index
 *
 * Return: node or null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == 0)
		return (0);
	if (index == 0)
		return (head);
	return (get_nodeint_at_index(head->next, index - 1));
}
