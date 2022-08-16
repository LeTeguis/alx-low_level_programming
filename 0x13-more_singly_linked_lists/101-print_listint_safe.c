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
	if (head == NULL)
	{
		exit(98);
		return (0);
	}
	else
	{
		const listint_t *tmp = head;
		const listint_t *doublon = 0;
		size_t count = 1;

		printf("%d\n", tmp->n);
		tmp = tmp->next;
		while (tmp != NULL)
		{
			const listint_t *isExist = head;
			size_t nCount = 0;
			int boucle = 0;

			while (isExist != 0)
			{
				if (isExist == tmp)
				{
					if (nCount != count)
					{
						boucle = 1;
						doublon = isExist;
					}
					break;
				}
				isExist = isExist->next;
				nCount++;
			}
			if (boucle == 1)
				break;
			printf("%d\n", tmp->n);
			tmp = tmp->next;
			count++;
		}
		if (doublon != 0)
			printf("[%p] %d\n", &doublon, doublon->n);
		return (count);
	}
}
