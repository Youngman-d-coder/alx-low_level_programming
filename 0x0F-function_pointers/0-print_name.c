#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: name to print
 *
 * @f: function
 *
 * Return: returns void
 */
void print_name(char *name, void (*f)(char *))
{
	void (*log)(char *); /* initializing variable "log" */

	log = f; /* assigning function f to log */
	log(name); /* printing name with log */
}
