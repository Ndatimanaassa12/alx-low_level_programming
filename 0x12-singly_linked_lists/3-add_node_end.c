#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
  * _strlen - gets length of the string
  * @s: string
  * Return: length
  */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
  * _strdup - recreation
  * @src: source
  * Return: pointer
  */
void *_strdup(const char *src)
{
	int len, i;
	char *dest;

	len = _strlen(src);
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
  * add_node_end - add node
  * @head: current
  * @str: string
  * Return: ptr
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	char *dupstr;

	if (str == NULL)
		return (NULL);
	dupstr = _strdup(str);
	if (dupstr == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = dupstr;
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}
