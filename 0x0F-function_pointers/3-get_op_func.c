#include "calc.h"

/**
 * get_op_func - chooses the correct function to perfor the perform
 * 		the operation by user preference
 *
 * @s: operator passed as argument
 *
 * Return: Pointer to corresponding user choice function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    if (size != NULL && array != NULL && cmp != NULL)
    {
	    for (i = 0; i < size; i++)
	    {
		    if (cmp(array[i]) != NULL)
		    {
			    break;
		    }
	    }
	    if (i < size)
	    {
		    return (i);
	    }
    }
    return (-1);
}
