#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *_strcat - concatenates two strings
 * @dest: a string
 * @src: a string
 *
 * Return: dest
 */
void reverse_array(int *a, int n)
{

	int *first = a, *last = a + n - 1;
	while(first < last) 
	{
		swap_int(first, last);
		first++;
		last--;
	}

}

void swap_int(int *a, int *b)
{
	int a_hold, b_hold;

	a_hold = *a;
	b_hold = *b;
	*a = b_hold;
	*b = a_hold;
}
