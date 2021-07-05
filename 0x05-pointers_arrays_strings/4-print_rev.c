#include <string.h>
#include "holberton.h"
/**
* _strlen - counts the length of a string
* @p: take more input into function
* Return: returns successfully a 0 upon completion
*/
int _strlen(char *p)
{
	unsigned int count = 0;

	while (*p != '\0')
	{
		count++;
		p++;
	}
	return (count);
}
/**
* print_rev - Write a function that prints a string in reverse
* @s: take more input into function
* Return: returns successfully a 0 upon completion
*/
void print_rev(char *s)
{
	int length;

	length = _strlen(s);

	length--;

	while (s[length] != '\0')
	{
		_putchar(s[length]);
			length--;
	}
_putchar('\n');
}
