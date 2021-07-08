#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
* *_strncat - function prints half of a string
* @src: takes input into function
* @dest: also takes input into function
* @n: takes even more input into function
* Return: returns successfully a 0 upon completion
*/

char *_strncat(char *dest, char *src, int n)
{
	/* make `ptr` point to the end of the destination string*/
	char *ptr = dest + strlen(dest);

	/* Appends characters of the source to the destination string*/
	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}

	/* null terminate destination string*/
	*ptr = '\0';

	/* destination string is returned by standard `strncat()`*/
	return (dest);
}
