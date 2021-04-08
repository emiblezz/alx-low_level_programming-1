#include "lists.h"

/**
 * find_listint_loop - find loop in linked list
 * @head: pointer to head pointer of linked list
 * Return: address of node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *this, *that;


	this = that = head;
	while (this != NULL && that != NULL)
	{
		this = this->next;
		that = that->next->next;

		if (this == that)
		{
			this = that;
			while (this != that)
			{
				this = this->next;
			        that = that->next;
			}
			return (this);
		}
	}

	return (NULL);
}
