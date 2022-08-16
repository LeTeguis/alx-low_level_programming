#include "lists.h"

listint_t *gotoit(listint_t *begin, listint_t *end)
{
	if (begin == 0 || begin->next == 0)
		return (0);
	if (begin->next->next == end)
		return (begin);
	return (gotoit(begin->next, end));
}
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
		listint_t *right = 0;

		while (left->next != right)
		{
			if (right == 0)
			{
				right = gotoit(left, right);
				*head = right->next;
				right->next->next = left->next;
				right->next = left;
				left->next = 0;
				left = *head;
				right = right->next;
			}
			else
			{
				right = gotoit(left, right);
				right->next->next = left->next;
				left->next = right->next;
			}
		}
		return (*head);
	}
}
