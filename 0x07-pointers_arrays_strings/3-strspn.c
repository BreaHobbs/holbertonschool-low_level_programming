#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: a char
 * @accept: a char
 *
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t n;
	const char *p;

	for (n = 0; *s; s++, n++)
	{
		for (p = accept; *p && *p != *s; p++)
			;
		if (!*p)
			break;
	}
	return (n);
}

