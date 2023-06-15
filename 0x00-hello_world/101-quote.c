#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = 59;

    write(2, quote, len);
    return (1);
}

