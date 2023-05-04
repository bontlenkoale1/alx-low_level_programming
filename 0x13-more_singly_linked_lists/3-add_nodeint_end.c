#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds new node at the end of listint_t list
 * @h: points to the head of list
 * @n: number initialized as content
 * Description: ...
 * Return: address of newly nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *new_node;
	listint_t *cursor = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}