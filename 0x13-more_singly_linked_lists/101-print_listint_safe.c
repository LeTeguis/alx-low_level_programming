#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - print
 *
 * @head: list
 *
 * Description: print all node
 *
 * Return: number of node
 */

size_t print_listint_safe(const listint_t *head)
{
	if (head == 0)
	{
		exit(98);
		return (0);
	}
	else
	{
		size_t number = 0;
		listint_t *tmp = head;

		while (tmp->next != 0)
		{
			printf("[%p] %d\n", &(*tmp), tmp->n);
			tmp = tmp->next;
			number++;
		}
		printf("-> [%p] %d\n", &(*tmp), tmp->n);
		return (number);
	}
}
