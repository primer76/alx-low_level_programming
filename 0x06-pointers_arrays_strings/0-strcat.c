#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest : string 1
 * @src : string 2
 * Return: pointer of returning string
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;

	for (b = 0; src[b]; b++)
		dest[a++] = src[b];

	return (dest);
}
