#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints a specific sentence to the standard error
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	ssize_t len, bytes_written;
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	len = 59;
	bytes_written = write(STDERR_FILENO, message, len);
	if (bytes_written != len)
		return (1);

	return (1);
}

