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
	ssize_t len;
	int stderr_fd = 2;

	len = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") - 1;
	write(stderr_fd, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", len);

	return (1);
}

