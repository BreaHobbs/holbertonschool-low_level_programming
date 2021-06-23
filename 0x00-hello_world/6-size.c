#include <stdio.h>
/**
* main - Prints string in the put function
*
* Return: returns successfully a 0 upon completion
*/
int main(void)
{

char charType;
int intType;
long longType;
long longlongType;
float floatType;

printf("Size of char: %zu bytes\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long: %zu bytes\n", sizeof(longType));
printf("Size of long long: %zu byte\n", sizeof(longlongType));
printf("Size of float: %zu byte\n", sizeof(floatType));

return (0);
}
