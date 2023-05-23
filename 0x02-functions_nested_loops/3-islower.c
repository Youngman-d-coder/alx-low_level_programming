#include "main.h"
#include <ctype.h>

/**
 * _islower - important program
 *
 * @c: alphabets to test
 * Description: checks if alpha is lower
 *
 * Return: 1 if lower and zero if otherwise
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
