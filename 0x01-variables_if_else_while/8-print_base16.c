#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
char u;
int x;
for (x = 0; x < 10; x++)
putchar((x % 10) + '0');
for (u = 'a'; u <= 'f'; u++)
putchar(u);
putchar('\n');
return (0);
}
