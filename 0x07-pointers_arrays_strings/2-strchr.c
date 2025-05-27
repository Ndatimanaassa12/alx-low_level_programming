#include "main.h"
/**
 *_strchr - return the pointer of currence character
 *@s: string of search in
 *@c: the character to be find
 *
 *Return: pointer or null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}

	if (s[i] == c) /* Check if c is '\0' */
		return (&s[i]);

	return (0); /* NULL */
}
