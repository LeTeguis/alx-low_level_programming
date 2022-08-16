#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - free
 *
 * @h: list
 *
 * Description: free all node
 *
 * Return: number of node
 */

size_t free_listint_safe(listint_t **h)
{
	if (h == 0 || *h == 0)
	{
		return (0);
	}
	else
	{
		listint_t *tmp = *h;
		size_t count = 1;

		while (tmp != 0)
		{
			listint_t *del = tmp;

			tmp = tmp->next;
			if (del != 0)
			{
				del->next = 0;
				free(del);
				del = 0;
			}
			count++;
		}
		*h = 0;
		h = 0;
		return (count);
	}
}
