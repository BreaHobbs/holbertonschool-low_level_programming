#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * compare - function that locates a substring.
 * @X: a string
 * @Y: a string
 *
 * Return: Y
 */
int compare(const char *X, const char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
		{
			return (0);
		}
		X++;
		Y++;
	}
	return (*Y == '\0');
}
/**
 * *_strstr - function that locates a substring.
 * @haystack: a char
 * @needle: a char
 *
 * Return: dest
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
