#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - This program will assign a random number to the variable n
*
* Return: returns successfully a 0 upon completion
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d", n); 
if (n == 0)
{
printf(" is zero\n");
}
else if (n > 0)
{
printf(" is positive\n");
}
else
{
printf(" is negative\n");
}
return (0);
}

