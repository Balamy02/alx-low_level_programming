// main.h
#ifndef MAIN_H
#define MAIN_H

int _isdigit(int c);

#endif /* MAIN_H */


// 1-isdigit.c
#include "main.h"

/**
 * _isdigit - check if a character is a digit (0-9)
 * @c: character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}


// 1-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}

