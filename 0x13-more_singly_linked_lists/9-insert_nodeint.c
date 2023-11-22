#include "lists.h"
#include <stdlib.h>
/**
  * insert_nodeint_at_index - insert a node
  * @head: head
  * @index: location
  * @n: value
  * Return: pointe  head
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *current, *new;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (index == 0)
	{
		new->next = current;
		*head = new;
		return (*head);
	}
	while (index > 1)
	{
		current = current->next;
		index--;
		if (!current)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
