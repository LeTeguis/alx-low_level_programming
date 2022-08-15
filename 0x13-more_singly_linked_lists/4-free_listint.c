#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free
 *
 * @head: list
 *
 * Description: free all node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	if (head == 0)
		return;
	if (head->next == 0)
	{
		free(head);
		return;
	}
	free_listint(head->next);
	free(head);
}
