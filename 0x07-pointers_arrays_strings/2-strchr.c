#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *_strchr - function that locates a character in a string.
 * @s: a char
 * @c: a char
 *
 * Return: dest
 */
char *_strchr(char *s, char c)
{
	while (*s != (char) c)
	{
		if (!*s++)
		{
			return (NULL);
		}
	}
	return ((char *)s);
}
