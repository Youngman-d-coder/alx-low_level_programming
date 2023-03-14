#include "main.h"

/**
 * _isalpha - checks alphabts
 * @c: does the confirmation
 * Return: 1 if c is an alpha, 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
