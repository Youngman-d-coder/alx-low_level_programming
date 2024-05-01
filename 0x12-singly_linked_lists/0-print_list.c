#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	char *str;
	int len;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			_putchar('\n');
		}
		else
		{
			len = h->len;
			str = h->str;
			_putchar('[');
			while (len / 10)
			{
				len /= 10;
			}
			_putchar(len + '0');
			_putchar(']');
			_putchar(' ');
			while (*str)
			{
				_putchar(*str);
				str++;
			}
			_putchar('\n');
		}
		count++;
		h = h->next;
	}
	return (count);
}
