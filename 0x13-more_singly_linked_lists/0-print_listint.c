#include "lists.h"

/**
 * print_listint - prints all the elements of a singly linked list
 * @h: head of list
 * Return: the nuber of nodes
 */

size_t print_listint(const listint_t *h)

{
	const listint_t *new = h;
	size_t count = 0;

	while (new != NULL)
	{
		printf("%d\n", new->n);
		count += 1;
		new = new->next;
	}
	return (count);
}
