#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a message to the standard error.
 *
 * Return: 1
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - \
Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") - 1;
	ssize_t bytes_written = 0;

	while (bytes_written < len)
	{
		bytes_written += write(2, msg + bytes_written, len - bytes_written);
	}
	return (1);
}
