#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * *string_toupper - a function that copies a string.
 * @s: takes in input
 * Return: dest
 */
char *string_toupper(char *s)
{
int i = 0;

while (s[i] != '\0')
{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 'a' + 'A';
	}
	i++;
}
return (s);
}
