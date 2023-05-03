#include "lists.h"

/**
 * listint_len - counts nodes n a linked list
 * @h: head of list
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)

{
	const listint_t *new = h;
	size_t count = 0;

	while (new != NULL)
	{
		count += 1;
		new = new->next;
	}
	return (count);
}
