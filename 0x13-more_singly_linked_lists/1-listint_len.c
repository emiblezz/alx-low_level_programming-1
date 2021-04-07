#include "lists.h"
/**
 * listint_len - counts the elements of litint
 * @h: linked list
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
