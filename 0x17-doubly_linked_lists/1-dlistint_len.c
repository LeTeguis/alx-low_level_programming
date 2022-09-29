#include "lists.h"

/**
 * dlistint_len - get
 *
 * @h: potential head of list
 *
 * Description: get the size of list
 *
 * Return: number element in this list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t taille = 0;
	const dlistint_t *prev = h;
	const dlistint_t *next = h;

	if (h == 0)
		return (0);
	while (prev != 0)
	{
		prev = prev->prev;
		taille++;
	}
	while (next != 0)
	{
		next = next->next;
		taille++;
	}

	return (taille - 1);
}
