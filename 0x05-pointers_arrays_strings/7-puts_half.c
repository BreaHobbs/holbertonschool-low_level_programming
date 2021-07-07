#include "holberton.h"
#include <stdlib.h>
/**
* puts_half - function prints half of a string
* @str: takes input into function
* Return: returns successfully a 0 upon completion
*/
void puts_half(char *str)
{
	int n;

	int counter;
	
	int length_of_the_string = _strlen(str);

	if (length_of_the_string % 2 == 0)
	{	
		n = (length_of_the_string / 2);
		for (counter = n; counter < length_of_the_string; counter++)
		{
			
			_putchar(str[counter]);
			
		}	
		
	}
	else if (length_of_the_string % 2 != 0)
	{
		n = (length_of_the_string - 1) / 2;
		for (counter = n; counter < length_of_the_string; counter++)
			_putchar(str[counter]);	
	}	
		_putchar('\n');
}

/**
* _strlen - Write a function that returns the length of a string.
* @p: takes input into function
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
