#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s : parameter
 * Return: integer converted from string
 */

int _atoi(char *s)
{
	unsigned int ass = 0;
	int sig = 1;

	do {
		if (*s == '-')
			sig *= -1;
		else if (*s >= '0' && *s <= '9')
			ass = (ass * 10) + (*s - '0');
		else if (ass > 0)
			break;
	} while (*s++);

	return (ass * sig);
}
