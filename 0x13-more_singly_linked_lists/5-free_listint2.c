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
	listint_t *tmp = 0;
	listint_t *tete = 0;

	if (head == 0 || *head == 0)
		return;
	tmp = (*head)->next;
	tete = *head;

	while (tmp)
	{
		listint_t *supp = tmp;

		tmp = tmp->next;
		free(supp);
		supp = 0;
	}
	free(tete);
	tete = 0;
}
