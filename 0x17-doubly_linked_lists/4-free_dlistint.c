#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - clear
 *
 * @head: potential list head
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head != 0)
	{
		dlistint_t *prev = head->prev;
		dlistint_t *next = head->next;

		free(head);
		head = 0;
		if (prev != 0)
		{
			prev->next = 0;
			free_dlistint(prev);
		}
		if (next != 0)
		{
			next->prev = 0;
			free_dlistint(next);
		}
	}
}
