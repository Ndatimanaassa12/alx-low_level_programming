#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: The destination buffer where memory is copied to.
 * @src: The source buffer where memory is copied from.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination buffer (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

