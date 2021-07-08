#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * *_strcat - concatenates two strings
 * @dest: a string
 * @src: a string
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	/* return if no memory is allocated to the destination*/
	char *ptr;
	ptr = 0;
	if (dest == NULL) 
	{
		return NULL;
	}

	/* take a pointer pointing to the beginning of the destination string*/

	ptr = dest;
	/* copy first `num` characters of C-string pointed by source*/
	/*into the array pointed by destination*/
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
while (n > 0)
        {   
        *dest = '\0';
        dest++;
        n--;
        } 
	/* null terminate destination string*/
	/*dest = '\0';*/

	/* the destination is returned by standard `strncpy()`*/
	return ptr;
}
