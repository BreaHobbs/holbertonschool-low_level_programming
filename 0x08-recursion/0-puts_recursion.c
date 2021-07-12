#include <stdio.h>
/**
 * *puts - concatenates two strings
 * @s: a string
 *
 * Return: 0
 */



int puts(const char *s)
{
    while(*s)
    {
        if(putchar(*s++) == EOF)
            return EOF;
    }

    if(putchar('\n') == EOF)
        return EOF;

    return 0;
}
