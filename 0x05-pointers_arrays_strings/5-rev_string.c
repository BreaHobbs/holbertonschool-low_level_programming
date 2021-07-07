#include "holberton.h"
#include <string.h>
/**
* rev_string - A function that reverses a string.
* @str: takes input into function
* Return: returns successfully a 0 upon completion
*/
void rev_string(char *str)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	j = _strlen(str) - 1;

	while (i < j)
	{
	temp = str[j];
	str[j] = str[i];
	str[i] = temp;
	i++;
	j--;
	}
}

/**
* _strlen - counts the length of a string
* @p: take more input into function
* Return: returns the count
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
