#include "holberton.h"
#include <stdlib.h>
/**
* _strcpy - function prints half of a string
* @str: takes input into function
* Return: returns successfully a 0 upon completion
*/
char *_strcpy(char *dest, char *src)
{

	char * temp = dest;
	while ((*temp++ = *src++));
	return (dest);

}
