#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * reverse_array - function reversed an array
 * @a: an array
 * @n: a string
 *
 * Return: dest
 */
void reverse_array(int *a, int n)
{

	int *first = a, *last = a + n - 1;

	while (first < last)
	{
		swap_int(first, last);
		first++;
		last--;
	}

}

/**
 * swap_int - swaps integer values
 * @a: an array
 * @b: a string
 *
 * Return: dest
 */
void swap_int(int *a, int *b)
{
	int a_hold, b_hold;

	a_hold = *a;
	b_hold = *b;
	*a = b_hold;
	*b = a_hold;
}
