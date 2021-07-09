#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *_memcpy - Write a function that copies memory area.
 * @dest: a string
 * @src: a string
 * @n - variable takes in input
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
   // Typecast src and dest addresses to (char *)
   char *csrc = (char *)src;
   char *cdest = (char *)dest;
  
   // Copy contents of src[] to dest[]
   for ( i=0; i<n; i++)
       cdest[i] = csrc[i];

return (dest);

}
