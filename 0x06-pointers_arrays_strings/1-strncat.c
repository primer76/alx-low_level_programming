#include "main.h"

/**
 * _strncat - concatenates 2 strings together
 * @dest : string 1
 * @src : string 2
 * @n : most number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int w, x;

	w = 0;

	while (dest[w])
		w++;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[w + x] = src[x];

	dest[w + x] = '\0';

	return (dest);
}
