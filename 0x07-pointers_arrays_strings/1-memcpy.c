#include "main.h"
/**
 * _memcpy - copies from memory area to another
 * @dest: destination
 * @src: source
 * @n: constant
 * Return: a pointer to dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		src[i] = dest[i];

	return (dest);
}
