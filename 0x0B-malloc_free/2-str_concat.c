#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @p1: a pointer to the first
 * @p2: a pointer to the second
 * Return: NULL if memory allocation fails
 * otherwise a pointer to a the new string
 */
char *str_concat(char *p1, char *p2)
{
	unsigned int le1 = 0;
	unsigned int le2 = 0;
	char *cat;

	if (p1)
	{
		while (p1[le1])
			++le1;
	}
	else
	{
		p1 = "";
	}
	if (p2)
	{
		while (p2[le2])
			++le2;
	}
	else
	{
		p2 = "";
	}

	cat = (char *) malloc(sizeof(char) * (le1 + le2 + 1));

	if (!cat)
		return (NULL);
	if (p1)
	{
		for (le1 = 0; p1[le1]; ++le1)
			cat[le1] = p1[le1];
	}
	if (p2)
	{
		for (le2 = 0; p2[le2]; ++le2)
			cat[le1 + le2] = p2[le2];
	}
	cat[le1 + le2] = '\0';
	return (cat);
}
