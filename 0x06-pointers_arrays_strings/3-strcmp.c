#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *_strcmp - concatenates two strings
 * @s1: a string
 * @s2: a string
 *
 * Return: nothing
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		/* if characters differ, or end of the second string is reached*/
		if (*s1 != *s2)
		{
			break;
		}
		/* move to the next pair of characters*/
		s1++;
		s2++;
	}
    /* return the difference after converting `char*` to `unsigned char*`*/
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
