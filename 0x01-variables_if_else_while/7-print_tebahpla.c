#include <stdio.h>
/**
 * main - print lowercase backwards
 * Return: 0
 */
int main
{
char x;
for (x = 'z'; x > 'a'; x--)
putchar(x);
putchar('\n')
return(0);
}
