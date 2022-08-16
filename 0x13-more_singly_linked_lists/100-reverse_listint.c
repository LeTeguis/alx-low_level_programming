#include "lists.h"

/**
 * reverse_listint - reverse
 *
 * @head: list
 *
 * Description: reverse node
 *
 * Return: pointer of the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	if (head == 0 || *head == 0)
	{
		return (0);
	}
	else
	{
		listint_t *left = 0;
		listint_t *right = 0;

		while (*head != 0)
		{
			right = (*head)->next;
			(*head)->next = left;
			left = *head;
			*head = right;
		}
		*head = right;
		return (*head);
	}
}
