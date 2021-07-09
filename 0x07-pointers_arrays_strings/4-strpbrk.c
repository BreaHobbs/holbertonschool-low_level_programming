#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *_strpbrk - function that searches a string for a set of bytes.
 * @s: a char
 * @accept: a char
 *
 * Return: dest
 */
char *_strpbrk(char *s, char *accept)
{
/*return null if any one is NULL*/
	if ((s == NULL) || (accept == NULL))
		return (NULL);
		while (*s)
		{
			/*return s1 char position if found in s2*/
			/*if not found return NULL*/
			if (strchr(accept, *s))
			{
				/*return from function*/
				/*if char found in s*/
				return (s);
			}
			else
			{
				s++;
			}
		}
		return (NULL);
}
