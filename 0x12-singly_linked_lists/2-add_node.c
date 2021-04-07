#include "lists.h"

/**
 * _strlen - string length function
 * @s: string
 * Return: int length of string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node - adds node to beginning of linked list
 * @head: double pointer to struct
 * @str: string
 * Return: pointer to head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *s = strdup(str);

	if (s == NULL || s == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = s;
	new_node->len = _strlen(s);

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node;

	return (new_node);
}
