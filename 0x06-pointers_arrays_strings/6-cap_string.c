#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * is_separator - checks input for seperator character
 * @n: value
 *
 * Return: whether it is or not
 */
int is_separator(int n)
{
	int answer = 0, i;
	char is_seperator[] = "' ''\t''\n',;.!?\"(){}";

	for (i = 0; is_seperator[i] != '\0'; i++)
		if (n == is_seperator[i])
			answer = 1;
	return (answer);
}
/**
 * *cap_string - capitalizes first letter of every word
 * @str: takes in input
 * Return: dest
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		/*check first character is lowercase alphabet*/
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32; /*subtract 32 to make it capital*/
			continue; /*continue to the loop*/
		}
		if (is_separator(str[i]) == 1)
		{
			/*if space is found, check next character*/
			i++;
			/*check next character is lowercase alphabet*/
			if (is_separator(str[i]) == 1)
				i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32; /*subtract 32 to make it capital*/
				continue; /*continue to the loop*/
			}
		}
		else
		{
			/*all other uppercase characters should be in lowercase*/
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32; /*subtract 32 to make it small/lowercase*/
		}
	}
return (str);
}
