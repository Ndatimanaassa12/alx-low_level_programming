#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory
 *@dest : destination where it be copied
 *@src : what we will copy
 *@n : bytes that will be copied
 *
 *Return: it will return (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
