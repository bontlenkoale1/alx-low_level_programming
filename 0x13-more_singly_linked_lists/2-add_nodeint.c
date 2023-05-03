#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @n: integer to be used as content
 *
 * Return: address of the newly added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *head_node;

	head_node = malloc(sizeof(listint_t));
	if (head_node != NULL)
	{
		head_node->n = n;
		head_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		head_node->next = *head;
	*head = head_node;
	return (head_node);

}
