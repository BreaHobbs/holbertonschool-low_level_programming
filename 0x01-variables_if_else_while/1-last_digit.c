#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints last digit of number n and tests number
*
* Return: returns successfully a 0 upon completion
*/
int main(void)
{
int n, lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
lastDigit = n % 10;
printf("Last digit of %d is ", n);
printf("%d ", lastDigit);
if (lastDigit > 5)
{
printf("and is greater than 5\n");
}
else if (lastDigit < 6 && lastDigit != 0)
{
printf("and is less than 6 and not 0\n");
}
else
{
printf("and is 0\n");
}
return (0);
}
