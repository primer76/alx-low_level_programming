#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c : code to check
 * Return: 1 if c is lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
