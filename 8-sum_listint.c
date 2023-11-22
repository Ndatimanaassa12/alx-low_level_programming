#include "lists.h"
/**
  * sum_listint - sums all elements
  * @head: point
  * Return: sum
  */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
