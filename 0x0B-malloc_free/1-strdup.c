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
	char *a;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++])
			;

		a = malloc(sizeof(char) * size);
		if (a)
		{
			while (size--)
				a[size] = str[size];

			return (a);
		}
	}
	return (NULL);
}
