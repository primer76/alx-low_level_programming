#include "main.h"

/**
 * _strlen - returns lengthe of string
 * @s : to be checked
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; ++s)
		++length;

	return (length);
}
