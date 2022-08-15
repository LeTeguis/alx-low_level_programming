#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free
 *
 * @head: list
 *
 * Description: free all node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	while (tmp)
	{
		listint_t *supp = tmp;

		tmp = tmp->next;
		free(supp);
		supp = 0;
	}
	*head = 0;
}
