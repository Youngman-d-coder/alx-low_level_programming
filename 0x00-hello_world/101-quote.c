#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	ssize_t bytes_written = 0;
	char *msg = "and that piece of art is useful\" - \
Dora Korpar, 2015-10-19\n";
	size_t len = 0;
	
	while (msg[len] != '\0')
	{
		len++;
	}
	
	while (bytes_written < len)
	{
		bytes_written += write(2, msg + bytes_written, len - bytes_written);
	}
	return (1);
}

