#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *mul - a function to multiply arguments
 *@argv: accepts argument and builds an array
 *@argc: counts the arguments
 *Return: returns
 */

int mul(int num1, unsigned int *num2)
{
if (num1 > 2)
printf("Error\n");
exit(98);

if (num1[0]/10 != 0 || num2[1]/10 != 0)
printf("Error\n");
exit(98);

int ans = num1[0] * num2[1];
printf(ans);

return (0);
}
