#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints a specific sentence to the standard error
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = strlen(message);

	if (write(2, message, len) != len)
		exit(1);

	return (1);
}

