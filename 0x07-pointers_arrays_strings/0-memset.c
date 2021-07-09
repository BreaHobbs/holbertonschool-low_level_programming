#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *_memset - a function that fills memory with a constant byte.
 * @s: Pointer to the destination object.
 * @b: Value to be filled.
 * @n: Number of bytes to be filled starting from s to be filled.
 *
 * Return: the value of s
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned char *p = 0;
	
	while (n--)
    {
	    *p++ = (unsigned char)b;
    }
	return (s);
}
