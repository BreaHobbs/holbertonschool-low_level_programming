#include <stdio.h>
#include "holberton.h"
/**
 * *_puts_recursion - concatenates two strings
 * @s: a string
 *
 * Return: 0
 */


void _puts_recursion(char *s)
{
    while(*s)
    {
        if(_putchar(*s++) == EOF)
            return;
    }

    if(_putchar('\n') == EOF)
        return;

return;
}
