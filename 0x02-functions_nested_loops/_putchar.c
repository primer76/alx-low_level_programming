#include <unistd.h>

/**
 * _ptchar - writes the character c to stdout
 * @c: Th character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set apporiately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
