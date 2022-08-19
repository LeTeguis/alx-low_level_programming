#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - delete
 *
 * @head: list
 *
 * Description: delete all node in list_t list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	if (head != 0)
	{
		list_t *tmp = head;

		while (tmp != 0)
		{
			list_t *delete = tmp;

			tmp = tmp->next;
			if (delete->str != 0)
				free(delete->str);
			delete->len = 0;
			free(delete);
			delete = 0;
		}
		head = 0;
	}
}
