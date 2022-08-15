#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete
 *
 * @head: list
 * @index: index to delete
 *
 * Description: delete node at index
 *
 * Return: 1 if delete is success -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head == 0 || *head == 0)
		return (-1);
	if (index == 0)
	{
		listint_t *del = *head;

		*head = (*head)->next;
		free(del);
	}
	else
	{
		listint_t *tmp = *head;
		unsigned int i = 0;

		while (tmp->next != 0 && i < index - 1)
		{
			tmp = tmp->next;
			i++;
		}

		if (tmp != 0 && tmp->next != 0)
		{
			listint_t *supp = tmp->next;

			tmp->next = supp->next;
			free(supp);
		}
		else
			return (-1);
	}

	return (1);
}
