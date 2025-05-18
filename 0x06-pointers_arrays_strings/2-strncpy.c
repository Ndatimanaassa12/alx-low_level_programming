#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination buffer
 * @src: the source string
 * @n: the number of bytes to copy
 *
 * Description: Copies at most n bytes from src to dest.
 * If src is less than n characters long, the remainder
 * of dest is filled with '\0'. If src is longer or equal
 * to n, no null-terminator is added.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
