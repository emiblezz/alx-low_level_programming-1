#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: the linked list
 * Return: The count of the nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return (count);
}
