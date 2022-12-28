#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest : string 1
 * @src : string 2
 * Return: pointer of returning string @dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a + b] = src[b]
	}
	return (dest);
}
