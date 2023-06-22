#include "main.h"

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
	void (*print)(char *);

	print = f;
	print(name);
}
