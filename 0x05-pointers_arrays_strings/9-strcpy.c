#include "main.h"

/**
 * _strcpy - copies a string from one pointer to another pointer
 *
 * @src : string source
 * @dest : string destination
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int g, h = 0;

	for (g = 0; src[g] != '\0'; ++g)
	{
		dest[h] = src[g];
		++h;
	}
	dest[h] = '\0';

	return (dest);
}
