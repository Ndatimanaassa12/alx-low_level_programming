#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - create a new array containing a copy of the given string
 * @str: a pointer to the string to copy
 * Return: NULL if string is NULL
 * or when it
 * otherwise a return a pointer to the new cp
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int len, j;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	len++;
	if (len < 1)
		return (NULL);
	p = malloc(len * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (j = 0; j < len; j++)
		p[j] = str[j];
	p[j] = '\0';
	return (p);
}
