#include "main.h"
#include <stdlib.h>
/**
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of c1 and c2
 */
char *str_concat(char *c1, char *c2)
{
	char *conct;
	int i, ci;

	if (c1 == NULL)
		s1 = "";
	if (c2 == NULL)
		c2 = "";
		i = ci = 0;
	while (c1[i] != '\0')
		i++;
	while (c2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));
	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (c1[i] != '\0')
	{
		conct[i] = c1[i];
		i++;
	}
	while (c2[ci] != '\0')
	{
		conct[i] = c2[ci];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
}
