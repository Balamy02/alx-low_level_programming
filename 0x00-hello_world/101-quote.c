#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a quote using the write function.
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(quote) - 1;
	ssize_t bytes_written = write(2, quote, len);

	if (bytes_written != len)
		return (1);

	return (1);
}

