#include "lists.h"

/**
 * add_dnodeint_end - add node to end of doubly linked list
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node, *temp;

	if (!head) /*empty pointer*/
		return (NULL);

	last_node = malloc(sizeof(struct dlistint_s));

	if (!last_node) /* check malloc*/
		return (NULL);

	if (*head == NULL) /*check empty list*/
	{
		*head = last_node;
		last_node->next = NULL;
		last_node->n = n;
		last_node->prev = NULL;
		return (last_node);
	}

	temp = *head;

	while (temp->next != NULL)/*recurse until you find the last element*/
		temp = temp->next;

	last_node->n = n;
	last_node->prev = temp;
	last_node->next = NULL;
	temp->next = last_node;
	return (last_node);
}
