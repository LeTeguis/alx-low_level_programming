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
		listint_t *left = *head;
		listint_t *right = left->next;
		left->next = 0;

		while (*right != 0)
		{
			left = right;
			right = right->next;
			left->next = *head;
			*head = left;
		}
		*head = right;
		return (*head);
	}
}
