#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - define
  * @head: describe argument
  */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
