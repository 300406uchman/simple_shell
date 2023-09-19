#include <stdio.h>

/**
 * description: A program that shows the usage of functions to pass betty check
 ** Author: Emmanuel Uche
 */
int main(void)
{
int num1 = 5;
int num2 = 10;
int result;
result = add(num1, num2);
printf("The sum of %d and %d is %d\n", num1, num2, result);
return (0);
}
