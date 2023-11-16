#include "lists.h"
#include <stdlib.h>
/**
  * list_len - Num
  * @h: singly
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
