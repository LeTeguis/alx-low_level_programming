#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - get
 *
 * @head: potential list head
 * @index: value to add
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (head == 0 || *head == 0)
		return (-1);
	else
	{
		 dlistint_t *first = *head;
		 unsigned int i = 0;

		 while (first->prev != 0)
		 {
			 dlistint_t *tmp = first;

			 first = first->prev;
			 first->next = tmp;
		 }

		 while (i < index && first != 0)
		 {
			 dlistint_t *tmp = first;

			 first = first->next;
			 first->prev = tmp;
			 i++;
		 }
		 if (first != 0)
		 {
			 dlistint_t *prev = first->prev;
			 dlistint_t *next = first->next;

			 if (prev != 0)
				 prev->next = next;
			 if (next != 0)
				 next->prev = prev;
			 if (first == *head)
				 *head = (prev != 0) ? prev : next;
			 free(first);
			 first = 0;
		 }
		 else
			 return (-1);
	}
	return (1);
}
