#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: 0
*/
int main(void)
{
int n, x;

srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
/* your code goes there */
if(x >= 5)
{
printf("the last digit of is %d and is %d is greater than 5\n", n, x);
}
else if(x == 0)
{
printf("the last digit of is %d and is %d is 0\n", n, x);
}
else if(x <= 6 && !x == 0)
{
printf("the last digit of is %d and is %d is less than 6 and not 0\n", n, x);
}
return (0);
}
