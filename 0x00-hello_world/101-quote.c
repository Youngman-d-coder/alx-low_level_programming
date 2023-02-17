#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t len = 59;
	size_t bytes_written = 0;
	while (bytes_written < len)
	{
		bytes_written += write(1, msg + bytes_written, len - bytes_written);
	}
	return (1);
}
