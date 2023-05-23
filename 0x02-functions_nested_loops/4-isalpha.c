#include "main.h"

/**
 * _isalpha - important program
 *
 * @c: alphabets to test
 * Description: checks if alpha is ippercase
 *
 * Return: one (1) if lower and zero (0) if otherwise
 */
int _isalpha(int c)
{

        if (c >= 'A' && c <= 'Z')
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
